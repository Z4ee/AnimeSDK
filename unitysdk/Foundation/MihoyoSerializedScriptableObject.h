#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

#define FOUNDATION_MIHOYOSERIALIZEDSCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC2F80)

namespace Foundation
{
	inline static constexpr unsigned int MihoyoSerializedScriptableObject_TypeDefinitionIndex = 7807;

	class MihoyoSerializedScriptableObject : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MIHOYOSERIALIZEDSCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
