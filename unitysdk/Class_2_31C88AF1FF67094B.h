#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"

class Class_2_31C88AF1FF67094B_Class_1_DCFAECE867B6648C;
class Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_31C88AF1FF67094B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18228BD0)
#define CLASS_2_31C88AF1FF67094B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18228D30)
#define CLASS_2_31C88AF1FF67094B_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x18228970)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x18227700)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0x182277A0)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18228760)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x18227420)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0x18228210)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_A7F299268469013A_OFFSET UNITYSDK_OFFSET(0x18227DF0)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_ADA8821462003885_OFFSET UNITYSDK_OFFSET(0x18227750)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_AF53E2397CBBA9E9_OFFSET UNITYSDK_OFFSET(0x182287B0)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x18228270)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_BC7F5D611FFB3D9A_OFFSET UNITYSDK_OFFSET(0x182280F0)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x18227F90)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_DBB52D7160A5303C_OFFSET UNITYSDK_OFFSET(0x182281A0)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x18228A80)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x18228B40)
#define CLASS_2_31C88AF1FF67094B_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x18228980)
#define CLASS_2_31C88AF1FF67094B__CTOR_OFFSET UNITYSDK_OFFSET(0x18228E60)
#define CLASS_2_31C88AF1FF67094B__ONBIND_OFFSET UNITYSDK_OFFSET(0x182276A0)

inline static constexpr unsigned int Class_2_31C88AF1FF67094B_TypeDefinitionIndex = 68543;

class Class_2_31C88AF1FF67094B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::System::Collections::Generic::Dictionary_2<::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1*, ::System::Int32>* Field_2_3; // 0x60
	::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1* Field_2_4; // 0x68
	::RPG::GameCore::GameEntity* Field_2_5; // 0x70
	::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1* Field_2_6; // 0x78
	::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1* Field_2_7; // 0x80
	::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1* Field_2_8; // 0x88
	::System::Action* Field_2_9; // 0x90
	::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1* Field_2_10; // 0x98
	::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1* Field_2_11; // 0xA0
	::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1* Field_2_12; // 0xA8
	::RPG::Client::PrefabLoadMeta* Field_2_13; // 0xB0
	::System::Collections::Generic::Dictionary_2<::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1*, ::Class_2_31C88AF1FF67094B_Class_1_DCFAECE867B6648C*>* Field_2_14; // 0xB8
	::System::Boolean Field_2_15; // 0xC0
	::System::Int32 _Priority_k__BackingField; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADA8821462003885(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_ADA8821462003885_OFFSET))(this, a1);
	}

	::System::Void Method_2_A7F299268469013A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_A7F299268469013A_OFFSET))(this, a1);
	}

	::System::Void Method_2_37CF7377CBA6E635()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_37CF7377CBA6E635_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_DBB52D7160A5303C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_DBB52D7160A5303C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Void Method_2_B76CD5CB3E297DF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_B76CD5CB3E297DF3_OFFSET))(this);
	}

	::System::Void Method_2_AF53E2397CBBA9E9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_AF53E2397CBBA9E9_OFFSET))(this, a1);
	}

	::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1* Method_2_BC7F5D611FFB3D9A(::RPG::GameCore::EntityRelationType a1, ::RPG::GameCore::EntityRelationMemberType a2)
	{
		return ((::Class_2_31C88AF1FF67094B_Class_1_E3755AE76A4781C1*(*)(::PVOID, ::RPG::GameCore::EntityRelationType, ::RPG::GameCore::EntityRelationMemberType))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_BC7F5D611FFB3D9A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C88AF1FF67094B_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
