#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace SRDebugger::UI::Controls { class TableSize; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E91CE0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E91D10)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E911B0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E91CC0)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerTableMemoryBlock_GetTableSize_TypeDefinitionIndex = 35401;

	class ProfilerTableMemoryBlock_GetTableSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::TableSize*>* tables)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::TableSize*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_INVOKE_OFFSET))(this, tables);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::TableSize*>* tables, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::TableSize*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_BEGININVOKE_OFFSET))(this, tables, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_GETTABLESIZE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
