#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class AimController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_C410E4CC68654EB4_METHOD_1_A7FDBEE0C53EA747_OFFSET UNITYSDK_OFFSET(0x17C51310)
#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_C410E4CC68654EB4_METHOD_1_D98E43E328ECCE1C_OFFSET UNITYSDK_OFFSET(0x17C515B0)
#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_C410E4CC68654EB4__CTOR_OFFSET UNITYSDK_OFFSET(0x17C51300)

inline static constexpr unsigned int Class_3_8DEED67EBA66D5AC_Class_1_C410E4CC68654EB4_TypeDefinitionIndex = 60312;

class Class_3_8DEED67EBA66D5AC_Class_1_C410E4CC68654EB4 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_C410E4CC68654EB4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A7FDBEE0C53EA747(::RootMotion::FinalIK::AimController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::AimController*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_C410E4CC68654EB4_METHOD_1_A7FDBEE0C53EA747_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D98E43E328ECCE1C(::RootMotion::FinalIK::AimController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::AimController*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_C410E4CC68654EB4_METHOD_1_D98E43E328ECCE1C_OFFSET))(this, a1);
	}
};
