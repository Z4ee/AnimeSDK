#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CF8B0DC37DFDE560_Struct_2_15DAEDDD7C0F5F31.h"
#include "unitysdk/System/Object.h"

class Class_1_EED1D87C81F7C2A6;
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CF8B0DC37DFDE560_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0xDAB77B0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0xDAB9A20)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0xDAB8CE0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0xDAB8550)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_30E1BE7387CD0701_OFFSET UNITYSDK_OFFSET(0xDAB96A0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_37B9CAEB4EAE67B7_OFFSET UNITYSDK_OFFSET(0xDAB9700)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xDAB7E60)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_49B11BA78A61F1C1_OFFSET UNITYSDK_OFFSET(0xDAB8E80)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_726BE9283E00DAB1_OFFSET UNITYSDK_OFFSET(0xDAB8340)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_820BC74DFBBFC7F7_OFFSET UNITYSDK_OFFSET(0xDAB7850)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_82D51DE4D1764C67_OFFSET UNITYSDK_OFFSET(0xDAB7560)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_83EF02F8F4B2192A_OFFSET UNITYSDK_OFFSET(0xDAB86C0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_8B6F11557B375B74_OFFSET UNITYSDK_OFFSET(0xDAB7FF0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_8CB3ABD41F954D02_OFFSET UNITYSDK_OFFSET(0xDAB8F00)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xDAB7BB0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_9AB045C54EC604F2_OFFSET UNITYSDK_OFFSET(0xDAB81B0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xDAB77D0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xDAB8880)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0xDAB8960)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDAB8170)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_D41B9F644D365890_OFFSET UNITYSDK_OFFSET(0xDAB7E10)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_DEAC86EB2AD5D389_OFFSET UNITYSDK_OFFSET(0xDAB8060)
#define CLASS_1_CF8B0DC37DFDE560_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0xDAB77C0)
#define CLASS_1_CF8B0DC37DFDE560__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB7820)

inline static constexpr unsigned int Class_1_CF8B0DC37DFDE560_TypeDefinitionIndex = 69162;

class Class_1_CF8B0DC37DFDE560 : public ::System::Object
{
public:
	static ::RPG::Client::Billboard::BillboardNotifyParam** StaticGet_MDOJNPFLKPK()
	{
		return (::RPG::Client::Billboard::BillboardNotifyParam**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF8B0DC37DFDE560_TypeDefinitionIndex)->GetStaticField(0x5E4D0);
	}
	static ::System::UInt32* StaticGet_ENBDNGNBAKB()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF8B0DC37DFDE560_TypeDefinitionIndex)->GetStaticField(0x134C0);
	}
	// static const ::System::String* GEHLLIAHIAK; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_EED1D87C81F7C2A6*>* PGHFDBHKNKI; // 0x10
	::System::Collections::Generic::List_1<::Class_1_EED1D87C81F7C2A6*>* FBHMMHICDDG; // 0x18
	::RPG::GameCore::MunicipalChatConfig* EJJEEJENLDA; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BBCKAEJKLNI; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* JLDDEOIICOM; // 0x30
	::Class_1_EED1D87C81F7C2A6* LMCCPIDGDBC; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_CF8B0DC37DFDE560_Struct_2_15DAEDDD7C0F5F31>* KIJICCJEGMF; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GIIFHKLFMDN; // 0x48
	::System::Boolean _IsStarted_k__BackingField; // 0x50
	::System::Single NBCMJCAKMNN; // 0x54

	::System::Void _ctor(::RPG::GameCore::MunicipalChatConfig* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MunicipalChatConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560__CTOR_OFFSET))(this, a1, a2);
	}

	static ::RPG::Client::Billboard::BillboardNotifyParam* Method_1_82D51DE4D1764C67(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_82D51DE4D1764C67_OFFSET))(a1);
	}

	::System::Boolean get_IsStarted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_GET_ISSTARTED_OFFSET))(this);
	}

	::System::Void set_IsStarted(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_SET_ISSTARTED_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_D41B9F644D365890(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_D41B9F644D365890_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Boolean Method_1_8B6F11557B375B74(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_8B6F11557B375B74_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEAC86EB2AD5D389()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_DEAC86EB2AD5D389_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9AB045C54EC604F2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_9AB045C54EC604F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_726BE9283E00DAB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_726BE9283E00DAB1_OFFSET))(this);
	}

	::System::Void Method_1_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_83EF02F8F4B2192A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_83EF02F8F4B2192A_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_1_49B11BA78A61F1C1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_49B11BA78A61F1C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CB3ABD41F954D02(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_8CB3ABD41F954D02_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_30E1BE7387CD0701(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_30E1BE7387CD0701_OFFSET))(this, a1);
	}

	::System::Void Method_1_37B9CAEB4EAE67B7(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_37B9CAEB4EAE67B7_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_1_820BC74DFBBFC7F7(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_820BC74DFBBFC7F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
	}
};
