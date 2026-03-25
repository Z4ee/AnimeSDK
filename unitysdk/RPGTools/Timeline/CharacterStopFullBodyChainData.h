#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/FullBodyBipedChain.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCHAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3B690)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopFullBodyChainData_TypeDefinitionIndex = 38820;

	class CharacterStopFullBodyChainData : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10
		::RPG::Client::FullBody::FullBodyBipedChain BipedChain; // 0x14
		::System::Single Duration; // 0x18
		::System::String* CurveName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCHAINDATA__CTOR_OFFSET))(this);
		}
	};
}
