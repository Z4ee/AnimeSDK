#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::UI::Controls { class ProfilerTableMemoryBlock_GetTableSize; }
namespace SRDebugger::UI::Controls { class TableSize; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_CHECKOBJECT_OFFSET UNITYSDK_OFFSET(0x1AD075A0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDATAREADY_OFFSET UNITYSDK_OFFSET(0x1AD071A0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AD07150)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AD07170)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD06F90)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_TRIGGERTABLEREFRESH_OFFSET UNITYSDK_OFFSET(0x1AD07120)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AD07020)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD07800)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerTableMemoryBlock_TypeDefinitionIndex = 35700;

	class ProfilerTableMemoryBlock : public ::SRF::SRMonoBehaviourEx
	{
	public:
		static ::SRDebugger::UI::Controls::ProfilerTableMemoryBlock_GetTableSize** StaticGet_OnGetTable()
		{
			return (::SRDebugger::UI::Controls::ProfilerTableMemoryBlock_GetTableSize**)Il2CppClass::FromTypeDefinitionIndex(ProfilerTableMemoryBlock_TypeDefinitionIndex)->GetStaticField(0x63E90);
		}
		static ::System::Action** StaticGet_DataReady()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ProfilerTableMemoryBlock_TypeDefinitionIndex)->GetStaticField(0x63E98);
		}
		static ::System::Boolean* StaticGet_TriggerRefresh()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ProfilerTableMemoryBlock_TypeDefinitionIndex)->GetStaticField(0x139A0);
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
