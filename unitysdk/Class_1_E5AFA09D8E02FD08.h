#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E5AFA09D8E02FD08_WarmupStartReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttributeDescriptor.h"

class Class_1_3DF80F278B6BDF72;
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

#define CLASS_1_E5AFA09D8E02FD08_GET_STARTREASON_OFFSET UNITYSDK_OFFSET(0x15EB9310)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_057D664B08376234_OFFSET UNITYSDK_OFFSET(0x15EBE040)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_08390806370BA43F_OFFSET UNITYSDK_OFFSET(0x15EBF3C0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x15EBBD50)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x15EB9910)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_107FD70DCCEDAA2A_OFFSET UNITYSDK_OFFSET(0x15EBB740)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_183775EBED825945_OFFSET UNITYSDK_OFFSET(0x15EB9C80)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_1C5E85EAB424AB24_OFFSET UNITYSDK_OFFSET(0x15EB9660)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15EBA150)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_352C8D2911FBE3AB_OFFSET UNITYSDK_OFFSET(0x15EBC0F0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15EBA200)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_539150C224ACEEBF_OFFSET UNITYSDK_OFFSET(0x15EB9E10)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_5D6CD31BA2372F92_OFFSET UNITYSDK_OFFSET(0x15EB9F50)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_6699C48D2240A7A2_OFFSET UNITYSDK_OFFSET(0x15EBA8B0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_6BF485E2474856B0_OFFSET UNITYSDK_OFFSET(0x15EBBBD0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0x15EBC5F0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_8080E22F79F246F0_OFFSET UNITYSDK_OFFSET(0x15EBA3D0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_8279976FE67B5972_OFFSET UNITYSDK_OFFSET(0x15EBB660)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x15EB8DF0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_866242D8F6C828B4_OFFSET UNITYSDK_OFFSET(0x15EB8E40)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_87CB8E735FBF02D2_OFFSET UNITYSDK_OFFSET(0x15EBC550)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_923A37F9BA4FBD06_OFFSET UNITYSDK_OFFSET(0x15EB9330)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x15EB9FB0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x15EBA260)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_AC31F425E7B1C1BA_OFFSET UNITYSDK_OFFSET(0x15EBBF90)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_B44A4F89D9CB9736_OFFSET UNITYSDK_OFFSET(0x15EBAAB0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_BB8AD55CC76A6352_OFFSET UNITYSDK_OFFSET(0x15EBD7E0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_C1A87A47FD383D5E_OFFSET UNITYSDK_OFFSET(0x15EB9A20)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_C923407A53F704A1_OFFSET UNITYSDK_OFFSET(0x15EBA820)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0x15EBC400)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_E5B2D19C36637166_OFFSET UNITYSDK_OFFSET(0x15EBBF40)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x15EB98F0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x15EB9900)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15EB98E0)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_F94BF46E59DB6B56_OFFSET UNITYSDK_OFFSET(0x15EBC780)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_FA58824BA12F6F62_1_OFFSET UNITYSDK_OFFSET(0x15EB9890)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x15EB9840)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_FE72BF2F281C4FA8_OFFSET UNITYSDK_OFFSET(0x15EBC710)
#define CLASS_1_E5AFA09D8E02FD08_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x15EBA0A0)
#define CLASS_1_E5AFA09D8E02FD08_SET_STARTREASON_OFFSET UNITYSDK_OFFSET(0x15EB9320)
#define CLASS_1_E5AFA09D8E02FD08__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EC0A60)
#define CLASS_1_E5AFA09D8E02FD08__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBC060)

inline static constexpr unsigned int Class_1_E5AFA09D8E02FD08_TypeDefinitionIndex = 47434;

