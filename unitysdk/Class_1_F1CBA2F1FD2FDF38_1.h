#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F1CBA2F1FD2FDF38_1_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0x11AE7F80)
#define CLASS_1_F1CBA2F1FD2FDF38_1_METHOD_1_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0x11AE7F20)
#define CLASS_1_F1CBA2F1FD2FDF38_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE7FD0)

inline static constexpr unsigned int Class_1_F1CBA2F1FD2FDF38_1_TypeDefinitionIndex = 50059;

class Class_1_F1CBA2F1FD2FDF38_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Double Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1CBA2F1FD2FDF38_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F1CBA2F1FD2FDF38_1_METHOD_1_EA672F77F1086A27_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1CBA2F1FD2FDF38_1_METHOD_1_D66F211912D83957_OFFSET))(this);
	}
};
