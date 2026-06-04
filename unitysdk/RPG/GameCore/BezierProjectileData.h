#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileBezierControlPoint; }

#define RPG_GAMECORE_BEZIERPROJECTILEDATA_METHOD_3_00325C41EEAE0DE9_OFFSET UNITYSDK_OFFSET(0x194DB860)
#define RPG_GAMECORE_BEZIERPROJECTILEDATA_METHOD_3_5AC24180A8CA2C1C_OFFSET UNITYSDK_OFFSET(0x194DB810)
#define RPG_GAMECORE_BEZIERPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x194DB850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BezierProjectileData_TypeDefinitionIndex = 14896;

	class BezierProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ProjectileBezierControlPoint*>* BezierControlPointList; // 0xB8
		::System::Single ParabolaRoll; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEZIERPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5AC24180A8CA2C1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BezierProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BezierProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEZIERPROJECTILEDATA_METHOD_3_5AC24180A8CA2C1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_00325C41EEAE0DE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BezierProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BezierProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BEZIERPROJECTILEDATA_METHOD_3_00325C41EEAE0DE9_OFFSET))(a1, a2);
		}
	};
}
