#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_METHOD_2_07E47907727C537A_OFFSET UNITYSDK_OFFSET(0x171DE920)
#define RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_METHOD_2_6129AC8DC6E421E5_OFFSET UNITYSDK_OFFSET(0x171EACC0)
#define RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x171EAD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseEventCondition_TypeDefinitionIndex = 17245;

	class FiveDimBaseEventCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_07E47907727C537A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseEventCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_METHOD_2_07E47907727C537A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6129AC8DC6E421E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseEventCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_METHOD_2_6129AC8DC6E421E5_OFFSET))(a1, a2);
		}
	};
}
