#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARFORMATIONFACEDELTA_METHOD_3_4E74BA0020C53D2D_OFFSET UNITYSDK_OFFSET(0x1C253F30)
#define RPG_GAMECORE_CLEARFORMATIONFACEDELTA_METHOD_3_BB64BB56ED7E78F8_OFFSET UNITYSDK_OFFSET(0x1C253F70)
#define RPG_GAMECORE_CLEARFORMATIONFACEDELTA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C253F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearFormationFaceDelta_TypeDefinitionIndex = 22547;

	class ClearFormationFaceDelta : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E74BA0020C53D2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearFormationFaceDelta*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearFormationFaceDelta*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTA_METHOD_3_4E74BA0020C53D2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB64BB56ED7E78F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearFormationFaceDelta* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearFormationFaceDelta*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARFORMATIONFACEDELTA_METHOD_3_BB64BB56ED7E78F8_OFFSET))(a1, a2);
		}
	};
}
