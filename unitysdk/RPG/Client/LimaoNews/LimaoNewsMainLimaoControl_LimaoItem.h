#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LevelNpcMaterialReplacer; }
namespace RPG::Client { class LookAtIK; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_LIMAOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD3C0BD0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainLimaoControl_LimaoItem_TypeDefinitionIndex = 80367;

	class LimaoNewsMainLimaoControl_LimaoItem : public ::System::Object
	{
	public:
		::RPG::Client::LookAtIK* LookAtIK; // 0x10
		::RPG::Client::LevelNpcMaterialReplacer* MaterialReplacer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_LIMAOITEM__CTOR_OFFSET))(this);
		}
	};
}
