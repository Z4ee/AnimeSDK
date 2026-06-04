#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F98A96E373E13AED_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0xA9FCDB0)
#define CLASS_1_F98A96E373E13AED_METHOD_1_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0xA9FCD40)
#define CLASS_1_F98A96E373E13AED__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FCE00)

inline static constexpr unsigned int Class_1_F98A96E373E13AED_TypeDefinitionIndex = 50725;

class Class_1_F98A96E373E13AED : public ::System::Object
{
public:
	::System::Double Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F98A96E373E13AED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_F98A96E373E13AED_METHOD_1_EA672F77F1086A27_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F98A96E373E13AED_METHOD_1_D66F211912D83957_OFFSET))(this);
	}
};
