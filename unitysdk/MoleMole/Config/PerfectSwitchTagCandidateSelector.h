#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PERFECTSWITCHTAGCANDIDATESELECTOR_METHOD_2_77080AF97C54AF23_OFFSET UNITYSDK_OFFSET(0x16B47CC0)
#define MOLEMOLE_CONFIG_PERFECTSWITCHTAGCANDIDATESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16B47EB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PerfectSwitchTagCandidateSelector_TypeDefinitionIndex = 42197;

	class PerfectSwitchTagCandidateSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHTAGCANDIDATESELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_2_77080AF97C54AF23(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHTAGCANDIDATESELECTOR_METHOD_2_77080AF97C54AF23_OFFSET))(this, a1);
		}
	};
}
