#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_METHOD_3_AEA52F86B0C2914E_OFFSET UNITYSDK_OFFSET(0x1D0F55E0)
#define RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_METHOD_3_F422889C2474014B_OFFSET UNITYSDK_OFFSET(0x1D0F5520)
#define RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F55D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveToSpecificSplinePointAction_TypeDefinitionIndex = 18456;

	class FiveDimMoveToSpecificSplinePointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* PointName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F422889C2474014B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_METHOD_3_F422889C2474014B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AEA52F86B0C2914E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_METHOD_3_AEA52F86B0C2914E_OFFSET))(a1, a2);
		}
	};
}
