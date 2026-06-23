#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_E2FF7CAE8A737A24_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12E74240)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_3BEE013982122797_OFFSET UNITYSDK_OFFSET(0x12E748B0)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_8231AFE9C45B461F_OFFSET UNITYSDK_OFFSET(0x12E74C10)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_A5BDF5C904FDBB47_OFFSET UNITYSDK_OFFSET(0x12E74640)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_AF06AF42B699F058_OFFSET UNITYSDK_OFFSET(0x12E74A50)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x12E74480)
#define CLASS_3_E2FF7CAE8A737A24_METHOD_3_D4E92F2DE5F84390_OFFSET UNITYSDK_OFFSET(0x12E74510)
#define CLASS_3_E2FF7CAE8A737A24__CTOR_OFFSET UNITYSDK_OFFSET(0x12E74430)

inline static constexpr unsigned int Class_3_E2FF7CAE8A737A24_TypeDefinitionIndex = 64686;

class Class_3_E2FF7CAE8A737A24 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_D4E92F2DE5F84390(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_D4E92F2DE5F84390_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_3BEE013982122797()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_3BEE013982122797_OFFSET))();
	}

	static ::System::Void Method_3_A5BDF5C904FDBB47(::Class_3_DFD5D1FDB9D2A4AC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_A5BDF5C904FDBB47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AF06AF42B699F058(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_AF06AF42B699F058_OFFSET))(a1);
	}

	static ::System::Void Method_3_8231AFE9C45B461F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E2FF7CAE8A737A24_METHOD_3_8231AFE9C45B461F_OFFSET))(a1);
	}
};
