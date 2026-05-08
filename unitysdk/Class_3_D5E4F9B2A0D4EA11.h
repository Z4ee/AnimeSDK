#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_7BC460568DB72882;
class Class_3_88E0B2774B181B72;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_D5E4F9B2A0D4EA11_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10924E60)
#define CLASS_3_D5E4F9B2A0D4EA11_METHOD_3_01CC46B2EE97FDDD_OFFSET UNITYSDK_OFFSET(0x10925360)
#define CLASS_3_D5E4F9B2A0D4EA11_METHOD_3_411FCB9D08C80CF5_OFFSET UNITYSDK_OFFSET(0x10925050)
#define CLASS_3_D5E4F9B2A0D4EA11_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x109255F0)
#define CLASS_3_D5E4F9B2A0D4EA11_METHOD_3_DB1F5A2F79E86973_OFFSET UNITYSDK_OFFSET(0x10925680)
#define CLASS_3_D5E4F9B2A0D4EA11__CTOR_OFFSET UNITYSDK_OFFSET(0x10925000)

inline static constexpr unsigned int Class_3_D5E4F9B2A0D4EA11_TypeDefinitionIndex = 44719;

class Class_3_D5E4F9B2A0D4EA11 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5E4F9B2A0D4EA11__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D5E4F9B2A0D4EA11_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_411FCB9D08C80CF5(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D5E4F9B2A0D4EA11_METHOD_3_411FCB9D08C80CF5_OFFSET))(a1);
	}

	static ::System::Void Method_3_01CC46B2EE97FDDD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_D5E4F9B2A0D4EA11_METHOD_3_01CC46B2EE97FDDD_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_D5E4F9B2A0D4EA11_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_DB1F5A2F79E86973(::Class_3_88E0B2774B181B72* a1, ::Class_1_7BC460568DB72882* a2)
	{
		return ((::System::Void(*)(::Class_3_88E0B2774B181B72*, ::Class_1_7BC460568DB72882*))((::PBYTE)hIl2Cpp + CLASS_3_D5E4F9B2A0D4EA11_METHOD_3_DB1F5A2F79E86973_OFFSET))(a1, a2);
	}
};
