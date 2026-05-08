#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_MONONAMECARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x142AC730)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNameCardConfig_TypeDefinitionIndex = 75133;

	class MonoNameCardConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::String* gachaKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAMECARDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
