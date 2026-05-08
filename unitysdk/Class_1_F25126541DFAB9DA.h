#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_F25126541DFAB9DA_METHOD_1_2504FC9883B7C3CD_OFFSET UNITYSDK_OFFSET(0x1C3E8090)
#define CLASS_1_F25126541DFAB9DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E8080)

inline static constexpr unsigned int Class_1_F25126541DFAB9DA_TypeDefinitionIndex = 26416;

class Class_1_F25126541DFAB9DA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F25126541DFAB9DA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_2504FC9883B7C3CD(::System::Boolean a1, ::System::String* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F25126541DFAB9DA_METHOD_1_2504FC9883B7C3CD_OFFSET))(a1, a2, a3);
	}
};
