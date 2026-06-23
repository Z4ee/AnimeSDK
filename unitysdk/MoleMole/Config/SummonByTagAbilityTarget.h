#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/MoleMole/Config/SummonByTagAbilityTarget_Enum_3_4F6FD9AFDCC83F65.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_METHOD_2_2F5AF86AF3904C2F_OFFSET UNITYSDK_OFFSET(0x1AA793C0)
#define MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_METHOD_2_576260B5694D646F_OFFSET UNITYSDK_OFFSET(0x1AA78970)
#define MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_METHOD_2_B292B8A21B3BECAC_OFFSET UNITYSDK_OFFSET(0x1AA79660)
#define MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA79600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SummonByTagAbilityTarget_TypeDefinitionIndex = 53589;

	class SummonByTagAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* SummonTag; // 0x40
		::MoleMole::Config::SummonByTagAbilityTarget_Enum_3_4F6FD9AFDCC83F65 SelectKind; // 0x48
		::System::Boolean IsSelfSummoner; // 0x4C
		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* findList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_2_576260B5694D646F(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5, ::System::UInt32 a6)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_METHOD_2_576260B5694D646F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_2_2F5AF86AF3904C2F(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_METHOD_2_2F5AF86AF3904C2F_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_2_B292B8A21B3BECAC(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMONBYTAGABILITYTARGET_METHOD_2_B292B8A21B3BECAC_OFFSET))(this, a1, a2);
		}
	};
}
