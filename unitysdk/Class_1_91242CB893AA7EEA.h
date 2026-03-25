#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_91242CB893AA7EEA_WarmupStartReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttributeDescriptor.h"

class Class_1_2FD7A51524ECE2E7;
class Class_2_1F0FB28CE7ECC617;
class PassAndKeywords;
class WarmupSVC;
namespace SimpleJSON { class JSONClass; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class ShaderVariantCollection; }

#define CLASS_1_91242CB893AA7EEA_GET_STARTREASON_OFFSET UNITYSDK_OFFSET(0x10AEC250)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_0FA372283202E7EF_OFFSET UNITYSDK_OFFSET(0x10AEC270)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x10AEC800)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_155F255959292B13_OFFSET UNITYSDK_OFFSET(0x10AEDA80)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_1C5E85EAB424AB24_OFFSET UNITYSDK_OFFSET(0x10AEC550)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_25CC16398A885BF9_OFFSET UNITYSDK_OFFSET(0x10AF0010)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10AED0B0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_33E4B14E5F6E0D14_OFFSET UNITYSDK_OFFSET(0x10AEE310)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10AED160)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_46E030E6F5465A66_OFFSET UNITYSDK_OFFSET(0x10AEEE60)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_547713006622A4FD_OFFSET UNITYSDK_OFFSET(0x10AECB50)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_573FCC27613CC1AE_OFFSET UNITYSDK_OFFSET(0x10AEC910)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_6FB692F54BD42A14_OFFSET UNITYSDK_OFFSET(0x10AEEED0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_7B580405A573DFE0_OFFSET UNITYSDK_OFFSET(0x10AEE7D0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_7FCEFE2429EDE488_OFFSET UNITYSDK_OFFSET(0x10AECC80)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_8279976FE67B5972_OFFSET UNITYSDK_OFFSET(0x10AEDE00)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_87CB8E735FBF02D2_OFFSET UNITYSDK_OFFSET(0x10AEEC90)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_8848F83C4F5F89A1_OFFSET UNITYSDK_OFFSET(0x10AF0FD0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_8D42909EDD4DCCDC_OFFSET UNITYSDK_OFFSET(0x10AEF9B0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_8F11FA7D3DC80F56_OFFSET UNITYSDK_OFFSET(0x10AED860)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x10AEE5F0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x10AECEB0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x10AED1C0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_AC31F425E7B1C1BA_OFFSET UNITYSDK_OFFSET(0x10AEE640)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x10AEE470)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_B854C3DB0DB67745_OFFSET UNITYSDK_OFFSET(0x10AEDEE0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_BA446D4D3EBC6EEF_OFFSET UNITYSDK_OFFSET(0x10AEBDD0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_C923407A53F704A1_OFFSET UNITYSDK_OFFSET(0x10AED7D0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x10AED330)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x10AEEB20)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x10AEBD80)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x10AECDA0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0x10AEED30)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x10AEC7E0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x10AEC7F0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10AEC7D0)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_FA58824BA12F6F62_1_OFFSET UNITYSDK_OFFSET(0x10AEC780)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x10AEC730)
#define CLASS_1_91242CB893AA7EEA_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x10AED000)
#define CLASS_1_91242CB893AA7EEA_SET_STARTREASON_OFFSET UNITYSDK_OFFSET(0x10AEC260)
#define CLASS_1_91242CB893AA7EEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x10AF1FC0)
#define CLASS_1_91242CB893AA7EEA__CTOR_OFFSET UNITYSDK_OFFSET(0x10AEE710)

inline static constexpr unsigned int Class_1_91242CB893AA7EEA_TypeDefinitionIndex = 38298;

