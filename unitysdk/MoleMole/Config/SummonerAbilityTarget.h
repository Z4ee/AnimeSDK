#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SUMMONERABILITYTARGET_METHOD_2_4B906FE82244ECD0_OFFSET UNITYSDK_OFFSET(0x158C36B0)
#define MOLEMOLE_CONFIG_SUMMONERABILITYTARGET_METHOD_2_EC39254A2A7DF615_OFFSET UNITYSDK_OFFSET(0x158C3570)
#define MOLEMOLE_CONFIG_SUMMONERABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x158C3960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SummonerAbilityTarget_TypeDefinitionIndex = 62905;

	class SummonerAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONERABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_2_EC39254A2A7DF615(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5, ::System::UInt32 a6)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONERABILITYTARGET_METHOD_2_EC39254A2A7DF615_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MoleMole::Battle::Entity* Method_2_4B906FE82244ECD0(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONERABILITYTARGET_METHOD_2_4B906FE82244ECD0_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
