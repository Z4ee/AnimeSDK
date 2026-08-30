#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_184;
class Class_2_9AC7EED9B2600116;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_69312C8E0A4A7CBC_METHOD_1_70662636528151D7_OFFSET UNITYSDK_OFFSET(0x16B242E0)
#define CLASS_1_69312C8E0A4A7CBC_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16B241F0)
#define CLASS_1_69312C8E0A4A7CBC_METHOD_1_DB5D297A176C2473_OFFSET UNITYSDK_OFFSET(0x16B24280)
#define CLASS_1_69312C8E0A4A7CBC__CTOR_OFFSET UNITYSDK_OFFSET(0x16B24120)

inline static constexpr unsigned int Class_1_69312C8E0A4A7CBC_TypeDefinitionIndex = 80171;

class Class_1_69312C8E0A4A7CBC : public ::System::Object
{
public:
	::Class_2_9AC7EED9B2600116* MJHHLOPFDNK; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* GNBJKHLPFJG; // 0x18

	::System::Void _ctor(::Class_2_9AC7EED9B2600116* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9AC7EED9B2600116*))((::PBYTE)hIl2Cpp + CLASS_1_69312C8E0A4A7CBC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69312C8E0A4A7CBC_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_DB5D297A176C2473(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_69312C8E0A4A7CBC_METHOD_1_DB5D297A176C2473_OFFSET))(this, a1);
	}

	::System::Void Method_1_70662636528151D7(::Class_1_D17272E82AE804C2_184* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_184*))((::PBYTE)hIl2Cpp + CLASS_1_69312C8E0A4A7CBC_METHOD_1_70662636528151D7_OFFSET))(this, a1);
	}
};
