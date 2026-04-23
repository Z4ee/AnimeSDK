#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_72B8F0CA34E4DCF6_Struct_2_4F175C8CB0325EB4.h"
#include "unitysdk/System/Object.h"

class Class_1_A795842876E00DE4;
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_72B8F0CA34E4DCF6_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x1248E6F0)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x12490950)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x1248F1F0)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_30E1BE7387CD0701_OFFSET UNITYSDK_OFFSET(0x12490400)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_4A944EA4C8E854EF_OFFSET UNITYSDK_OFFSET(0x1248FBB0)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_4B08A5EF9CAB1270_OFFSET UNITYSDK_OFFSET(0x12490460)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x1248F680)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x1248ED70)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_5A959B01CAC89C9F_OFFSET UNITYSDK_OFFSET(0x1248F0C0)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_617412338D2072E4_OFFSET UNITYSDK_OFFSET(0x1248F470)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_77ACBD7BC5408846_OFFSET UNITYSDK_OFFSET(0x1248F360)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_820BC74DFBBFC7F7_OFFSET UNITYSDK_OFFSET(0x1248E790)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_831B8A86C0F326D9_OFFSET UNITYSDK_OFFSET(0x1248ED20)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_8B1D1F4F3D0E01CB_OFFSET UNITYSDK_OFFSET(0x1248FC30)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_8B6F11557B375B74_OFFSET UNITYSDK_OFFSET(0x1248EF00)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x1248EB00)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1248F5A0)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_C26E988FC89535DC_OFFSET UNITYSDK_OFFSET(0x1248E410)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x1248FA80)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1248F080)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x1248EF70)
#define CLASS_1_72B8F0CA34E4DCF6_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1248E710)
#define CLASS_1_72B8F0CA34E4DCF6_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x1248E700)
#define CLASS_1_72B8F0CA34E4DCF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1248E760)

inline static constexpr unsigned int Class_1_72B8F0CA34E4DCF6_TypeDefinitionIndex = 63800;

class Class_1_72B8F0CA34E4DCF6 : public ::System::Object
{
public:
	static ::RPG::Client::Billboard::BillboardNotifyParam** StaticGet_Field_1_0()
	{
		return (::RPG::Client::Billboard::BillboardNotifyParam**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72B8F0CA34E4DCF6_TypeDefinitionIndex)->GetStaticField(0xCB20);
	}
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_72B8F0CA34E4DCF6_TypeDefinitionIndex)->GetStaticField(0x4DB0);
	}
	// static const ::System::String* Field_1_1; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* Field_1_3; // 0x18
	::RPG::GameCore::MunicipalChatConfig* Field_1_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_A795842876E00DE4*>* Field_1_11; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_5; // 0x30
	::Class_1_A795842876E00DE4* Field_1_9; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_72B8F0CA34E4DCF6_Struct_2_4F175C8CB0325EB4>* Field_1_4; // 0x40
	::System::Collections::Generic::List_1<::Class_1_A795842876E00DE4*>* Field_1_10; // 0x48
	::System::Boolean _IsStarted_k__BackingField; // 0x50
	::System::Single Field_1_7; // 0x54

	::System::Void _ctor(::RPG::GameCore::MunicipalChatConfig* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MunicipalChatConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6__CTOR_OFFSET))(this, a1, a2);
	}

	static ::RPG::Client::Billboard::BillboardNotifyParam* Method_1_C26E988FC89535DC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_C26E988FC89535DC_OFFSET))(a1);
	}

	::System::Boolean get_IsStarted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_GET_ISSTARTED_OFFSET))(this);
	}

	::System::Void set_IsStarted(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_SET_ISSTARTED_OFFSET))(this, value);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_831B8A86C0F326D9(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_831B8A86C0F326D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Boolean Method_1_8B6F11557B375B74(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_8B6F11557B375B74_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_5A959B01CAC89C9F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_5A959B01CAC89C9F_OFFSET))(this, a1);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_1_77ACBD7BC5408846(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_77ACBD7BC5408846_OFFSET))(this, a1);
	}

	::System::Void Method_1_617412338D2072E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_617412338D2072E4_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_1_4A944EA4C8E854EF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_4A944EA4C8E854EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B1D1F4F3D0E01CB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_8B1D1F4F3D0E01CB_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_30E1BE7387CD0701(::System::String* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_30E1BE7387CD0701_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B08A5EF9CAB1270(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_4B08A5EF9CAB1270_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Void Method_1_820BC74DFBBFC7F7(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_820BC74DFBBFC7F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72B8F0CA34E4DCF6_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}
};
