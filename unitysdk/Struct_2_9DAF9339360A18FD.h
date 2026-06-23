#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_9DAF9339360A18FD_METHOD_2_9F84D1FF74319152_OFFSET UNITYSDK_OFFSET(0x7B01D0)
#define STRUCT_2_9DAF9339360A18FD__CCTOR_OFFSET UNITYSDK_OFFSET(0x134060A0)
#define STRUCT_2_9DAF9339360A18FD__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0250)

inline static constexpr unsigned int Struct_2_9DAF9339360A18FD_TypeDefinitionIndex = 59623;

struct alignas(8) Struct_2_9DAF9339360A18FD
{
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9DAF9339360A18FD_TypeDefinitionIndex)->GetStaticField(0x11380);
	}
	::MoleMole::EntityHandle Field_2_1; // 0x10
	::Foundation::Unreal::FTransform Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x40
	::System::Int32 Field_2_4; // 0x44

	::System::Void _ctor(::MoleMole::EntityHandle& a1, ::Foundation::Unreal::FTransform& a2, ::System::Single& a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle&, ::Foundation::Unreal::FTransform&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_9DAF9339360A18FD__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9DAF9339360A18FD__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_9F84D1FF74319152()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9DAF9339360A18FD_METHOD_2_9F84D1FF74319152_OFFSET))(this);
	}
};
