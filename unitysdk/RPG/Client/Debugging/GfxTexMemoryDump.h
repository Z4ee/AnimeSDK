#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEBUGGING_GFXTEXMEMORYDUMP_DUMPCPPGFXMEMORY_OFFSET UNITYSDK_OFFSET(0xA0F75B0)
#define RPG_CLIENT_DEBUGGING_GFXTEXMEMORYDUMP_DUMPCSGFXMEMORY_OFFSET UNITYSDK_OFFSET(0xA0F75C0)
#define RPG_CLIENT_DEBUGGING_GFXTEXMEMORYDUMP_RESOLVE_OFFSET UNITYSDK_OFFSET(0xA0F75D0)
#define RPG_CLIENT_DEBUGGING_GFXTEXMEMORYDUMP__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F75E0)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int GfxTexMemoryDump_TypeDefinitionIndex = 72499;

	class GfxTexMemoryDump : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_GFXTEXMEMORYDUMP__CTOR_OFFSET))(this);
		}

		static ::System::Void DumpCppGfxMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_GFXTEXMEMORYDUMP_DUMPCPPGFXMEMORY_OFFSET))();
		}

		static ::System::Void DumpCsGfxMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_GFXTEXMEMORYDUMP_DUMPCSGFXMEMORY_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>* Resolve()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_GFXTEXMEMORYDUMP_RESOLVE_OFFSET))();
		}
	};
}
