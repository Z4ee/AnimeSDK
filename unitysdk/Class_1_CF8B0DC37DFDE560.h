#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CF8B0DC37DFDE560_Struct_2_4F175C8CB0325EB4.h"
#include "unitysdk/System/Object.h"

class Class_1_EED1D87C81F7C2A6;
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CF8B0DC37DFDE560_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0xC44DAE0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0xC450160)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_0DCB4453CDB6BCB3_OFFSET UNITYSDK_OFFSET(0xC44E320)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_2195E49F2E39FE27_OFFSET UNITYSDK_OFFSET(0xC44E540)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_30E1BE7387CD0701_OFFSET UNITYSDK_OFFSET(0xC44FC10)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xC44E190)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_4B08A5EF9CAB1270_OFFSET UNITYSDK_OFFSET(0xC44FC70)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_6643AA032101239A_OFFSET UNITYSDK_OFFSET(0xC44E950)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_726BE9283E00DAB1_OFFSET UNITYSDK_OFFSET(0xC44E740)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_820BC74DFBBFC7F7_OFFSET UNITYSDK_OFFSET(0xC44DB80)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_8CB3ABD41F954D02_OFFSET UNITYSDK_OFFSET(0xC44F3F0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xC44DEE0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xC44DB00)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_AA957E371B77E633_OFFSET UNITYSDK_OFFSET(0xC44EB30)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC44ECF0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_B425254EC4B7BAD9_OFFSET UNITYSDK_OFFSET(0xC44F370)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0xC44E3F0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xC44F1D0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0xC44EDD0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_C26E988FC89535DC_OFFSET UNITYSDK_OFFSET(0xC44D7F0)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC44E500)
#define CLASS_1_CF8B0DC37DFDE560_METHOD_1_D41B9F644D365890_OFFSET UNITYSDK_OFFSET(0xC44E140)
#define CLASS_1_CF8B0DC37DFDE560_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0xC44DAF0)
#define CLASS_1_CF8B0DC37DFDE560__CTOR_OFFSET UNITYSDK_OFFSET(0xC44DB50)

inline static constexpr unsigned int Class_1_CF8B0DC37DFDE560_TypeDefinitionIndex = 64721;

class Class_1_CF8B0DC37DFDE560 : public ::System::Object
{
public:
	static ::RPG::Client::Billboard::BillboardNotifyParam** StaticGet_Field_1_0()
	{
		return (::RPG::Client::Billboard::BillboardNotifyParam**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF8B0DC37DFDE560_TypeDefinitionIndex)->GetStaticField(0x48430);
	}
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF8B0DC37DFDE560_TypeDefinitionIndex)->GetStaticField(0xD470);
	}
	// static const ::System::String* Field_1_2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_EED1D87C81F7C2A6*>* Field_1_3; // 0x10
	::Class_1_EED1D87C81F7C2A6* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_EED1D87C81F7C2A6*>* Field_1_5; // 0x20
	::RPG::GameCore::MunicipalChatConfig* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_7; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_1_8; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_9; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_CF8B0DC37DFDE560_Struct_2_4F175C8CB0325EB4>* Field_1_10; // 0x48
	::System::Single Field_1_11; // 0x50
	::System::Boolean _IsStarted_k__BackingField; // 0x54

	::System::Void _ctor(::RPG::GameCore::MunicipalChatConfig* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MunicipalChatConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560__CTOR_OFFSET))(this, a1, a2);
	}

	static ::RPG::Client::Billboard::BillboardNotifyParam* Method_1_C26E988FC89535DC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_C26E988FC89535DC_OFFSET))(a1);
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

	::System::Boolean Method_1_0DCB4453CDB6BCB3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_0DCB4453CDB6BCB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2195E49F2E39FE27(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_2195E49F2E39FE27_OFFSET))(this, a1);
	}

	::System::Void Method_1_726BE9283E00DAB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_726BE9283E00DAB1_OFFSET))(this);
	}

	::System::Void Method_1_6643AA032101239A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_6643AA032101239A_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA957E371B77E633()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_AA957E371B77E633_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_1_B425254EC4B7BAD9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_B425254EC4B7BAD9_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CB3ABD41F954D02(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_8CB3ABD41F954D02_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_30E1BE7387CD0701(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_30E1BE7387CD0701_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B08A5EF9CAB1270(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF8B0DC37DFDE560_METHOD_1_4B08A5EF9CAB1270_OFFSET))(this, a1);
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
