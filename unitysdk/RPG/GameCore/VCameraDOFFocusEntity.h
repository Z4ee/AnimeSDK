#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DOFCocMethodType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VCAMERADOFFOCUSENTITY_METHOD_2_D7061E4723EC8564_OFFSET UNITYSDK_OFFSET(0x178EC880)
#define RPG_GAMECORE_VCAMERADOFFOCUSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x178ECFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraDOFFocusEntity_TypeDefinitionIndex = 15032;

	class VCameraDOFFocusEntity : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Boolean Reset; // 0x11
		::RPG::GameCore::DOFCocMethodType CocMethodType; // 0x14
		::System::Single FixedFocusDistance; // 0x18
		::System::Single FStop; // 0x1C
		::System::Single SensorWidth; // 0x20
		::System::Single NearTransitionRegion; // 0x24
		::System::Single FarTransitionRegion; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERADOFFOCUSENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D7061E4723EC8564(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraDOFFocusEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraDOFFocusEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERADOFFOCUSENTITY_METHOD_2_D7061E4723EC8564_OFFSET))(a1, a2);
		}
	};
}
