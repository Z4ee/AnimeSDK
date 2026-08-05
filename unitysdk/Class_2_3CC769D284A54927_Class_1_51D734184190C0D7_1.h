#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3CC769D284A54927;
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_3CC769D284A54927_CLASS_1_51D734184190C0D7_1_METHOD_1_4DA6D4A624E42CAB_1_OFFSET UNITYSDK_OFFSET(0x1505B5D0)
#define CLASS_2_3CC769D284A54927_CLASS_1_51D734184190C0D7_1_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1505B510)
#define CLASS_2_3CC769D284A54927_CLASS_1_51D734184190C0D7_1_METHOD_1_D1CB66876D4EE837_OFFSET UNITYSDK_OFFSET(0x1505B690)
#define CLASS_2_3CC769D284A54927_CLASS_1_51D734184190C0D7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1505B500)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Class_1_51D734184190C0D7_1_TypeDefinitionIndex = 76728;

class Class_2_3CC769D284A54927_Class_1_51D734184190C0D7_1 : public ::System::Object
{
public:
	::UnityEngine::Animator* Field_1_1; // 0x10
	::Class_2_3CC769D284A54927* Field_1_0; // 0x18
	::System::Func_1<::System::Boolean>* Field_1_7; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_51D734184190C0D7_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_51D734184190C0D7_1_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_51D734184190C0D7_1_METHOD_1_4DA6D4A624E42CAB_1_OFFSET))(this);
	}

	::System::Void Method_1_D1CB66876D4EE837(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_CLASS_1_51D734184190C0D7_1_METHOD_1_D1CB66876D4EE837_OFFSET))(this, a1);
	}
};
