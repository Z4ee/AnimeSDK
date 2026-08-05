#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_NONGACHAPERFORMSHOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A1B570)
#define MOLEMOLE_NONGACHAPERFORMSHOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1B5B0)
#define MOLEMOLE_NONGACHAPERFORMSHOW___C__DOPROCESS_B__6_0_OFFSET UNITYSDK_OFFSET(0x14A1B5C0)

namespace MoleMole
{
	inline static constexpr unsigned int NonGachaPerformShow___c_TypeDefinitionIndex = 59429;

	class NonGachaPerformShow___c : public ::System::Object
	{
	public:
		static ::MoleMole::NonGachaPerformShow___c** StaticGet___9()
		{
			return (::MoleMole::NonGachaPerformShow___c**)Il2CppClass::FromTypeDefinitionIndex(NonGachaPerformShow___c_TypeDefinitionIndex)->GetStaticField(0x32820);
		}
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NonGachaPerformShow___c_TypeDefinitionIndex)->GetStaticField(0x32828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoProcess_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NONGACHAPERFORMSHOW___C__DOPROCESS_B__6_0_OFFSET))(this);
		}
	};
}
