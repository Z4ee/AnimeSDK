#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9A47B19873DD5A1F.h"
#include "unitysdk/System/Object.h"

class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_C39A1B374BC93058_EXECUTE_OFFSET UNITYSDK_OFFSET(0x162FD740)
#define CLASS_1_C39A1B374BC93058_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x162FD5E0)
#define CLASS_1_C39A1B374BC93058_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x162FDC80)
#define CLASS_1_C39A1B374BC93058_METHOD_1_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x162FDEC0)
#define CLASS_1_C39A1B374BC93058_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x162FE2D0)
#define CLASS_1_C39A1B374BC93058__CTOR_OFFSET UNITYSDK_OFFSET(0x162FD5D0)

inline static constexpr unsigned int Class_1_C39A1B374BC93058_TypeDefinitionIndex = 73825;

class Class_1_C39A1B374BC93058 : public ::System::Object
{
public:
	::Class_3_97041AE90E3B2214* Field_1_0; // 0x10
	::Struct_2_9A47B19873DD5A1F Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_5436AF4270279182*>* Field_1_2; // 0x30
	::System::Boolean Field_1_3; // 0x38
	::System::Single Field_1_4; // 0x3C

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_C39A1B374BC93058__CTOR_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C39A1B374BC93058_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C39A1B374BC93058_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C39A1B374BC93058_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C39A1B374BC93058_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_1_AE828D899505A3B4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C39A1B374BC93058_METHOD_1_AE828D899505A3B4_OFFSET))(this);
	}
};
