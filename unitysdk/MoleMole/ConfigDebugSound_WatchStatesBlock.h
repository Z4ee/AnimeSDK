#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK_CREATEFROMCLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1B56AB70)
#define MOLEMOLE_CONFIGDEBUGSOUND_WATCHSTATESBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56AE70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDebugSound_WatchStatesBlock_TypeDefinitionIndex = 69747;

	class ConfigDebugSound_WatchStatesBlock : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* states; // 0x10
		::System::String* title; // 0x18
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
