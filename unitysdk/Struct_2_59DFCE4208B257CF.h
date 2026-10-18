#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }

#define STRUCT_2_59DFCE4208B257CF_METHOD_2_153D35EE95E36BB4_OFFSET UNITYSDK_OFFSET(0x26160)
#define STRUCT_2_59DFCE4208B257CF_METHOD_2_23D3437E43472538_OFFSET UNITYSDK_OFFSET(0x260C0)
#define STRUCT_2_59DFCE4208B257CF_METHOD_2_8F7AD00CE70D0A7B_OFFSET UNITYSDK_OFFSET(0x26000)
#define STRUCT_2_59DFCE4208B257CF_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x260D0)
#define STRUCT_2_59DFCE4208B257CF__CTOR_OFFSET UNITYSDK_OFFSET(0x25FF0)

inline static constexpr unsigned int Struct_2_59DFCE4208B257CF_TypeDefinitionIndex = 63123;

struct alignas(8) Struct_2_59DFCE4208B257CF
{
	::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>* FMEIEHKADFL; // 0x10
	::System::Int32 EGHODOFKOJG; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + STRUCT_2_59DFCE4208B257CF__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8F7AD00CE70D0A7B(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_59DFCE4208B257CF_METHOD_2_8F7AD00CE70D0A7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_23D3437E43472538(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_59DFCE4208B257CF_METHOD_2_23D3437E43472538_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_59DFCE4208B257CF_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_153D35EE95E36BB4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_59DFCE4208B257CF_METHOD_2_153D35EE95E36BB4_OFFSET))(this, a1);
	}
};
