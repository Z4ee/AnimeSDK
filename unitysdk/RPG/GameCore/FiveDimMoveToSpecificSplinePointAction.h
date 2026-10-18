#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_METHOD_4_BA875C1BA0FEB4E6_OFFSET UNITYSDK_OFFSET(0x1D69FD10)
#define RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_METHOD_4_C97CEDAAE82133E3_OFFSET UNITYSDK_OFFSET(0x1D69FDD0)
#define RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69FDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveToSpecificSplinePointAction_TypeDefinitionIndex = 18665;

	class FiveDimMoveToSpecificSplinePointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* PointName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BA875C1BA0FEB4E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_METHOD_4_BA875C1BA0FEB4E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C97CEDAAE82133E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_METHOD_4_C97CEDAAE82133E3_OFFSET))(a1, a2);
		}
	};
}
