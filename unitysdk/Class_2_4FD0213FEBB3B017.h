#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Class_1_96A8C9A5EC9A9117.h"
#include "unitysdk/System/Nullable_1.h"

class AkCallbackInfo;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4FD0213FEBB3B017_METHOD_2_22A07BAF6CB98B8A_OFFSET UNITYSDK_OFFSET(0xAB19EF0)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xAB19E10)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xAB1A000)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAB19FA0)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0xAB19AF0)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAB19A70)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xAB19D50)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0xAB1A060)
#define CLASS_2_4FD0213FEBB3B017__CTOR_OFFSET UNITYSDK_OFFSET(0xAB199F0)

inline static constexpr unsigned int Class_2_4FD0213FEBB3B017_TypeDefinitionIndex = 67668;

class Class_2_4FD0213FEBB3B017 : public ::Class_1_96A8C9A5EC9A9117
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x28
	::System::Nullable_1<::System::UInt32> Field_2_2; // 0x2C

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7A4DA50406643EC6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017_METHOD_2_7A4DA50406643EC6_OFFSET))(this);
	}

	::System::Void Method_2_22A07BAF6CB98B8A(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017_METHOD_2_22A07BAF6CB98B8A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}
};
