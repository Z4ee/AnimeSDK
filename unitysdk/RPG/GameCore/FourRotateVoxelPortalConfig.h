#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FourRotateVoxelPortalTarget; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_METHOD_3_39E82AA087F29BB1_OFFSET UNITYSDK_OFFSET(0x18930170)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_METHOD_3_E709106C5FE67EE8_OFFSET UNITYSDK_OFFSET(0x18930100)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18930150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPortalConfig_TypeDefinitionIndex = 15871;

	class FourRotateVoxelPortalConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPortal; // 0x10
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x18
		::RPG::GameCore::FourRotateVoxelPortalTarget* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E709106C5FE67EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPortalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPortalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_METHOD_3_E709106C5FE67EE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_39E82AA087F29BB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPortalConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_METHOD_3_39E82AA087F29BB1_OFFSET))(a1, a2);
		}
	};
}
