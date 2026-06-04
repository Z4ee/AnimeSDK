#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE_METHOD_3_05BB3AD7F4666D50_OFFSET UNITYSDK_OFFSET(0x198CE440)
#define RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE_METHOD_3_B42A2DEC2A1654EB_OFFSET UNITYSDK_OFFSET(0x198CE300)
#define RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE__CTOR_OFFSET UNITYSDK_OFFSET(0x198CE3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleDisableGhostFire_TypeDefinitionIndex = 16002;

	class MarbleDisableGhostFire : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B42A2DEC2A1654EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleDisableGhostFire*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleDisableGhostFire*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE_METHOD_3_B42A2DEC2A1654EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05BB3AD7F4666D50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleDisableGhostFire* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleDisableGhostFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDISABLEGHOSTFIRE_METHOD_3_05BB3AD7F4666D50_OFFSET))(a1, a2);
		}
	};
}
