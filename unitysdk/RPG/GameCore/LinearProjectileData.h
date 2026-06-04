#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_LINEARPROJECTILEDATA_METHOD_3_9F4138119929FAA3_OFFSET UNITYSDK_OFFSET(0x1988E9E0)
#define RPG_GAMECORE_LINEARPROJECTILEDATA_METHOD_3_FA596D0C7F873DEC_OFFSET UNITYSDK_OFFSET(0x1988EAE0)
#define RPG_GAMECORE_LINEARPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1988EA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LinearProjectileData_TypeDefinitionIndex = 14888;

	class LinearProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* LinearPitchAngle; // 0xB8
		::System::Single TargetDistanceOffset; // 0xC0
		::System::Single HitEffectDistanceOffset; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F4138119929FAA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LinearProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LinearProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARPROJECTILEDATA_METHOD_3_9F4138119929FAA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FA596D0C7F873DEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LinearProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LinearProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARPROJECTILEDATA_METHOD_3_FA596D0C7F873DEC_OFFSET))(a1, a2);
		}
	};
}
