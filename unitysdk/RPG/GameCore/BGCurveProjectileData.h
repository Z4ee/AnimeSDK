#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BGCURVEPROJECTILEDATA_METHOD_3_AF3FD6E9A78823CD_OFFSET UNITYSDK_OFFSET(0x1A3D8AD0)
#define RPG_GAMECORE_BGCURVEPROJECTILEDATA_METHOD_3_B9C6AFD4966F3286_OFFSET UNITYSDK_OFFSET(0x1A3D89D0)
#define RPG_GAMECORE_BGCURVEPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D8A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BGCurveProjectileData_TypeDefinitionIndex = 15060;

	class BGCurveProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* SubCurveIndex; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B9C6AFD4966F3286(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BGCurveProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BGCurveProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEPROJECTILEDATA_METHOD_3_B9C6AFD4966F3286_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF3FD6E9A78823CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BGCurveProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BGCurveProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BGCURVEPROJECTILEDATA_METHOD_3_AF3FD6E9A78823CD_OFFSET))(a1, a2);
		}
	};
}
