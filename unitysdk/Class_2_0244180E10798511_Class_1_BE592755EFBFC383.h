#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"

class Class_2_0244180E10798511;
class Class_3_32CD58E95ADFF8F5_58;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_0244180E10798511_CLASS_1_BE592755EFBFC383_METHOD_1_1192BDF8FF0D8F9C_OFFSET UNITYSDK_OFFSET(0x10FDAFE0)
#define CLASS_2_0244180E10798511_CLASS_1_BE592755EFBFC383__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDAFD0)

inline static constexpr unsigned int Class_2_0244180E10798511_Class_1_BE592755EFBFC383_TypeDefinitionIndex = 43990;

class Class_2_0244180E10798511_Class_1_BE592755EFBFC383 : public ::System::Object
{
public:
	::Class_2_0244180E10798511* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Collections::Generic::IEnumerable_1<::Struct_2_76CCAEE20B3AE57C>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_BE592755EFBFC383__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1192BDF8FF0D8F9C(::Class_3_32CD58E95ADFF8F5_58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_58*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_BE592755EFBFC383_METHOD_1_1192BDF8FF0D8F9C_OFFSET))(this, a1);
	}
};
