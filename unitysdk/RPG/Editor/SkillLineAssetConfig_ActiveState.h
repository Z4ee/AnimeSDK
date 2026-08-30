#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_EDITOR_SKILLLINEASSETCONFIG_ACTIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE4664B0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillLineAssetConfig_ActiveState_TypeDefinitionIndex = 52326;

	class SkillLineAssetConfig_ActiveState : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::System::Boolean Active; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLLINEASSETCONFIG_ACTIVESTATE__CTOR_OFFSET))(this);
		}
	};
}
