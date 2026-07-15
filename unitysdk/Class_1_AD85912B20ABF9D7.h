#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_1_43BD383C98B4C0C5_187;
class Class_1_A335CFE48265E251;
namespace RPG::Client::OpenWorld { template <typename T> class VolumeComponentTransition_1; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AD85912B20ABF9D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14FBEB30)
#define CLASS_1_AD85912B20ABF9D7_METHOD_1_01AC33AF0330F7F0_OFFSET UNITYSDK_OFFSET(0x14FBE1D0)
#define CLASS_1_AD85912B20ABF9D7_METHOD_1_2943CB55423DBA35_OFFSET UNITYSDK_OFFSET(0x14FBE9A0)
#define CLASS_1_AD85912B20ABF9D7__CTOR_OFFSET UNITYSDK_OFFSET(0x14FBE1C0)

inline static constexpr unsigned int Class_1_AD85912B20ABF9D7_TypeDefinitionIndex = 70630;

class Class_1_AD85912B20ABF9D7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_1_43BD383C98B4C0C5_187*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD85912B20ABF9D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_01AC33AF0330F7F0(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_AD85912B20ABF9D7_METHOD_1_01AC33AF0330F7F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_2943CB55423DBA35(::Class_1_A335CFE48265E251* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A335CFE48265E251*))((::PBYTE)hIl2Cpp + CLASS_1_AD85912B20ABF9D7_METHOD_1_2943CB55423DBA35_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD85912B20ABF9D7_DISPOSE_OFFSET))(this);
	}
};
