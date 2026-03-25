#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1A781135C1474CFC_CLASS_1_AFA15E0369F9D57C_EQUALS_OFFSET UNITYSDK_OFFSET(0x11958E90)
#define CLASS_1_1A781135C1474CFC_CLASS_1_AFA15E0369F9D57C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11958F40)
#define CLASS_1_1A781135C1474CFC_CLASS_1_AFA15E0369F9D57C__CTOR_OFFSET UNITYSDK_OFFSET(0x11959070)
#define CLASS_1_1A781135C1474CFC_CLASS_1_AFA15E0369F9D57C___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x11959080)
#define CLASS_1_1A781135C1474CFC_CLASS_1_AFA15E0369F9D57C___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11959090)

inline static constexpr unsigned int Class_1_1A781135C1474CFC_Class_1_AFA15E0369F9D57C_TypeDefinitionIndex = 59795;

class Class_1_1A781135C1474CFC_Class_1_AFA15E0369F9D57C : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A781135C1474CFC_CLASS_1_AFA15E0369F9D57C__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A781135C1474CFC_CLASS_1_AFA15E0369F9D57C_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A781135C1474CFC_CLASS_1_AFA15E0369F9D57C_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A781135C1474CFC_CLASS_1_AFA15E0369F9D57C___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A781135C1474CFC_CLASS_1_AFA15E0369F9D57C___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
