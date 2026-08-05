#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_413212C3F231D1B9.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9D9172C07F82DDAE_CLASS_1_FD2FB73FA2FF6528__CTOR_OFFSET UNITYSDK_OFFSET(0x14EB2120)

inline static constexpr unsigned int Class_2_9D9172C07F82DDAE_Class_1_FD2FB73FA2FF6528_TypeDefinitionIndex = 49360;

class Class_2_9D9172C07F82DDAE_Class_1_FD2FB73FA2FF6528 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_0; // 0x10
	::Enum_3_413212C3F231D1B9 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_FD2FB73FA2FF6528__CTOR_OFFSET))(this);
	}
};
