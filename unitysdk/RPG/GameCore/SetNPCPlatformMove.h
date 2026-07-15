#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETNPCPLATFORMMOVE_METHOD_3_76695BFDE8A3D334_OFFSET UNITYSDK_OFFSET(0x1C603E80)
#define RPG_GAMECORE_SETNPCPLATFORMMOVE_METHOD_3_D14BFA7E14E9033B_OFFSET UNITYSDK_OFFSET(0x1C603EC0)
#define RPG_GAMECORE_SETNPCPLATFORMMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C603EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNPCPlatformMove_TypeDefinitionIndex = 21148;

	class SetNPCPlatformMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean EnableMove; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCPLATFORMMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76695BFDE8A3D334(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNPCPlatformMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNPCPlatformMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCPLATFORMMOVE_METHOD_3_76695BFDE8A3D334_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D14BFA7E14E9033B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNPCPlatformMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNPCPlatformMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCPLATFORMMOVE_METHOD_3_D14BFA7E14E9033B_OFFSET))(a1, a2);
		}
	};
}
