#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_790B79B02D84C247.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_39;
class Class_3_C42038ADC368DD79;
class Class_3_FC960E76F7A651E8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_AD0B670E62600413_METHOD_1_3641E3293F70FB95_OFFSET UNITYSDK_OFFSET(0x13A723C0)
#define CLASS_1_AD0B670E62600413_METHOD_1_DF9F9C336BA14A4A_OFFSET UNITYSDK_OFFSET(0x13A72540)
#define CLASS_1_AD0B670E62600413__CTOR_OFFSET UNITYSDK_OFFSET(0x13A723B0)

inline static constexpr unsigned int Class_1_AD0B670E62600413_TypeDefinitionIndex = 52049;

class Class_1_AD0B670E62600413 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Enum_3_790B79B02D84C247, ::Class_1_43BD383C98B4C0C5_39*>* Field_1_3; // 0x10
	::System::Collections::Generic::IList_1<::Enum_3_790B79B02D84C247>* Field_1_4; // 0x18
	::Class_3_FC960E76F7A651E8* Field_1_5; // 0x20
	::System::UInt32 Field_1_1; // 0x28
	::System::UInt32 Field_1_0; // 0x2C
	::ProtoScript::HollowEntityType Field_1_2; // 0x30

	::System::Void _ctor(::Class_3_C42038ADC368DD79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C42038ADC368DD79*))((::PBYTE)hIl2Cpp + CLASS_1_AD0B670E62600413__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3641E3293F70FB95(::Class_3_C42038ADC368DD79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C42038ADC368DD79*))((::PBYTE)hIl2Cpp + CLASS_1_AD0B670E62600413_METHOD_1_3641E3293F70FB95_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF9F9C336BA14A4A(::Class_3_C42038ADC368DD79* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C42038ADC368DD79*))((::PBYTE)hIl2Cpp + CLASS_1_AD0B670E62600413_METHOD_1_DF9F9C336BA14A4A_OFFSET))(this, a1);
	}
};
