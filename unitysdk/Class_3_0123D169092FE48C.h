#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_3B91E8B5FF29338A;
class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_0123D169092FE48C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x123F4DA0)
#define CLASS_3_0123D169092FE48C_METHOD_3_14588B9EF32611C7_OFFSET UNITYSDK_OFFSET(0x123F50B0)
#define CLASS_3_0123D169092FE48C_METHOD_3_5932CC4E78256ED5_OFFSET UNITYSDK_OFFSET(0x123F5040)
#define CLASS_3_0123D169092FE48C_METHOD_3_7BAE73D86D27264C_OFFSET UNITYSDK_OFFSET(0x123F5750)
#define CLASS_3_0123D169092FE48C_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x123F5910)
#define CLASS_3_0123D169092FE48C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x123F5950)
#define CLASS_3_0123D169092FE48C__CTOR_OFFSET UNITYSDK_OFFSET(0x123F4FF0)

inline static constexpr unsigned int Class_3_0123D169092FE48C_TypeDefinitionIndex = 70510;

class Class_3_0123D169092FE48C : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5932CC4E78256ED5(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_METHOD_3_5932CC4E78256ED5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7BAE73D86D27264C(::Class_1_3B91E8B5FF29338A* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_3B91E8B5FF29338A*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_METHOD_3_7BAE73D86D27264C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_14588B9EF32611C7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0123D169092FE48C_METHOD_3_14588B9EF32611C7_OFFSET))(a1);
	}
};