class Class_1_91242CB893AA7EEA : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91242CB893AA7EEA_TypeDefinitionIndex)->GetStaticField(0x46CA0);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91242CB893AA7EEA_TypeDefinitionIndex)->GetStaticField(0x46CA8);
	}
	static ::System::String** StaticGet_Field_1_18()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91242CB893AA7EEA_TypeDefinitionIndex)->GetStaticField(0x46CB0);
	}
	static ::System::String** StaticGet_Field_1_17()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91242CB893AA7EEA_TypeDefinitionIndex)->GetStaticField(0x46CB8);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_91242CB893AA7EEA_TypeDefinitionIndex)->GetStaticField(0x126C0);
	}
	::WarmupSVC* Field_1_10; // 0x10
	::Class_1_2FD7A51524ECE2E7* Field_1_16; // 0x18
	::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>* Field_1_11; // 0x20
	::Il2CppArray<::System::String*>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Shader*>* Field_1_8; // 0x38
	::System::Boolean Field_1_7; // 0x40
	::System::Boolean Field_1_3; // 0x41
	::System::Int32 Field_1_14; // 0x44
	::System::Boolean Field_1_1; // 0x48
	::System::Boolean Field_1_15; // 0x49
	::System::Boolean Field_1_12; // 0x4A
	::System::Int32 Field_1_13; // 0x4C
	::Class_1_91242CB893AA7EEA_WarmupStartReason _StartReason_k__BackingField; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_DC715239B8B98D9C_OFFSET))(this);
	}

	::Class_1_91242CB893AA7EEA_WarmupStartReason get_StartReason()
	{
		return ((::Class_1_91242CB893AA7EEA_WarmupStartReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_GET_STARTREASON_OFFSET))(this);
	}

	::System::Void set_StartReason(::Class_1_91242CB893AA7EEA_WarmupStartReason value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91242CB893AA7EEA_WarmupStartReason))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_SET_STARTREASON_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_0FA372283202E7EF(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_0FA372283202E7EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C5E85EAB424AB24(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_1C5E85EAB424AB24_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_1_FA58824BA12F6F62_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_FA58824BA12F6F62_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_BA446D4D3EBC6EEF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_BA446D4D3EBC6EEF_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::String* Method_1_C923407A53F704A1(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_C923407A53F704A1_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_8F11FA7D3DC80F56(::WarmupSVC*& a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::WarmupSVC*&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_8F11FA7D3DC80F56_OFFSET))(a1, a2);
	}

	::System::Void Method_1_155F255959292B13(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_155F255959292B13_OFFSET))(this, a1);
	}

	::System::Void Method_1_573FCC27613CC1AE(::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_573FCC27613CC1AE_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_8279976FE67B5972()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_8279976FE67B5972_OFFSET))();
	}

	::System::Void Method_1_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_102A1038C38883F3_OFFSET))(this);
	}

	::System::Boolean Method_1_B854C3DB0DB67745()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_B854C3DB0DB67745_OFFSET))(this);
	}

	::System::Boolean Method_1_A871253BFD471C99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_A871253BFD471C99_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Shader*>* Method_1_AC31F425E7B1C1BA()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Shader*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_AC31F425E7B1C1BA_OFFSET))();
	}

	::System::Void Method_1_7FCEFE2429EDE488(::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_7FCEFE2429EDE488_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B580405A573DFE0(::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>*, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_7B580405A573DFE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_547713006622A4FD(::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_547713006622A4FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	static ::System::Void Method_1_87CB8E735FBF02D2(::WarmupSVC*& a1)
	{
		return ((::System::Void(*)(::WarmupSVC*&))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_87CB8E735FBF02D2_OFFSET))(a1);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::UnityEngine::Shader* Method_1_33E4B14E5F6E0D14(::System::String* a1)
	{
		return ((::UnityEngine::Shader*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_33E4B14E5F6E0D14_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	static ::System::Void Method_1_EBAF10BBA97B82DD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_EBAF10BBA97B82DD_OFFSET))();
	}

	static ::System::Void Method_1_46E030E6F5465A66()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_46E030E6F5465A66_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::SimpleJSON::JSONClass*>* Method_1_6FB692F54BD42A14(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::SimpleJSON::JSONClass*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_6FB692F54BD42A14_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONClass* Method_1_8D42909EDD4DCCDC(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::SimpleJSON::JSONClass*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_8D42909EDD4DCCDC_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONClass* Method_1_25CC16398A885BF9(::SimpleJSON::JSONClass* a1, ::SimpleJSON::JSONClass* a2)
	{
		return ((::SimpleJSON::JSONClass*(*)(::SimpleJSON::JSONClass*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_25CC16398A885BF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8848F83C4F5F89A1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::PassAndKeywords*>*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>*>* a2, ::Class_2_1F0FB28CE7ECC617* a3, ::SimpleJSON::JSONClass* a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::PassAndKeywords*>*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>*>*, ::Class_2_1F0FB28CE7ECC617*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + CLASS_1_91242CB893AA7EEA_METHOD_1_8848F83C4F5F89A1_OFFSET))(a1, a2, a3, a4);
	}
};
