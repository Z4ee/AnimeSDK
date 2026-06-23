#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK_CREATEFROMCLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1A362B40)
#define MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A362E40)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDebugSound_WatchStatesBlock_TypeDefinitionIndex = 49307;

	class ConfigDebugSound_WatchStatesBlock : public ::System::Object
	{
	public:
		::System::String* title; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* states; // 0x18
		::System::Boolean isCurrentShow; // 0x20
		::System::Boolean alwaysShow; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void CreateFromClipboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK_CREATEFROMCLIPBOARD_OFFSET))(this);
		}
	};
}
