#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPGTools { class TimelineData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINEDATASCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F64F00)

namespace RPGTools
{
	inline static constexpr unsigned int TimelineDataScriptableObject_TypeDefinitionIndex = 46019;

	class TimelineDataScriptableObject : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPGTools::TimelineData*>* Itemlist; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINEDATASCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
