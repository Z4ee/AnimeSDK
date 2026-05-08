#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_INSPECTORNOTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D4880)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int InspectorNote_TypeDefinitionIndex = 25896;

	class InspectorNote : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::System::String* m_Note; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INSPECTORNOTE__CTOR_OFFSET))(this);
		}
	};
}
