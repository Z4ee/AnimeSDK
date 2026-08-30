#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT_METHOD_3_3DC6C91D5428A8AD_OFFSET UNITYSDK_OFFSET(0x1CE9A520)
#define RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT_METHOD_3_DE3D846CEE925657_OFFSET UNITYSDK_OFFSET(0x1CE9A5A0)
#define RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9A570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionSetOpCount_TypeDefinitionIndex = 21972;

	class OpticalIllusionSetOpCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ParamName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3DC6C91D5428A8AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionSetOpCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionSetOpCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT_METHOD_3_3DC6C91D5428A8AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE3D846CEE925657(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionSetOpCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionSetOpCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT_METHOD_3_DE3D846CEE925657_OFFSET))(a1, a2);
		}
	};
}
