#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Class_1_A17C15F7A175F4FE.h"
#include "unitysdk/System/Nullable_1.h"

class AkCallbackInfo;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4FD0213FEBB3B017_METHOD_2_22A07BAF6CB98B8A_OFFSET UNITYSDK_OFFSET(0xBEDFE30)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xBEDFD50)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_42DB5D19EEAC74D5_OFFSET UNITYSDK_OFFSET(0xBEDF970)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBEDF8F0)
#define CLASS_2_4FD0213FEBB3B017_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xBEDFC90)
#define CLASS_2_4FD0213FEBB3B017__CTOR_OFFSET UNITYSDK_OFFSET(0xBEDF870)

inline static constexpr unsigned int Class_2_4FD0213FEBB3B017_TypeDefinitionIndex = 72353;

class Class_2_4FD0213FEBB3B017 : public ::Class_1_A17C15F7A175F4FE
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* HOCGAJDKPJF; // 0x20
	::System::Nullable_1<::System::UInt32> MFFPFLFAAGN; // 0x28
	::System::Int32 NCDEGDCPCHN; // 0x30

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

	::System::Boolean Method_2_42DB5D19EEAC74D5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017_METHOD_2_42DB5D19EEAC74D5_OFFSET))(this);
	}

	::System::Void Method_2_22A07BAF6CB98B8A(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_4FD0213FEBB3B017_METHOD_2_22A07BAF6CB98B8A_OFFSET))(this, a1, a2, a3);
	}
};
