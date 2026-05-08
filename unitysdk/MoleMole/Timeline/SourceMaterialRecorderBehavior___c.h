#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3E0ED0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E0F10)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR___C__GETFRAMETIMES_B__34_0_OFFSET UNITYSDK_OFFSET(0x1C3E0F20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SourceMaterialRecorderBehavior___c_TypeDefinitionIndex = 30657;

	class SourceMaterialRecorderBehavior___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Double>** StaticGet___9__34_0()
		{
			return (::System::Comparison_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialRecorderBehavior___c_TypeDefinitionIndex)->GetStaticField(0x250B0);
		}
		static ::MoleMole::Timeline::SourceMaterialRecorderBehavior___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::SourceMaterialRecorderBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialRecorderBehavior___c_TypeDefinitionIndex)->GetStaticField(0x250B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetFrameTimes_b__34_0(::System::Double a, ::System::Double b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERBEHAVIOR___C__GETFRAMETIMES_B__34_0_OFFSET))(this, a, b);
		}
	};
}
