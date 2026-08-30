#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class WormCompassItemXY; }

#define RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_METHOD_3_55DE3D911F6FD048_OFFSET UNITYSDK_OFFSET(0x1D3762E0)
#define RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_METHOD_3_8F724AB677A885B8_OFFSET UNITYSDK_OFFSET(0x1D376360)
#define RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D376330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropWormCompassSetItemVisible_TypeDefinitionIndex = 21919;

	class PropWormCompassSetItemVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::WormCompassItemXY*>* Items; // 0x20
		::Il2CppArray<::RPG::GameCore::WormCompassItemXY*>* Blocks; // 0x28
		::System::Boolean Visible; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55DE3D911F6FD048(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropWormCompassSetItemVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropWormCompassSetItemVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_METHOD_3_55DE3D911F6FD048_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F724AB677A885B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropWormCompassSetItemVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropWormCompassSetItemVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPWORMCOMPASSSETITEMVISIBLE_METHOD_3_8F724AB677A885B8_OFFSET))(a1, a2);
		}
	};
}
