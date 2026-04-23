#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_9993237B4DDF2141_OFFSET UNITYSDK_OFFSET(0x187431C0)
#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_BFB9B70198F60B43_OFFSET UNITYSDK_OFFSET(0x18743290)
#define RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18743240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentRogueHasMiracle_TypeDefinitionIndex = 20033;

	class ByCurrentRogueHasMiracle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MiracleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9993237B4DDF2141(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentRogueHasMiracle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_9993237B4DDF2141_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFB9B70198F60B43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentRogueHasMiracle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentRogueHasMiracle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTROGUEHASMIRACLE_METHOD_4_BFB9B70198F60B43_OFFSET))(a1, a2);
		}
	};
}
