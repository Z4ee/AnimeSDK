#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_B9E22E218D2BB16E_METHOD_1_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x13BD7EE0)
#define CLASS_1_B9E22E218D2BB16E_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x13BD7E90)
#define CLASS_1_B9E22E218D2BB16E_METHOD_1_286570692E8A7912_OFFSET UNITYSDK_OFFSET(0x13BD80E0)
#define CLASS_1_B9E22E218D2BB16E_METHOD_1_2A97A8C2900C3101_1_OFFSET UNITYSDK_OFFSET(0x13BD8190)
#define CLASS_1_B9E22E218D2BB16E_METHOD_1_2A97A8C2900C3101_OFFSET UNITYSDK_OFFSET(0x13BD8060)
#define CLASS_1_B9E22E218D2BB16E_METHOD_1_6597F9D2D4A0542F_OFFSET UNITYSDK_OFFSET(0x13BD7E10)
#define CLASS_1_B9E22E218D2BB16E__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD7E00)

inline static constexpr unsigned int Class_1_B9E22E218D2BB16E_TypeDefinitionIndex = 42254;

class Class_1_B9E22E218D2BB16E : public ::System::Object
{
public:
	::Struct_2_49ABC235CB23B56F Field_1_2; // 0x10
	::System::Action_1<::System::Int32>* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9E22E218D2BB16E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6597F9D2D4A0542F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9E22E218D2BB16E_METHOD_1_6597F9D2D4A0542F_OFFSET))(this);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9E22E218D2BB16E_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B9E22E218D2BB16E_METHOD_1_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A97A8C2900C3101(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B9E22E218D2BB16E_METHOD_1_2A97A8C2900C3101_OFFSET))(this, a1);
	}

	::System::Void Method_1_286570692E8A7912()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9E22E218D2BB16E_METHOD_1_286570692E8A7912_OFFSET))(this);
	}

	::System::Void Method_1_2A97A8C2900C3101_1(::System::Action_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B9E22E218D2BB16E_METHOD_1_2A97A8C2900C3101_1_OFFSET))(this, a1);
	}
};