class Class_1_E5AFA09D8E02FD08 : public ::System::Object
{
public:
	static ::System::String** StaticGet_DJMKFFDOEFN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5AFA09D8E02FD08_TypeDefinitionIndex)->GetStaticField(0x50330);
	}
	static ::System::String** StaticGet_OCMLGADHCIB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5AFA09D8E02FD08_TypeDefinitionIndex)->GetStaticField(0x50338);
	}
	static ::System::String** StaticGet_JBBNNKKBNEK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5AFA09D8E02FD08_TypeDefinitionIndex)->GetStaticField(0x50340);
	}
	static ::System::String** StaticGet_LIIAFGOKDHA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5AFA09D8E02FD08_TypeDefinitionIndex)->GetStaticField(0x50348);
	}
	static ::System::Boolean* StaticGet_GBBJIEBFPNI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5AFA09D8E02FD08_TypeDefinitionIndex)->GetStaticField(0x120D0);
	}
	::System::Collections::Generic::List_1<::UnityEngine::Shader*>* JOANNGLOFPM; // 0x10
	::WarmupSVC* FCGOEOAINJP; // 0x18
	::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>* DCFHEBILJLK; // 0x20
	::Il2CppArray<::System::String*>* FPDCLGJAHEI; // 0x28
	::Class_1_3DF80F278B6BDF72* NLACHFOEKDJ; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* IHLINCHNNHC; // 0x38
	::System::Int32 AKJDODFEAMG; // 0x40
	::Class_1_E5AFA09D8E02FD08_WarmupStartReason _StartReason_k__BackingField; // 0x44
	::System::Int32 ADNDFBCPABH; // 0x48
	::System::Boolean KKCFCJFAAKA; // 0x4C
	::System::Boolean KCALMLKOMFC; // 0x4D
	::System::Boolean KLLLAHLPMNB; // 0x4E
	::System::Boolean ODCLJGLPFNN; // 0x4F
	::System::Boolean DFNKJIJNJEM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08__CCTOR_OFFSET))();
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::Class_1_E5AFA09D8E02FD08_WarmupStartReason get_StartReason()
	{
		return ((::Class_1_E5AFA09D8E02FD08_WarmupStartReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_GET_STARTREASON_OFFSET))(this);
	}

	::System::Void set_StartReason(::Class_1_E5AFA09D8E02FD08_WarmupStartReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E5AFA09D8E02FD08_WarmupStartReason))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_SET_STARTREASON_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_923A37F9BA4FBD06(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_923A37F9BA4FBD06_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C5E85EAB424AB24(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_1C5E85EAB424AB24_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_1_FA58824BA12F6F62_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_FA58824BA12F6F62_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_866242D8F6C828B4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_866242D8F6C828B4_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_8080E22F79F246F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_8080E22F79F246F0_OFFSET))(this);
	}

	::System::String* Method_1_C923407A53F704A1(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_C923407A53F704A1_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_6699C48D2240A7A2(::WarmupSVC*& a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::WarmupSVC*&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_6699C48D2240A7A2_OFFSET))(a1, a2);
	}

	::System::Void Method_1_B44A4F89D9CB9736(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_B44A4F89D9CB9736_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1A87A47FD383D5E(::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_C1A87A47FD383D5E_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_8279976FE67B5972()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_8279976FE67B5972_OFFSET))();
	}

	::System::Void Method_1_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_102A1038C38883F3_OFFSET))(this);
	}

	::System::Boolean Method_1_107FD70DCCEDAA2A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_107FD70DCCEDAA2A_OFFSET))(this);
	}

	::System::Boolean Method_1_A871253BFD471C99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_A871253BFD471C99_OFFSET))(this);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Shader*>* Method_1_AC31F425E7B1C1BA()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Shader*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_AC31F425E7B1C1BA_OFFSET))();
	}

	::System::Void Method_1_539150C224ACEEBF(::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_539150C224ACEEBF_OFFSET))(this, a1);
	}

	::System::Void Method_1_352C8D2911FBE3AB(::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>*, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_352C8D2911FBE3AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_183775EBED825945(::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_183775EBED825945_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEAC86EB2AD5D389()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_DEAC86EB2AD5D389_OFFSET))(this);
	}

	static ::System::Void Method_1_87CB8E735FBF02D2(::WarmupSVC*& a1)
	{
		return ((::System::Void(*)(::WarmupSVC*&))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_87CB8E735FBF02D2_OFFSET))(a1);
	}

	::System::Void Method_1_5D6CD31BA2372F92()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_5D6CD31BA2372F92_OFFSET))(this);
	}

	::UnityEngine::Shader* Method_1_6BF485E2474856B0(::System::String* a1)
	{
		return ((::UnityEngine::Shader*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_6BF485E2474856B0_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_E5B2D19C36637166()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_E5B2D19C36637166_OFFSET))(this);
	}

	static ::System::Void Method_1_7D21D8548943D577()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_7D21D8548943D577_OFFSET))();
	}

	static ::System::Void Method_1_FE72BF2F281C4FA8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_FE72BF2F281C4FA8_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::SimpleJSON::JSONClass*>* Method_1_F94BF46E59DB6B56(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::SimpleJSON::JSONClass*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_F94BF46E59DB6B56_OFFSET))(a1);
	}

	static ::SimpleJSON::JSONClass* Method_1_BB8AD55CC76A6352(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::SimpleJSON::JSONClass*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_BB8AD55CC76A6352_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONClass* Method_1_057D664B08376234(::SimpleJSON::JSONClass* a1, ::SimpleJSON::JSONClass* a2)
	{
		return ((::SimpleJSON::JSONClass*(*)(::SimpleJSON::JSONClass*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_057D664B08376234_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_08390806370BA43F(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::PassAndKeywords*>*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>*>* a2, ::Class_2_1F0FB28CE7ECC617* a3, ::SimpleJSON::JSONClass* a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::PassAndKeywords*>*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::UnityEngine::Rendering::VertexAttributeDescriptor>*>*, ::Class_2_1F0FB28CE7ECC617*, ::SimpleJSON::JSONClass*))((::PBYTE)hIl2Cpp + CLASS_1_E5AFA09D8E02FD08_METHOD_1_08390806370BA43F_OFFSET))(a1, a2, a3, a4);
	}
};
