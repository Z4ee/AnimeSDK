#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FORCEPLAYERMOVEFORWARDONLY_METHOD_3_1A3D665CB3CA6920_OFFSET UNITYSDK_OFFSET(0x18929510)
#define RPG_GAMECORE_FORCEPLAYERMOVEFORWARDONLY_METHOD_3_9E017A2BE9CE1F71_OFFSET UNITYSDK_OFFSET(0x18929590)
#define RPG_GAMECORE_FORCEPLAYERMOVEFORWARDONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x18929560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForcePlayerMoveForwardOnly_TypeDefinitionIndex = 19814;

	class ForcePlayerMoveForwardOnly : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::RPG::GameCore::TargetEvaluator* AimTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEPLAYERMOVEFORWARDONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1A3D665CB3CA6920(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForcePlayerMoveForwardOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForcePlayerMoveForwardOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEPLAYERMOVEFORWARDONLY_METHOD_3_1A3D665CB3CA6920_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E017A2BE9CE1F71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForcePlayerMoveForwardOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForcePlayerMoveForwardOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEPLAYERMOVEFORWARDONLY_METHOD_3_9E017A2BE9CE1F71_OFFSET))(a1, a2);
		}
	};
}
