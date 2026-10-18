#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0B1B7187C58DA729.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_1490;
class Class_2_CF06A63D80B01EAC_Class_0_16E7307DCC43CB2C_38;
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_CF06A63D80B01EAC_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xD761090)
#define CLASS_2_CF06A63D80B01EAC_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xD7610B0)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_2C0C8F896D274202_OFFSET UNITYSDK_OFFSET(0xD763D40)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_4B1FDFC558EBE77E_OFFSET UNITYSDK_OFFSET(0xD762DF0)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_62114CFF2DC62611_OFFSET UNITYSDK_OFFSET(0xD762280)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_6F1937D993122EAF_OFFSET UNITYSDK_OFFSET(0xD763B30)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xD761A80)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xD762A50)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_B6C2360D539806AC_OFFSET UNITYSDK_OFFSET(0xD763BB0)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_B96634871A080662_OFFSET UNITYSDK_OFFSET(0xD761DA0)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_D045D1BBEEB064E2_OFFSET UNITYSDK_OFFSET(0xD762BD0)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_D122820B65E67740_OFFSET UNITYSDK_OFFSET(0xD763470)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_D609BB4C90312500_OFFSET UNITYSDK_OFFSET(0xD763C50)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_D72E9A253ACC93E3_OFFSET UNITYSDK_OFFSET(0xD762AF0)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_DFD7F5C5419FD422_OFFSET UNITYSDK_OFFSET(0xD7610D0)
#define CLASS_2_CF06A63D80B01EAC_METHOD_2_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xD762710)
#define CLASS_2_CF06A63D80B01EAC_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xD7610A0)
#define CLASS_2_CF06A63D80B01EAC_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xD7610C0)
#define CLASS_2_CF06A63D80B01EAC__CTOR_OFFSET UNITYSDK_OFFSET(0xD763ED0)

inline static constexpr unsigned int Class_2_CF06A63D80B01EAC_TypeDefinitionIndex = 79511;

class Class_2_CF06A63D80B01EAC : public ::Class_1_0B1B7187C58DA729
{
public:
	::Class_0_16E4307DCC419505_1490* _Source_k__BackingField; // 0x10
	::Class_2_CF06A63D80B01EAC_Class_0_16E7307DCC43CB2C_38* _Context_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC__CTOR_OFFSET))(this);
	}

	::Class_2_CF06A63D80B01EAC_Class_0_16E7307DCC43CB2C_38* get_Context()
	{
		return ((::Class_2_CF06A63D80B01EAC_Class_0_16E7307DCC43CB2C_38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_GET_CONTEXT_OFFSET))(this);
	}

	::System::Void set_Context(::Class_2_CF06A63D80B01EAC_Class_0_16E7307DCC43CB2C_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CF06A63D80B01EAC_Class_0_16E7307DCC43CB2C_38*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_SET_CONTEXT_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1490* get_Source()
	{
		return ((::Class_0_16E4307DCC419505_1490*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_GET_SOURCE_OFFSET))(this);
	}

	::System::Void set_Source(::Class_0_16E4307DCC419505_1490* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1490*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_SET_SOURCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFD7F5C5419FD422(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_DFD7F5C5419FD422_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_B96634871A080662(::System::Nullable_1<::UnityEngine::Vector2Int> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2Int>))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_B96634871A080662_OFFSET))(this, a1);
	}

	::System::Void Method_2_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_D72E9A253ACC93E3(::System::Action* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_D72E9A253ACC93E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B6C2360D539806AC(::System::Action* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_B6C2360D539806AC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D609BB4C90312500(::System::Action* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_D609BB4C90312500_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C0C8F896D274202(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_2C0C8F896D274202_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D045D1BBEEB064E2(::System::Action* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_D045D1BBEEB064E2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4B1FDFC558EBE77E(::System::Action* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_4B1FDFC558EBE77E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D122820B65E67740(::System::Action* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_D122820B65E67740_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F1937D993122EAF(::System::Action* a1, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::Class_0_16E4307DCC419505_1490*>*))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_6F1937D993122EAF_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::UnityEngine::Vector2Int> Method_2_62114CFF2DC62611(::UnityEngine::Vector2Int a1, ::RPG::Client::MechCraft::MechCraftRotationType a2)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CLASS_2_CF06A63D80B01EAC_METHOD_2_62114CFF2DC62611_OFFSET))(this, a1, a2);
	}
};
