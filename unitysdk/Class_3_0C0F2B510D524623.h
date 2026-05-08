#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_D2635BA9D50B0AA7;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_0C0F2B510D524623_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFC45C80)
#define CLASS_3_0C0F2B510D524623_METHOD_3_1D3211B7F88CC9ED_OFFSET UNITYSDK_OFFSET(0xFC46090)
#define CLASS_3_0C0F2B510D524623_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0xFC46730)
#define CLASS_3_0C0F2B510D524623_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xFC467D0)
#define CLASS_3_0C0F2B510D524623_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFC466A0)
#define CLASS_3_0C0F2B510D524623_METHOD_3_E6E83B0F635316D3_OFFSET UNITYSDK_OFFSET(0xFC46770)
#define CLASS_3_0C0F2B510D524623_METHOD_3_FA159AA0128A939D_OFFSET UNITYSDK_OFFSET(0xFC462E0)
#define CLASS_3_0C0F2B510D524623_UPDATE_OFFSET UNITYSDK_OFFSET(0xFC45F20)
#define CLASS_3_0C0F2B510D524623__CTOR_OFFSET UNITYSDK_OFFSET(0xFC46040)

inline static constexpr unsigned int Class_3_0C0F2B510D524623_TypeDefinitionIndex = 64981;

class Class_3_0C0F2B510D524623 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C0F2B510D524623__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0C0F2B510D524623_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C0F2B510D524623_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_1D3211B7F88CC9ED(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_0C0F2B510D524623_METHOD_3_1D3211B7F88CC9ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C0F2B510D524623_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0C0F2B510D524623_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_E6E83B0F635316D3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_0C0F2B510D524623_METHOD_3_E6E83B0F635316D3_OFFSET))(a1);
	}

	::System::Void Method_3_FA159AA0128A939D(::Class_2_D2635BA9D50B0AA7* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D2635BA9D50B0AA7*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0C0F2B510D524623_METHOD_3_FA159AA0128A939D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_0C0F2B510D524623_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
