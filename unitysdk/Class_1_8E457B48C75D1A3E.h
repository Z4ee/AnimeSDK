#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { template <typename T> class ICollector_1; }
namespace System { class String; }

#define CLASS_1_8E457B48C75D1A3E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x134F4A30)
#define CLASS_1_8E457B48C75D1A3E_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x134F32B0)
#define CLASS_1_8E457B48C75D1A3E_METHOD_1_256DE5D46644182A_OFFSET UNITYSDK_OFFSET(0x134F3560)
#define CLASS_1_8E457B48C75D1A3E_METHOD_1_4F90720896143030_OFFSET UNITYSDK_OFFSET(0x134F3FA0)
#define CLASS_1_8E457B48C75D1A3E_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x134F4700)
#define CLASS_1_8E457B48C75D1A3E__CTOR_OFFSET UNITYSDK_OFFSET(0x134F31E0)

inline static constexpr unsigned int Class_1_8E457B48C75D1A3E_TypeDefinitionIndex = 71697;

class Class_1_8E457B48C75D1A3E : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* Field_1_0; // 0x10
	::Class_1_B4357A1C72BABC6B* Field_1_1; // 0x18
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_8E457B48C75D1A3E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E457B48C75D1A3E_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_256DE5D46644182A(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_8E457B48C75D1A3E_METHOD_1_256DE5D46644182A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F90720896143030(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Single, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E457B48C75D1A3E_METHOD_1_4F90720896143030_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E457B48C75D1A3E_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E457B48C75D1A3E_EXECUTE_OFFSET))(this);
	}
};
