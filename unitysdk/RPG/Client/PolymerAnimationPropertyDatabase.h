#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PolymerEffectControllBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_303D5A33D1401D59;
namespace RPG::Client { class PolymerDatabaseProperty; }
namespace RPG::Client { class PolymerPropertyLinkMaterial; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_GENPROPERTYNAMELIST_OFFSET UNITYSDK_OFFSET(0xAD6ED40)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_GETCOLOR_OFFSET UNITYSDK_OFFSET(0xAD6CFB0)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0xAD6CA90)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_GETSLOTID_OFFSET UNITYSDK_OFFSET(0xAD6D280)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_GETVECTOR_OFFSET UNITYSDK_OFFSET(0xAD6CCE0)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAD6D790)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0xAD6D330)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0xAD6D4B0)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_SETCOLOR_OFFSET UNITYSDK_OFFSET(0xAD6D100)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0xAD6CBB0)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_SETVECTOR_OFFSET UNITYSDK_OFFSET(0xAD6CE30)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_TICK_OFFSET UNITYSDK_OFFSET(0xAD6DA30)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xAD6D9E0)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0xAD6EEC0)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE___IFIXBASEPROXY_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0xAD6EEE0)
#define RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE___IFIXBASEPROXY_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0xAD6EF90)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerAnimationPropertyDatabase_TypeDefinitionIndex = 64803;

	class PolymerAnimationPropertyDatabase : public ::RPG::Client::PolymerEffectControllBase
	{
	public:
		::System::Single f0; // 0x30
		::System::Single f1; // 0x34
		::System::Single f2; // 0x38
		::System::Single f3; // 0x3C
		::System::Single f4; // 0x40
		::System::Single f5; // 0x44
		::System::Single f6; // 0x48
		::System::Single f7; // 0x4C
		::System::Single f8; // 0x50
		::System::Single f9; // 0x54
		::System::Single f10; // 0x58
		::System::Single f11; // 0x5C
		::System::Single f12; // 0x60
		::System::Single f13; // 0x64
		::System::Single f14; // 0x68
		::System::Single f15; // 0x6C
		::UnityEngine::Color c0; // 0x70
		::UnityEngine::Color c1; // 0x80
		::UnityEngine::Color c2; // 0x90
		::UnityEngine::Color c3; // 0xA0
		::UnityEngine::Color c4; // 0xB0
		::UnityEngine::Color c5; // 0xC0
		::UnityEngine::Color c6; // 0xD0
		::UnityEngine::Color c7; // 0xE0
		::UnityEngine::Color c8; // 0xF0
		::UnityEngine::Color c9; // 0x100
		::UnityEngine::Color c10; // 0x110
		::UnityEngine::Color c11; // 0x120
		::UnityEngine::Color c12; // 0x130
		::UnityEngine::Color c13; // 0x140
		::UnityEngine::Color c14; // 0x150
		::UnityEngine::Color c15; // 0x160
		::UnityEngine::Vector4 v0; // 0x170
		::UnityEngine::Vector4 v1; // 0x180
		::UnityEngine::Vector4 v2; // 0x190
		::UnityEngine::Vector4 v3; // 0x1A0
		::UnityEngine::Vector4 v4; // 0x1B0
		::UnityEngine::Vector4 v5; // 0x1C0
		::UnityEngine::Vector4 v6; // 0x1D0
		::UnityEngine::Vector4 v7; // 0x1E0
		::UnityEngine::Vector4 v8; // 0x1F0
		::UnityEngine::Vector4 v9; // 0x200
		::UnityEngine::Vector4 v10; // 0x210
		::UnityEngine::Vector4 v11; // 0x220
		::UnityEngine::Vector4 v12; // 0x230
		::UnityEngine::Vector4 v13; // 0x240
		::UnityEngine::Vector4 v14; // 0x250
		::UnityEngine::Vector4 v15; // 0x260
		::System::Collections::Generic::List_1<::RPG::Client::PolymerPropertyLinkMaterial*>* Linkers; // 0x270
		::System::Collections::Generic::List_1<::RPG::Client::PolymerDatabaseProperty*>* PropertyList; // 0x278
		::System::Collections::Generic::List_1<::System::String*>* PropertyNameList; // 0x280

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE__CTOR_OFFSET))(this);
		}

		::System::Single GetFloat(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_GETFLOAT_OFFSET))(this, a1);
		}

		::System::Void SetFloat(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 GetVector(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_GETVECTOR_OFFSET))(this, a1);
		}

		::System::Void SetVector(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_SETVECTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color GetColor(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_GETCOLOR_OFFSET))(this, a1);
		}

		::System::Void SetColor(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_SETCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetSlotID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_GETSLOTID_OFFSET))(this, a1);
		}

		::System::Void OnPolymerRebuildAfterFading(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPolymerRebuildBeforeFading(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_UPDATE_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_TICK_OFFSET))(this);
		}

		::System::Void GenPropertyNameList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE_GENPROPERTYNAMELIST_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPolymerRebuildAfterFading(::Class_1_303D5A33D1401D59* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::UnityEngine::GameObject* P2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE___IFIXBASEPROXY_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnPolymerRebuildBeforeFading(::Class_1_303D5A33D1401D59* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::UnityEngine::GameObject* P2, ::UnityEngine::GameObject* P3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERANIMATIONPROPERTYDATABASE___IFIXBASEPROXY_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
