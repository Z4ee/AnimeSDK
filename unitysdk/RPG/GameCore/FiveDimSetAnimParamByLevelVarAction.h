#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYLEVELVARACTION_METHOD_4_6FAD1F04DD692CA4_OFFSET UNITYSDK_OFFSET(0x1D6AA9D0)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYLEVELVARACTION_METHOD_4_B7BC23734C51A225_OFFSET UNITYSDK_OFFSET(0x1D6AA990)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYLEVELVARACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AA9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimParamByLevelVarAction_TypeDefinitionIndex = 18646;

	class FiveDimSetAnimParamByLevelVarAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean SyncToEffects; // 0x10
		::System::String* ParameterName; // 0x18
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYLEVELVARACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B7BC23734C51A225(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYLEVELVARACTION_METHOD_4_B7BC23734C51A225_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FAD1F04DD692CA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYLEVELVARACTION_METHOD_4_6FAD1F04DD692CA4_OFFSET))(a1, a2);
		}
	};
}
