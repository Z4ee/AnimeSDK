#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_METHOD_3_292232884F995C79_OFFSET UNITYSDK_OFFSET(0x1C60B010)
#define RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_METHOD_3_7D5414D1F3A10EB6_OFFSET UNITYSDK_OFFSET(0x1C60AFD0)
#define RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60B000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetCrossHairVisible_TypeDefinitionIndex = 22119;

	class SetTargetCrossHairVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Visible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D5414D1F3A10EB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetCrossHairVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetCrossHairVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_METHOD_3_7D5414D1F3A10EB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_292232884F995C79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetCrossHairVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetCrossHairVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_METHOD_3_292232884F995C79_OFFSET))(a1, a2);
		}
	};
}
