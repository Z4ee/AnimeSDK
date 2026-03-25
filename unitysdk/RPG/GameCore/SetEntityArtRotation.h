#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYARTROTATION_METHOD_3_680B84D556DACC77_OFFSET UNITYSDK_OFFSET(0x176CAE60)
#define RPG_GAMECORE_SETENTITYARTROTATION_METHOD_3_C86C3BF8514071D5_OFFSET UNITYSDK_OFFSET(0x176CB000)
#define RPG_GAMECORE_SETENTITYARTROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x176CAEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityArtRotation_TypeDefinitionIndex = 22025;

	class SetEntityArtRotation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* AngleX; // 0x20
		::RPG::GameCore::DynamicFloat* AngleY; // 0x28
		::RPG::GameCore::DynamicFloat* AngleZ; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYARTROTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_680B84D556DACC77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityArtRotation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityArtRotation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYARTROTATION_METHOD_3_680B84D556DACC77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C86C3BF8514071D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityArtRotation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityArtRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYARTROTATION_METHOD_3_C86C3BF8514071D5_OFFSET))(a1, a2);
		}
	};
}
