#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_22FC528C31017F2F_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADMANUALSUPPLEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE2140)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadManualSupplementConfig_TypeDefinitionIndex = 67845;

	class PreloadManualSupplementConfig : public ::System::Object
	{
	public:
		::Enum_3_22FC528C31017F2F_1 targetType; // 0x10
		::System::Int32 targetId; // 0x14
		::System::Collections::Generic::List_1<::System::String*>* supplementPaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADMANUALSUPPLEMENTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
