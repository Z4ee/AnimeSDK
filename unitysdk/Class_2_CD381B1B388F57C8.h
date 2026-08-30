#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

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

#define CLASS_2_CD381B1B388F57C8_METHOD_2_33531301A55BB22F_1_OFFSET UNITYSDK_OFFSET(0x17935F00)
#define CLASS_2_CD381B1B388F57C8_METHOD_2_33531301A55BB22F_OFFSET UNITYSDK_OFFSET(0x17935C70)
#define CLASS_2_CD381B1B388F57C8_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x179357C0)
#define CLASS_2_CD381B1B388F57C8_METHOD_2_7472ED7EFF6BB817_OFFSET UNITYSDK_OFFSET(0x17935D10)
#define CLASS_2_CD381B1B388F57C8_METHOD_2_C3CD621FE895B79A_OFFSET UNITYSDK_OFFSET(0x17935560)
#define CLASS_2_CD381B1B388F57C8_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x179358E0)
#define CLASS_2_CD381B1B388F57C8_METHOD_2_E667163374BFDBAF_OFFSET UNITYSDK_OFFSET(0x17935A00)
#define CLASS_2_CD381B1B388F57C8__CTOR_OFFSET UNITYSDK_OFFSET(0x17935FA0)
#define CLASS_2_CD381B1B388F57C8__ONBIND_OFFSET UNITYSDK_OFFSET(0x179352B0)

inline static constexpr unsigned int Class_2_CD381B1B388F57C8_TypeDefinitionIndex = 72186;

class Class_2_CD381B1B388F57C8 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Single IOAGJCLKELH; // 0x0
	// static const ::System::Single OJMDMIEOKDI; // 0x0
	::UnityEngine::UI::Button* MDFBLLAGKPF; // 0x60
	::UnityEngine::Animation* LEEJFLHCOPK; // 0x68
	::RPG::GameCore::GridFightManager* LKIGACIFAAA; // 0x70
	::UnityEngine::UI::Button* ACHGKGCEDEH; // 0x78
	::UnityEngine::UI::GridLayoutGroup* MBCDOOEGKKF; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightAvatarData*>* HCMEOAMDOJA; // 0x88
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x90
	::RPG::Client::StaticListView* MHLINDENENF; // 0x98
	::System::Boolean OEBHPNCLIAH; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD381B1B388F57C8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD381B1B388F57C8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C3CD621FE895B79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD381B1B388F57C8_METHOD_2_C3CD621FE895B79A_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD381B1B388F57C8_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CD381B1B388F57C8_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::RPG::Client::StaticListViewItem* Method_2_E667163374BFDBAF(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
	{
		return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CD381B1B388F57C8_METHOD_2_E667163374BFDBAF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_33531301A55BB22F(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD381B1B388F57C8_METHOD_2_33531301A55BB22F_OFFSET))(this, a1);
	}

	::System::Void Method_2_33531301A55BB22F_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CD381B1B388F57C8_METHOD_2_33531301A55BB22F_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7472ED7EFF6BB817(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CD381B1B388F57C8_METHOD_2_7472ED7EFF6BB817_OFFSET))(this, a1);
	}
};
