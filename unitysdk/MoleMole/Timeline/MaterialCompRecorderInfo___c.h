#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA6AF0)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA6B30)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__GETFRAMETIMES_B__36_0_OFFSET UNITYSDK_OFFSET(0x1DFA6B40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialCompRecorderInfo___c_TypeDefinitionIndex = 32175;

	class MaterialCompRecorderInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Double>** StaticGet___9__36_0()
		{
			return (::System::Comparison_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(MaterialCompRecorderInfo___c_TypeDefinitionIndex)->GetStaticField(0x26680);
		}
		static ::MoleMole::Timeline::MaterialCompRecorderInfo___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::MaterialCompRecorderInfo___c**)Il2CppClass::FromTypeDefinitionIndex(MaterialCompRecorderInfo___c_TypeDefinitionIndex)->GetStaticField(0x26688);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetFrameTimes_b__36_0(::System::Double a, ::System::Double b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__GETFRAMETIMES_B__36_0_OFFSET))(this, a, b);
		}
	};
}
