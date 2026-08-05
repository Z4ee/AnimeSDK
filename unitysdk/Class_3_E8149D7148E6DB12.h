#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_E8149D7148E6DB12_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x17032A10)
#define CLASS_3_E8149D7148E6DB12_METHOD_3_9C4A6BF443A6D89F_OFFSET UNITYSDK_OFFSET(0x17032E20)
#define CLASS_3_E8149D7148E6DB12_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x17033220)
#define CLASS_3_E8149D7148E6DB12_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x17033260)
#define CLASS_3_E8149D7148E6DB12_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x170332F0)
#define CLASS_3_E8149D7148E6DB12_UPDATE_OFFSET UNITYSDK_OFFSET(0x17032CA0)
#define CLASS_3_E8149D7148E6DB12__CTOR_OFFSET UNITYSDK_OFFSET(0x17032DD0)

inline static constexpr unsigned int Class_3_E8149D7148E6DB12_TypeDefinitionIndex = 78582;

class Class_3_E8149D7148E6DB12 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8149D7148E6DB12__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E8149D7148E6DB12_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8149D7148E6DB12_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_9C4A6BF443A6D89F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E8149D7148E6DB12_METHOD_3_9C4A6BF443A6D89F_OFFSET))(a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E8149D7148E6DB12_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E8149D7148E6DB12_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8149D7148E6DB12_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
