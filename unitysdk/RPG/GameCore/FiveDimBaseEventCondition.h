#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_METHOD_3_7287AD544BA5C421_OFFSET UNITYSDK_OFFSET(0x1D6825B0)
#define RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_METHOD_3_9FA4E42F5E68F1B8_OFFSET UNITYSDK_OFFSET(0x1D6858A0)
#define RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D685900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseEventCondition_TypeDefinitionIndex = 18794;

	class FiveDimBaseEventCondition : public ::RPG::GameCore::LittleGameBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7287AD544BA5C421(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseEventCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_METHOD_3_7287AD544BA5C421_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9FA4E42F5E68F1B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseEventCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_METHOD_3_9FA4E42F5E68F1B8_OFFSET))(a1, a2);
		}
	};
}
