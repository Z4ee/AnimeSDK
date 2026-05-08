#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

#define MOLEMOLE_CHARACTERRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12401780)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterReloadConfig_TypeDefinitionIndex = 58565;

	class CharacterReloadConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERRELOADCONFIG__CTOR_OFFSET))(this);
		}
	};
}
