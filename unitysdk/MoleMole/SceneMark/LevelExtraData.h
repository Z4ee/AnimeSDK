#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_SCENEMARK_LEVELEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE7530)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int LevelExtraData_TypeDefinitionIndex = 82701;

	class LevelExtraData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_LEVELEXTRADATA__CTOR_OFFSET))(this);
		}
	};
}
