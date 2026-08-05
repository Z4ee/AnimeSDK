#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_89120A467F7A010D;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F964D28D070F4284__CTOR_OFFSET UNITYSDK_OFFSET(0x18E97910)

inline static constexpr unsigned int Class_1_F964D28D070F4284_TypeDefinitionIndex = 50927;

class Class_1_F964D28D070F4284 : public ::System::Object
{
public:
	::System::Func_2<::System::Boolean, ::System::Boolean>* Field_1_7; // 0x10
	::Class_1_89120A467F7A010D* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F964D28D070F4284__CTOR_OFFSET))(this);
	}
};
