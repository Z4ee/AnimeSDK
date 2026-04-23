#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VE_RANDOM_METHOD_3_93FDC7AF7ECDB49F_OFFSET UNITYSDK_OFFSET(0x190EDFD0)
#define RPG_GAMECORE_VE_RANDOM_METHOD_3_CDF07C7BBFC45D92_OFFSET UNITYSDK_OFFSET(0x190EDF90)
#define RPG_GAMECORE_VE_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x190EDFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Random_TypeDefinitionIndex = 23034;

	class VE_Random : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Min; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* Max; // 0x28
		::System::Boolean IsInt; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDF07C7BBFC45D92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Random*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Random*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_METHOD_3_CDF07C7BBFC45D92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_93FDC7AF7ECDB49F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Random* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Random*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_METHOD_3_93FDC7AF7ECDB49F_OFFSET))(a1, a2);
		}
	};
}
