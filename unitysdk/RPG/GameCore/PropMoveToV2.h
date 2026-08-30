#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropMoveToMoveMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropMoveToV2TargetBase; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPMOVETOV2_METHOD_3_702092C0F916397C_OFFSET UNITYSDK_OFFSET(0x1D17E6C0)
#define RPG_GAMECORE_PROPMOVETOV2_METHOD_3_88E03DF5C5308610_OFFSET UNITYSDK_OFFSET(0x1D17E560)
#define RPG_GAMECORE_PROPMOVETOV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D17E620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropMoveToV2_TypeDefinitionIndex = 21716;

	class PropMoveToV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropMoveToV2TargetBase* MoveToTarget; // 0x18
		::System::Boolean WaitFinish; // 0x20
		::System::Boolean UseCurveData; // 0x21
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::PropMoveToMoveMode Mode; // 0x30
		::RPG::GameCore::DynamicFloat* Duration; // 0x38
		::RPG::GameCore::DynamicFloat* Speed; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReachTarget; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_88E03DF5C5308610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropMoveToV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropMoveToV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2_METHOD_3_88E03DF5C5308610_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_702092C0F916397C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropMoveToV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropMoveToV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2_METHOD_3_702092C0F916397C_OFFSET))(a1, a2);
		}
	};
}
