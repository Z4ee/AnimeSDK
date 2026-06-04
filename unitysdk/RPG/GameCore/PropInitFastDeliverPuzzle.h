#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE_METHOD_3_7E910852102E1953_OFFSET UNITYSDK_OFFSET(0x19A904E0)
#define RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE_METHOD_3_DD3B6F2342F06C28_OFFSET UNITYSDK_OFFSET(0x19A906C0)
#define RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A905E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInitFastDeliverPuzzle_TypeDefinitionIndex = 20923;

	class PropInitFastDeliverPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x20
		::RPG::GameCore::DynamicFloat* DeliverBetweenDist; // 0x28
		::RPG::GameCore::DynamicString* OverrideSourcePosition; // 0x30
		::RPG::GameCore::DynamicFloat* OverrideInitCameraFOV; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E910852102E1953(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitFastDeliverPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitFastDeliverPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE_METHOD_3_7E910852102E1953_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD3B6F2342F06C28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitFastDeliverPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFASTDELIVERPUZZLE_METHOD_3_DD3B6F2342F06C28_OFFSET))(a1, a2);
		}
	};
}
