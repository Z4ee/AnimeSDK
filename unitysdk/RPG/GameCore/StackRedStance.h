#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_STACKREDSTANCE_METHOD_3_27ADA3143CBEE4F5_OFFSET UNITYSDK_OFFSET(0x17761DB0)
#define RPG_GAMECORE_STACKREDSTANCE_METHOD_3_FFB439DE3F486B6E_OFFSET UNITYSDK_OFFSET(0x17761D30)
#define RPG_GAMECORE_STACKREDSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17761D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackRedStance_TypeDefinitionIndex = 20811;

	class StackRedStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RedStanceRatio; // 0x18
		::RPG::GameCore::DynamicFloat* RedStanceValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FFB439DE3F486B6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackRedStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackRedStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE_METHOD_3_FFB439DE3F486B6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27ADA3143CBEE4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackRedStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE_METHOD_3_27ADA3143CBEE4F5_OFFSET))(a1, a2);
		}
	};
}
