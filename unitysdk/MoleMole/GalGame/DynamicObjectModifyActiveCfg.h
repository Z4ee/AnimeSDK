#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG__CTOR_OFFSET UNITYSDK_OFFSET(0x138345C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int DynamicObjectModifyActiveCfg_TypeDefinitionIndex = 48576;

	class DynamicObjectModifyActiveCfg : public ::System::Object
	{
	public:
		::System::Int32 DynamicObjectId; // 0x10
		::System::Boolean IsActive; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG__CTOR_OFFSET))(this);
		}
	};
}
