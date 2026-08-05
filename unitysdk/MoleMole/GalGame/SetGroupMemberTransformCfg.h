#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B19140)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int SetGroupMemberTransformCfg_TypeDefinitionIndex = 62381;

	class SetGroupMemberTransformCfg : public ::System::Object
	{
	public:
		::System::String* GroupConfigId; // 0x10
		::System::String* TransformKey; // 0x18
		::UnityEngine::Vector3 PlayerPos; // 0x20
		::UnityEngine::Vector3 PlayerRot; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SETGROUPMEMBERTRANSFORMCFG__CTOR_OFFSET))(this);
		}
	};
}
