#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CAMERASOMATODYNAMICOFFSETSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85A910)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraSomatoDynamicOffsetScale_TypeDefinitionIndex = 69692;

	class CameraSomatoDynamicOffsetScale : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x10
		::System::Single Scale; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERASOMATODYNAMICOFFSETSCALE__CTOR_OFFSET))(this);
		}
	};
}
