#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_ECFF596C388BD83F_1_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10B72990)
#define CLASS_3_ECFF596C388BD83F_1_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x10B72B20)
#define CLASS_3_ECFF596C388BD83F_1_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x10B72CD0)
#define CLASS_3_ECFF596C388BD83F_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B72D60)
#define CLASS_3_ECFF596C388BD83F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B72C80)

inline static constexpr unsigned int Class_3_ECFF596C388BD83F_1_TypeDefinitionIndex = 81516;

class Class_3_ECFF596C388BD83F_1 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F_1__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F_1_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F_1_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F_1_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
