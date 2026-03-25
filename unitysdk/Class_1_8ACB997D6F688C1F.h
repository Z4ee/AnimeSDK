#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"
#include "unitysdk/System/Object.h"

class Class_1_2B357179601D6146;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8ACB997D6F688C1F_METHOD_1_1CCDA1549A64436D_OFFSET UNITYSDK_OFFSET(0x8DE64B0)
#define CLASS_1_8ACB997D6F688C1F_METHOD_1_59EB78C082EE580B_OFFSET UNITYSDK_OFFSET(0x8DE6380)
#define CLASS_1_8ACB997D6F688C1F__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE6680)

inline static constexpr unsigned int Class_1_8ACB997D6F688C1F_TypeDefinitionIndex = 52716;

class Class_1_8ACB997D6F688C1F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2B357179601D6146*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ACB997D6F688C1F__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_59EB78C082EE580B(::System::UInt32 a1, ::System::UInt32 a2, ::Struct_2_0814C3CA012BD292 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_1_8ACB997D6F688C1F_METHOD_1_59EB78C082EE580B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_2B357179601D6146* Method_1_1CCDA1549A64436D(::System::UInt32 a1, ::Struct_2_0814C3CA012BD292 a2)
	{
		return ((::Class_1_2B357179601D6146*(*)(::PVOID, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_1_8ACB997D6F688C1F_METHOD_1_1CCDA1549A64436D_OFFSET))(this, a1, a2);
	}
};
