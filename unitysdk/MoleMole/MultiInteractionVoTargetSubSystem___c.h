#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_72BDD67FEA972F1C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1739CE90)
#define MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1739CED0)
#define MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__GET__INTERACTIONACTIVATEDPREDICATE_B__24_0_OFFSET UNITYSDK_OFFSET(0x1739CEE0)

namespace MoleMole
{
	inline static constexpr unsigned int MultiInteractionVoTargetSubSystem___c_TypeDefinitionIndex = 44511;

	class MultiInteractionVoTargetSubSystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::MultiInteractionVoTargetSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::MultiInteractionVoTargetSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(MultiInteractionVoTargetSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x44E80);
		}
		static ::System::Func_2<::Class_2_72BDD67FEA972F1C*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::Class_2_72BDD67FEA972F1C*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MultiInteractionVoTargetSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x44E88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get__interactionActivatedPredicate_b__24_0(::Class_2_72BDD67FEA972F1C* interaction)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__GET__INTERACTIONACTIVATEDPREDICATE_B__24_0_OFFSET))(this, interaction);
		}
	};
}
