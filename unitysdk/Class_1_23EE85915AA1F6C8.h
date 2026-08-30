#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D19B260269D43396;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_23EE85915AA1F6C8__CTOR_OFFSET UNITYSDK_OFFSET(0x15907070)

inline static constexpr unsigned int Class_1_23EE85915AA1F6C8_TypeDefinitionIndex = 71234;

class Class_1_23EE85915AA1F6C8 : public ::System::Object
{
public:
	::Class_1_D19B260269D43396* EFPGOHNPKBD; // 0x10
	::System::Action_1<::System::Object*>* EGBFHCOPIBH; // 0x18
	::System::String* OLOIFNNLKJP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23EE85915AA1F6C8__CTOR_OFFSET))(this);
	}
};
