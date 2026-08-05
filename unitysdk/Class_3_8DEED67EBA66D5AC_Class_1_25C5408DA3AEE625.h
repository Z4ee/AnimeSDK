#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class AimController; }
namespace System { class String; }

#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_25C5408DA3AEE625_METHOD_1_FCFD8553FA653D02_OFFSET UNITYSDK_OFFSET(0x18E9AAC0)
#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_25C5408DA3AEE625__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9AAB0)

inline static constexpr unsigned int Class_3_8DEED67EBA66D5AC_Class_1_25C5408DA3AEE625_TypeDefinitionIndex = 60314;

class Class_3_8DEED67EBA66D5AC_Class_1_25C5408DA3AEE625 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_25C5408DA3AEE625__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_FCFD8553FA653D02(::RootMotion::FinalIK::AimController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::AimController*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_25C5408DA3AEE625_METHOD_1_FCFD8553FA653D02_OFFSET))(this, a1);
	}
};
