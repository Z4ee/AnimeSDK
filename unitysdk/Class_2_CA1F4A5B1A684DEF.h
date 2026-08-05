#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_69.h"

class Class_2_A2C95BEE51D13F24;
class Class_2_D09F9E57BC6350B3_1;
namespace MoleMole { class UISummerMissionTipsWidgetController; }
namespace System { class String; }

#define CLASS_2_CA1F4A5B1A684DEF_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x17A3DE50)
#define CLASS_2_CA1F4A5B1A684DEF_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x17A3DD10)
#define CLASS_2_CA1F4A5B1A684DEF_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x17A3DF60)
#define CLASS_2_CA1F4A5B1A684DEF__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3DBB0)

inline static constexpr unsigned int Class_2_CA1F4A5B1A684DEF_TypeDefinitionIndex = 80529;

class Class_2_CA1F4A5B1A684DEF : public ::Class_1_43BD383C98B4C0C5_69
{
public:
	// static const ::System::String* Field_2_7; // 0x0
	::Class_2_A2C95BEE51D13F24* Field_2_1; // 0x10
	::MoleMole::UISummerMissionTipsWidgetController* Field_2_3; // 0x18
	::Class_2_D09F9E57BC6350B3_1* Field_2_2; // 0x20
	::System::Single Field_2_0; // 0x28

	::System::Void _ctor(::MoleMole::UISummerMissionTipsWidgetController* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerMissionTipsWidgetController*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA1F4A5B1A684DEF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1F4A5B1A684DEF_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1F4A5B1A684DEF_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA1F4A5B1A684DEF_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}
};
