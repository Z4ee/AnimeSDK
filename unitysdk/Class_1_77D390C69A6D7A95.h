#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_77D390C69A6D7A95_METHOD_1_2567BCB429BA277F_OFFSET UNITYSDK_OFFSET(0x1391C020)
#define CLASS_1_77D390C69A6D7A95_METHOD_1_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x1391C190)
#define CLASS_1_77D390C69A6D7A95_METHOD_1_F34B92D2A17D1611_OFFSET UNITYSDK_OFFSET(0x1391BE90)
#define CLASS_1_77D390C69A6D7A95__CTOR_OFFSET UNITYSDK_OFFSET(0x1391BDD0)

inline static constexpr unsigned int Class_1_77D390C69A6D7A95_TypeDefinitionIndex = 87952;

class Class_1_77D390C69A6D7A95 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Int32>* Field_1_0; // 0x10
	::Struct_2_9E75F47F2670B678 Field_1_1; // 0x18
	::Struct_2_9E75F47F2670B678 Field_1_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D390C69A6D7A95__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F34B92D2A17D1611(::System::UInt16 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_77D390C69A6D7A95_METHOD_1_F34B92D2A17D1611_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2567BCB429BA277F(::System::UInt16 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_77D390C69A6D7A95_METHOD_1_2567BCB429BA277F_OFFSET))(this, a1);
	}

	::Struct_2_9E75F47F2670B678 Method_1_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77D390C69A6D7A95_METHOD_1_895E6BF2EDCD95D0_OFFSET))(this);
	}
};
