#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAbilityTarget.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x142581E0)
#define MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_METHOD_2_8A316FECF3911D9F_OFFSET UNITYSDK_OFFSET(0x14257B60)
#define MOLEMOLE_CONFIG_TIMELINEABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x14258240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TimelineAbilityTarget_TypeDefinitionIndex = 54402;

	class TimelineAbilityTarget : public ::MoleMole::Config::ConfigAbilityTarget
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* resultList; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* selectList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TIMELINEABILITYTARGET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>* Method_2_8A316FECF3911D9F(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a5, ::System::UInt32 a6)
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_FA5F50563E60AFBA>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_METHOD_2_8A316FECF3911D9F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_2_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TIMELINEABILITYTARGET_METHOD_2_1808E1CF7A125519_OFFSET))(this);
		}
	};
}
