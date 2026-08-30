#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace SRDebugger::UI::Controls { class TableSize; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E697880)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E6978B0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E696FC0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E697790)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerTableMemoryBlock_GetTableSize_TypeDefinitionIndex = 37342;

	class ProfilerTableMemoryBlock_GetTableSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::TableSize*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::TableSize*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::TableSize*>* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::TableSize*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
