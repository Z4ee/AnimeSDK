#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_3B91E8B5FF29338A;
class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_EFD6FDA41BED42CC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1236B370)
#define CLASS_3_EFD6FDA41BED42CC_METHOD_3_22EC8C69ECF1ED19_OFFSET UNITYSDK_OFFSET(0x1236BE30)
#define CLASS_3_EFD6FDA41BED42CC_METHOD_3_3162B1CC8A52BF11_OFFSET UNITYSDK_OFFSET(0x1236B650)
#define CLASS_3_EFD6FDA41BED42CC_METHOD_3_929DD16AD3D83902_OFFSET UNITYSDK_OFFSET(0x1236BC60)
#define CLASS_3_EFD6FDA41BED42CC_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x1236B610)
#define CLASS_3_EFD6FDA41BED42CC_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1236BEA0)
#define CLASS_3_EFD6FDA41BED42CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1236B5C0)

inline static constexpr unsigned int Class_3_EFD6FDA41BED42CC_TypeDefinitionIndex = 54335;

class Class_3_EFD6FDA41BED42CC : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFD6FDA41BED42CC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_EFD6FDA41BED42CC_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_EFD6FDA41BED42CC_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_3162B1CC8A52BF11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_EFD6FDA41BED42CC_METHOD_3_3162B1CC8A52BF11_OFFSET))(a1);
	}

	static ::System::Void Method_3_22EC8C69ECF1ED19(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_EFD6FDA41BED42CC_METHOD_3_22EC8C69ECF1ED19_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_EFD6FDA41BED42CC_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_929DD16AD3D83902(::Class_1_3B91E8B5FF29338A* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_3B91E8B5FF29338A*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_EFD6FDA41BED42CC_METHOD_3_929DD16AD3D83902_OFFSET))(a1, a2);
	}
};
