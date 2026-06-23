#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_7F6718CB826B7054_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x179324D0)
#define CLASS_3_7F6718CB826B7054_METHOD_3_23413BF1AFF9B860_OFFSET UNITYSDK_OFFSET(0x17932AE0)
#define CLASS_3_7F6718CB826B7054_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x17932A50)
#define CLASS_3_7F6718CB826B7054_METHOD_3_D30AD3157A1A0E32_OFFSET UNITYSDK_OFFSET(0x179326A0)
#define CLASS_3_7F6718CB826B7054__CTOR_OFFSET UNITYSDK_OFFSET(0x17932650)

inline static constexpr unsigned int Class_3_7F6718CB826B7054_TypeDefinitionIndex = 85550;

class Class_3_7F6718CB826B7054 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7F6718CB826B7054__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7F6718CB826B7054_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_D30AD3157A1A0E32(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7F6718CB826B7054_METHOD_3_D30AD3157A1A0E32_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_7F6718CB826B7054_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_23413BF1AFF9B860(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7F6718CB826B7054_METHOD_3_23413BF1AFF9B860_OFFSET))(this, a1);
	}
};
