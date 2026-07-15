#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW_METHOD_3_4252A5A0D4FE7EB2_OFFSET UNITYSDK_OFFSET(0x1C605420)
#define RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW_METHOD_3_958C7BA54AEA7759_OFFSET UNITYSDK_OFFSET(0x1C6053E0)
#define RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C605410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPhainonChargePointPreshow_TypeDefinitionIndex = 22328;

	class SetPhainonChargePointPreshow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* PreshowValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_958C7BA54AEA7759(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPhainonChargePointPreshow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPhainonChargePointPreshow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW_METHOD_3_958C7BA54AEA7759_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4252A5A0D4FE7EB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPhainonChargePointPreshow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPhainonChargePointPreshow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONCHARGEPOINTPRESHOW_METHOD_3_4252A5A0D4FE7EB2_OFFSET))(a1, a2);
		}
	};
}
