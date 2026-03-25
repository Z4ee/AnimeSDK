#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileBezierControlPoint; }

#define RPG_GAMECORE_BEZIERPROJECTILEDATA_METHOD_3_5E2BDD7186B2CFD3_OFFSET UNITYSDK_OFFSET(0x16FE4AB0)
#define RPG_GAMECORE_BEZIERPROJECTILEDATA_METHOD_3_D07B4CB153A5D6B2_OFFSET UNITYSDK_OFFSET(0x16FE4B00)
#define RPG_GAMECORE_BEZIERPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE4AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BezierProjectileData_TypeDefinitionIndex = 14362;

	class BezierProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ProjectileBezierControlPoint*>* BezierControlPointList; // 0xA8
		::System::Single ParabolaRoll; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEZIERPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E2BDD7186B2CFD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BezierProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BezierProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEZIERPROJECTILEDATA_METHOD_3_5E2BDD7186B2CFD3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D07B4CB153A5D6B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BezierProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BezierProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEZIERPROJECTILEDATA_METHOD_3_D07B4CB153A5D6B2_OFFSET))(a1, a2);
		}
	};
}
