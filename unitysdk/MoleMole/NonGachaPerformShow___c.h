#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_NONGACHAPERFORMSHOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1264EC20)
#define MOLEMOLE_NONGACHAPERFORMSHOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1264EC60)
#define MOLEMOLE_NONGACHAPERFORMSHOW___C__DOPROCESS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1264EC70)

namespace MoleMole
{
	inline static constexpr unsigned int NonGachaPerformShow___c_TypeDefinitionIndex = 68648;

	class NonGachaPerformShow___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NonGachaPerformShow___c_TypeDefinitionIndex)->GetStaticField(0x30870);
		}
		static ::MoleMole::NonGachaPerformShow___c** StaticGet___9()
		{
			return (::MoleMole::NonGachaPerformShow___c**)Il2CppClass::FromTypeDefinitionIndex(NonGachaPerformShow___c_TypeDefinitionIndex)->GetStaticField(0x30878);
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
