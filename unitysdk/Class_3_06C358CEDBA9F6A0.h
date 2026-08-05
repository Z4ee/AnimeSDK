#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_7BC460568DB72882;
class Class_3_88E0B2774B181B72;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_06C358CEDBA9F6A0_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x17F25B80)
#define CLASS_3_06C358CEDBA9F6A0_METHOD_3_01CC46B2EE97FDDD_OFFSET UNITYSDK_OFFSET(0x17F261D0)
#define CLASS_3_06C358CEDBA9F6A0_METHOD_3_40D409ED1D05452C_OFFSET UNITYSDK_OFFSET(0x17F25EC0)
#define CLASS_3_06C358CEDBA9F6A0_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x17F25D70)
#define CLASS_3_06C358CEDBA9F6A0_METHOD_3_CF1DBC0D6BA4EEA1_OFFSET UNITYSDK_OFFSET(0x17F25E00)
#define CLASS_3_06C358CEDBA9F6A0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F25D20)

inline static constexpr unsigned int Class_3_06C358CEDBA9F6A0_TypeDefinitionIndex = 82351;

class Class_3_06C358CEDBA9F6A0 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06C358CEDBA9F6A0__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_06C358CEDBA9F6A0_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_06C358CEDBA9F6A0_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_CF1DBC0D6BA4EEA1(::Class_3_88E0B2774B181B72* a1, ::Class_1_7BC460568DB72882* a2)
	{
		return ((::System::Void(*)(::Class_3_88E0B2774B181B72*, ::Class_1_7BC460568DB72882*))((::PBYTE)hIl2Cpp + CLASS_3_06C358CEDBA9F6A0_METHOD_3_CF1DBC0D6BA4EEA1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_40D409ED1D05452C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_06C358CEDBA9F6A0_METHOD_3_40D409ED1D05452C_OFFSET))(a1);
	}

	static ::System::Void Method_3_01CC46B2EE97FDDD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_06C358CEDBA9F6A0_METHOD_3_01CC46B2EE97FDDD_OFFSET))(a1);
	}
};
