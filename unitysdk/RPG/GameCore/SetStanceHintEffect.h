#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETSTANCEHINTEFFECT_METHOD_3_67111A1BBD172180_OFFSET UNITYSDK_OFFSET(0x18E42D00)
#define RPG_GAMECORE_SETSTANCEHINTEFFECT_METHOD_3_D7FE20C1F7BCCA14_OFFSET UNITYSDK_OFFSET(0x18E42DE0)
#define RPG_GAMECORE_SETSTANCEHINTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E42D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStanceHintEffect_TypeDefinitionIndex = 22645;

	class SetStanceHintEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsActive; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::String* BossPrefabPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCEHINTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_67111A1BBD172180(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStanceHintEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStanceHintEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCEHINTEFFECT_METHOD_3_67111A1BBD172180_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7FE20C1F7BCCA14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStanceHintEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStanceHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCEHINTEFFECT_METHOD_3_D7FE20C1F7BCCA14_OFFSET))(a1, a2);
		}
	};
}
