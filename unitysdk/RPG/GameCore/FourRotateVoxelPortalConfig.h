#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FourRotateVoxelPortalTarget; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_METHOD_3_7704611588E0048B_OFFSET UNITYSDK_OFFSET(0x1D117580)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_METHOD_3_93D805F9587801DE_OFFSET UNITYSDK_OFFSET(0x1D117540)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D117570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPortalConfig_TypeDefinitionIndex = 16576;

	class FourRotateVoxelPortalConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPortal; // 0x10
		::System::Boolean IsPortalByAction; // 0x11
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* OnPortalActionConfigs; // 0x18
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x20
		::RPG::GameCore::FourRotateVoxelPortalTarget* Target; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93D805F9587801DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPortalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPortalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_METHOD_3_93D805F9587801DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7704611588E0048B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPortalConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALCONFIG_METHOD_3_7704611588E0048B_OFFSET))(a1, a2);
		}
	};
}
