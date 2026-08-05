#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_ECFF596C388BD83F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15F11320)
#define CLASS_3_ECFF596C388BD83F_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x15F114B0)
#define CLASS_3_ECFF596C388BD83F_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x15F116F0)
#define CLASS_3_ECFF596C388BD83F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F11660)
#define CLASS_3_ECFF596C388BD83F__CTOR_OFFSET UNITYSDK_OFFSET(0x15F11610)

inline static constexpr unsigned int Class_3_ECFF596C388BD83F_TypeDefinitionIndex = 53192;

class Class_3_ECFF596C388BD83F : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_ECFF596C388BD83F_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
