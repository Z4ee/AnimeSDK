#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5C38134D4169B6E0;
namespace MoleMole { class RadarStateChangeImageConfig; }
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_1_14BD1BAC619F45D4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12FE33E0)
#define CLASS_1_14BD1BAC619F45D4_METHOD_1_9DC685F3E3A2FC2F_OFFSET UNITYSDK_OFFSET(0x12FE3580)
#define CLASS_1_14BD1BAC619F45D4__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE32B0)

inline static constexpr unsigned int Class_1_14BD1BAC619F45D4_TypeDefinitionIndex = 62717;

class Class_1_14BD1BAC619F45D4 : public ::System::Object
{
public:
	::Class_2_5C38134D4169B6E0* Field_1_0; // 0x10
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_1_2; // 0x18
	::MoleMole::RadarStateChangeImageConfig* Field_1_1; // 0x20

	::System::Void _ctor(::MoleMole::RadarStateChangeImageConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::RadarStateChangeImageConfig*))((::PBYTE)hIl2Cpp + CLASS_1_14BD1BAC619F45D4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14BD1BAC619F45D4_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_9DC685F3E3A2FC2F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14BD1BAC619F45D4_METHOD_1_9DC685F3E3A2FC2F_OFFSET))(this);
	}
};
