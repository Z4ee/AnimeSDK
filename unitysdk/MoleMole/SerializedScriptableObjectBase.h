#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

#define MOLEMOLE_SERIALIZEDSCRIPTABLEOBJECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x190B15F0)

namespace MoleMole
{
	inline static constexpr unsigned int SerializedScriptableObjectBase_TypeDefinitionIndex = 88577;

	class SerializedScriptableObjectBase : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SERIALIZEDSCRIPTABLEOBJECTBASE__CTOR_OFFSET))(this);
		}
	};
}
