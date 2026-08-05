#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5C38134D4169B6E0;
namespace MoleMole { class RadarStateChangeImageConfig; }
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_1_C4B3DE2B51336325_DISPOSE_OFFSET UNITYSDK_OFFSET(0x950ADC0)
#define CLASS_1_C4B3DE2B51336325_METHOD_1_9DC685F3E3A2FC2F_OFFSET UNITYSDK_OFFSET(0x950AF60)
#define CLASS_1_C4B3DE2B51336325__CTOR_OFFSET UNITYSDK_OFFSET(0x950ACA0)

inline static constexpr unsigned int Class_1_C4B3DE2B51336325_TypeDefinitionIndex = 60054;

class Class_1_C4B3DE2B51336325 : public ::System::Object
{
public:
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_1_7; // 0x10
	::Class_2_5C38134D4169B6E0* Field_1_1; // 0x18
	::MoleMole::RadarStateChangeImageConfig* Field_1_0; // 0x20

	::System::Void _ctor(::MoleMole::RadarStateChangeImageConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::RadarStateChangeImageConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C4B3DE2B51336325__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B3DE2B51336325_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_9DC685F3E3A2FC2F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4B3DE2B51336325_METHOD_1_9DC685F3E3A2FC2F_OFFSET))(this);
	}
};
