#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_LOCKSTANCE_METHOD_3_70BAF3ED155CFB89_OFFSET UNITYSDK_OFFSET(0x1DD79090)
#define RPG_GAMECORE_LOCKSTANCE_METHOD_3_BE6D20368DDF66A2_OFFSET UNITYSDK_OFFSET(0x1DD78FB0)
#define RPG_GAMECORE_LOCKSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD79030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockStance_TypeDefinitionIndex = 23353;

	class LockStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* StanceCount; // 0x18
		::RPG::GameCore::DynamicFloat* StanceValueRatio; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE6D20368DDF66A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTANCE_METHOD_3_BE6D20368DDF66A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_70BAF3ED155CFB89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTANCE_METHOD_3_70BAF3ED155CFB89_OFFSET))(a1, a2);
		}
	};
}
