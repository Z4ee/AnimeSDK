#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT_METHOD_3_065CA320F770C685_OFFSET UNITYSDK_OFFSET(0x1747F860)
#define RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT_METHOD_3_E9EF9A94CF46BB46_OFFSET UNITYSDK_OFFSET(0x1747F710)
#define RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1747F7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionSetFinalPoint_TypeDefinitionIndex = 20412;

	class OpticalIllusionSetFinalPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ParamName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E9EF9A94CF46BB46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionSetFinalPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionSetFinalPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT_METHOD_3_E9EF9A94CF46BB46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_065CA320F770C685(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionSetFinalPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionSetFinalPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT_METHOD_3_065CA320F770C685_OFFSET))(a1, a2);
		}
	};
}
