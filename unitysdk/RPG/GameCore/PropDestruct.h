#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPDESTRUCT_METHOD_3_17B0A56EAB7FD5B1_OFFSET UNITYSDK_OFFSET(0x19A8B4C0)
#define RPG_GAMECORE_PROPDESTRUCT_METHOD_3_B78BC2DC70B922EE_OFFSET UNITYSDK_OFFSET(0x19A8B1A0)
#define RPG_GAMECORE_PROPDESTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8B430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDestruct_TypeDefinitionIndex = 20843;

	class PropDestruct : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsPreshow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B78BC2DC70B922EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropDestruct*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDestruct*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCT_METHOD_3_B78BC2DC70B922EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17B0A56EAB7FD5B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropDestruct* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDestruct*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCT_METHOD_3_17B0A56EAB7FD5B1_OFFSET))(a1, a2);
		}
	};
}
