#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SRDEBUGGER_UI_CONTROLS_TABLESIZE_SYSTEM_ICOMPARABLE_SRDEBUGGER_UI_CONTROLS_TABLESIZE__COMPARETO_OFFSET UNITYSDK_OFFSET(0x1AD07A90)
#define SRDEBUGGER_UI_CONTROLS_TABLESIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD07AC0)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int TableSize_TypeDefinitionIndex = 35699;

	class TableSize : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Int64 size; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_TABLESIZE__CTOR_OFFSET))(this);
		}

		::System::Int32 System_IComparable_SRDebugger_UI_Controls_TableSize__CompareTo(::SRDebugger::UI::Controls::TableSize* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::SRDebugger::UI::Controls::TableSize*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_TABLESIZE_SYSTEM_ICOMPARABLE_SRDEBUGGER_UI_CONTROLS_TABLESIZE__COMPARETO_OFFSET))(this, a1);
		}
	};
}
