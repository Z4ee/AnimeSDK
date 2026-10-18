#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_F7BD09242ADBD914_METHOD_1_2D8DCCB79836E3CC_OFFSET UNITYSDK_OFFSET(0x15E9EFE0)
#define CLASS_1_F7BD09242ADBD914_METHOD_1_41E39C0C1C27A76F_OFFSET UNITYSDK_OFFSET(0x15E9EE80)
#define CLASS_1_F7BD09242ADBD914_METHOD_1_A0C2CADF3D537ED9_OFFSET UNITYSDK_OFFSET(0x15E9ECE0)
#define CLASS_1_F7BD09242ADBD914_METHOD_1_F26249928D69EDB5_OFFSET UNITYSDK_OFFSET(0x15E9EF20)
#define CLASS_1_F7BD09242ADBD914__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9F180)

inline static constexpr unsigned int Class_1_F7BD09242ADBD914_TypeDefinitionIndex = 68260;

class Class_1_F7BD09242ADBD914 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7BD09242ADBD914__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A0C2CADF3D537ED9(::System::Int64 a1, ::System::Double a2, ::System::Action* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Double, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F7BD09242ADBD914_METHOD_1_A0C2CADF3D537ED9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_41E39C0C1C27A76F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F7BD09242ADBD914_METHOD_1_41E39C0C1C27A76F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F26249928D69EDB5(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F7BD09242ADBD914_METHOD_1_F26249928D69EDB5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_2D8DCCB79836E3CC(::System::Int64 a1, ::System::Action* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F7BD09242ADBD914_METHOD_1_2D8DCCB79836E3CC_OFFSET))(this, a1, a2);
	}
};
