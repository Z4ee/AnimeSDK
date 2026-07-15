#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::UI::Controls { class ProfilerTableMemoryBlock_GetTableSize; }
namespace SRDebugger::UI::Controls { class TableSize; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_CHECKOBJECT_OFFSET UNITYSDK_OFFSET(0x1A216F60)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDATAREADY_OFFSET UNITYSDK_OFFSET(0x1A216B00)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A216AB0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A216AD0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A2168F0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_TRIGGERTABLEREFRESH_OFFSET UNITYSDK_OFFSET(0x1A216A80)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A216980)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A217260)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerTableMemoryBlock_TypeDefinitionIndex = 36482;

	class ProfilerTableMemoryBlock : public ::SRF::SRMonoBehaviourEx
	{
	public:
		static ::System::Action** StaticGet_DataReady()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ProfilerTableMemoryBlock_TypeDefinitionIndex)->GetStaticField(0x62BA0);
		}
		static ::SRDebugger::UI::Controls::ProfilerTableMemoryBlock_GetTableSize** StaticGet_OnGetTable()
		{
			return (::SRDebugger::UI::Controls::ProfilerTableMemoryBlock_GetTableSize**)Il2CppClass::FromTypeDefinitionIndex(ProfilerTableMemoryBlock_TypeDefinitionIndex)->GetStaticField(0x62BA8);
		}
		static ::System::Boolean* StaticGet_TriggerRefresh()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ProfilerTableMemoryBlock_TypeDefinitionIndex)->GetStaticField(0x12EE0);
		}
		::System::Single _lastRefresh; // 0x48
		::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::TableSize*>* tableSizes; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* texts; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDISABLE_OFFSET))(this);
		}

		::System::Void TriggerTableRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_TRIGGERTABLEREFRESH_OFFSET))(this);
		}

		::System::Void OnDataReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDATAREADY_OFFSET))(this);
		}

		::System::Void CheckObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_CHECKOBJECT_OFFSET))(this);
		}
	};
}
