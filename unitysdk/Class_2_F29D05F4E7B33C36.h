#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace XLua { class LuaTable; }

#define CLASS_2_F29D05F4E7B33C36_METHOD_2_0FE652C2FD8E9ECC_OFFSET UNITYSDK_OFFSET(0x134F5A80)
#define CLASS_2_F29D05F4E7B33C36_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x134F55B0)
#define CLASS_2_F29D05F4E7B33C36_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x134F5DA0)
#define CLASS_2_F29D05F4E7B33C36_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x134F5D40)
#define CLASS_2_F29D05F4E7B33C36_METHOD_2_5D8BAE50F63F7946_1_OFFSET UNITYSDK_OFFSET(0x134F5BD0)
#define CLASS_2_F29D05F4E7B33C36_METHOD_2_5D8BAE50F63F7946_OFFSET UNITYSDK_OFFSET(0x134F59E0)
#define CLASS_2_F29D05F4E7B33C36_METHOD_2_7370F0234D6FDC31_OFFSET UNITYSDK_OFFSET(0x134F57F0)
#define CLASS_2_F29D05F4E7B33C36_METHOD_2_C3CD621FE895B79A_OFFSET UNITYSDK_OFFSET(0x134F5350)
#define CLASS_2_F29D05F4E7B33C36_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x134F56D0)
#define CLASS_2_F29D05F4E7B33C36__CTOR_OFFSET UNITYSDK_OFFSET(0x134F5C70)
#define CLASS_2_F29D05F4E7B33C36__ONBIND_OFFSET UNITYSDK_OFFSET(0x134F50A0)
#define CLASS_2_F29D05F4E7B33C36___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x134F5CE0)

inline static constexpr unsigned int Class_2_F29D05F4E7B33C36_TypeDefinitionIndex = 67506;

class Class_2_F29D05F4E7B33C36 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	::UnityEngine::UI::Button* Field_2_3; // 0x60
	::RPG::Client::StaticListView* Field_2_4; // 0x68
	::RPG::GameCore::BattleInstance* Field_2_5; // 0x70
	::UnityEngine::UI::Button* Field_2_6; // 0x78
	::UnityEngine::UI::GridLayoutGroup* Field_2_7; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightAvatarData*>* Field_2_8; // 0x88
	::RPG::GameCore::GridFightManager* Field_2_9; // 0x90
	::UnityEngine::Animation* Field_2_10; // 0x98
	::System::Boolean Field_2_11; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C3CD621FE895B79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36_METHOD_2_C3CD621FE895B79A_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::RPG::Client::StaticListViewItem* Method_2_7370F0234D6FDC31(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
	{
		return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36_METHOD_2_7370F0234D6FDC31_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5D8BAE50F63F7946(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36_METHOD_2_5D8BAE50F63F7946_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D8BAE50F63F7946_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36_METHOD_2_5D8BAE50F63F7946_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FE652C2FD8E9ECC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36_METHOD_2_0FE652C2FD8E9ECC_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29D05F4E7B33C36_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
