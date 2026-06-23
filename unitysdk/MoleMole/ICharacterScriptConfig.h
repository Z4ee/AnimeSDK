#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_ICHARACTERSCRIPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CB0980)

namespace MoleMole
{
	inline static constexpr unsigned int ICharacterScriptConfig_TypeDefinitionIndex = 63716;

	class ICharacterScriptConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* CharacterName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ICHARACTERSCRIPTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
