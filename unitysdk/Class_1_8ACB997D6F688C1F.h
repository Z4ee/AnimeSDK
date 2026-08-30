#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"
#include "unitysdk/System/Object.h"

class Class_1_B0665B42245E17DA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8ACB997D6F688C1F_METHOD_1_59EB78C082EE580B_OFFSET UNITYSDK_OFFSET(0x18378210)
#define CLASS_1_8ACB997D6F688C1F_METHOD_1_F8500317B85F31FF_OFFSET UNITYSDK_OFFSET(0x18378340)
#define CLASS_1_8ACB997D6F688C1F__CTOR_OFFSET UNITYSDK_OFFSET(0x183784E0)

inline static constexpr unsigned int Class_1_8ACB997D6F688C1F_TypeDefinitionIndex = 64984;

class Class_1_8ACB997D6F688C1F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_B0665B42245E17DA*>* FDHOAEDHKCH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ACB997D6F688C1F__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_59EB78C082EE580B(::System::UInt32 a1, ::System::UInt32 a2, ::Struct_2_0814C3CA012BD292 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_1_8ACB997D6F688C1F_METHOD_1_59EB78C082EE580B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_B0665B42245E17DA* Method_1_F8500317B85F31FF(::System::UInt32 a1, ::Struct_2_0814C3CA012BD292 a2)
	{
		return ((::Class_1_B0665B42245E17DA*(*)(::PVOID, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_1_8ACB997D6F688C1F_METHOD_1_F8500317B85F31FF_OFFSET))(this, a1, a2);
	}
};
