#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_759B11C4DA11AF47__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C29220)
#define STRUCT_2_759B11C4DA11AF47__CTOR_OFFSET UNITYSDK_OFFSET(0x7574F0)

inline static constexpr unsigned int Struct_2_759B11C4DA11AF47_TypeDefinitionIndex = 45855;

struct alignas(4) Struct_2_759B11C4DA11AF47
{
	static ::Struct_2_759B11C4DA11AF47* StaticGet_Field_2_0()
	{
		return (::Struct_2_759B11C4DA11AF47*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_759B11C4DA11AF47_TypeDefinitionIndex)->GetStaticField(0x111D0);
	}
	::System::UInt32 Field_2_1; // 0x10
	::System::Boolean Field_2_2; // 0x14

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_759B11C4DA11AF47__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_759B11C4DA11AF47__CCTOR_OFFSET))();
	}
};
