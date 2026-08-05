#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_CLASS_1_B7462596050BF8BB_METHOD_1_CDBDCC08F9B3AFF8_OFFSET UNITYSDK_OFFSET(0x199A2110)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_CLASS_1_B7462596050BF8BB__CTOR_OFFSET UNITYSDK_OFFSET(0x199A1A10)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetExQTETagSupportBehavior_Class_1_B7462596050BF8BB_TypeDefinitionIndex = 41661;

	class ZNetExQTETagSupportBehavior_Class_1_B7462596050BF8BB : public ::System::Object
	{
	public:
		::System::Boolean Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_CLASS_1_B7462596050BF8BB__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CDBDCC08F9B3AFF8(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_CLASS_1_B7462596050BF8BB_METHOD_1_CDBDCC08F9B3AFF8_OFFSET))(this, a1);
		}
	};
}
