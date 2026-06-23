#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_F7D56A55B5D15104_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x7179D10)
#define CLASS_3_F7D56A55B5D15104_METHOD_3_14A98925D5EFA0EA_OFFSET UNITYSDK_OFFSET(0x717A400)
#define CLASS_3_F7D56A55B5D15104_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x717A2E0)
#define CLASS_3_F7D56A55B5D15104_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x717A370)
#define CLASS_3_F7D56A55B5D15104_UPDATE_OFFSET UNITYSDK_OFFSET(0x717A160)
#define CLASS_3_F7D56A55B5D15104__CTOR_OFFSET UNITYSDK_OFFSET(0x717A290)

inline static constexpr unsigned int Class_3_F7D56A55B5D15104_TypeDefinitionIndex = 79426;

class Class_3_F7D56A55B5D15104 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7D56A55B5D15104__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F7D56A55B5D15104_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7D56A55B5D15104_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F7D56A55B5D15104_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F7D56A55B5D15104_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_14A98925D5EFA0EA(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F7D56A55B5D15104_METHOD_3_14A98925D5EFA0EA_OFFSET))(a1, a2);
	}
};
