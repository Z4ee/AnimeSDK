#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_211;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AC9A71375E037558_CLASS_1_E5246FD6331491BF_METHOD_1_085A8E87FDE2E114_OFFSET UNITYSDK_OFFSET(0x181F6140)
#define CLASS_1_AC9A71375E037558_CLASS_1_E5246FD6331491BF__CTOR_OFFSET UNITYSDK_OFFSET(0x181F6130)

inline static constexpr unsigned int Class_1_AC9A71375E037558_Class_1_E5246FD6331491BF_TypeDefinitionIndex = 86870;

class Class_1_AC9A71375E037558_Class_1_E5246FD6331491BF : public ::System::Object
{
public:
	::System::Func_1<::System::Collections::Generic::IEnumerable_1<::System::Func_1<::Class_0_16E4307DCC419505_211*>*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_E5246FD6331491BF__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_211* Method_1_085A8E87FDE2E114()
	{
		return ((::Class_0_16E4307DCC419505_211*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_E5246FD6331491BF_METHOD_1_085A8E87FDE2E114_OFFSET))(this);
	}
};
