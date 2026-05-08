#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnit.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_COLORARRAYRECORDERUNIT_GETVECTOR4VALUE_OFFSET UNITYSDK_OFFSET(0x1C0BD790)
#define MOLEMOLE_TIMELINE_COLORARRAYRECORDERUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BD750)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorArrayRecorderUnit_TypeDefinitionIndex = 30642;

	class ColorArrayRecorderUnit : public ::MoleMole::Timeline::RecorderUnit
	{
	public:
		::Il2CppArray<::UnityEngine::Color>* Value; // 0x18

		::System::Void _ctor(::System::String* key, ::Il2CppArray<::UnityEngine::Color>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORARRAYRECORDERUNIT__CTOR_OFFSET))(this, key, value);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetVector4Value()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORARRAYRECORDERUNIT_GETVECTOR4VALUE_OFFSET))(this);
		}
	};
}
