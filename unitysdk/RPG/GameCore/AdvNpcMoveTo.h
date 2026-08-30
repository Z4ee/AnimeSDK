#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCMOVETO_METHOD_3_4C362DC6FEE2EF1D_OFFSET UNITYSDK_OFFSET(0x1D6C1140)
#define RPG_GAMECORE_ADVNPCMOVETO_METHOD_3_745D829A68F0E1D3_OFFSET UNITYSDK_OFFSET(0x1D6C11C0)
#define RPG_GAMECORE_ADVNPCMOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C1190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcMoveTo_TypeDefinitionIndex = 21709;

	class AdvNpcMoveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x20
		::System::Boolean OverrideBorn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C362DC6FEE2EF1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcMoveTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcMoveTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVETO_METHOD_3_4C362DC6FEE2EF1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_745D829A68F0E1D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcMoveTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMOVETO_METHOD_3_745D829A68F0E1D3_OFFSET))(a1, a2);
		}
	};
}
