#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CLASS_1_10A04DCAE0E9225A_CLASS_1_759B02E27482D0BC_METHOD_1_73B4E9020388BC35_OFFSET UNITYSDK_OFFSET(0x167FFA20)
#define CLASS_1_10A04DCAE0E9225A_CLASS_1_759B02E27482D0BC__CTOR_OFFSET UNITYSDK_OFFSET(0x167FFA10)

inline static constexpr unsigned int Class_1_10A04DCAE0E9225A_Class_1_759B02E27482D0BC_TypeDefinitionIndex = 77428;

class Class_1_10A04DCAE0E9225A_Class_1_759B02E27482D0BC : public ::System::Object
{
public:
	::System::Type* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10A04DCAE0E9225A_CLASS_1_759B02E27482D0BC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_73B4E9020388BC35(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_10A04DCAE0E9225A_CLASS_1_759B02E27482D0BC_METHOD_1_73B4E9020388BC35_OFFSET))(this, a1);
	}
};
