#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_62045C6D411AE8C4.h"
#include "unitysdk/Struct_2_DFC18A96C36DAE79.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_DB1A3536F0DE9E3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A33700)
#define STRUCT_2_DB1A3536F0DE9E3B__CTOR_OFFSET UNITYSDK_OFFSET(0x31EB80)

inline static constexpr unsigned int Struct_2_DB1A3536F0DE9E3B_TypeDefinitionIndex = 44129;

struct alignas(8) Struct_2_DB1A3536F0DE9E3B
{
	static ::Struct_2_DB1A3536F0DE9E3B* StaticGet_Field_2_1()
	{
		return (::Struct_2_DB1A3536F0DE9E3B*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_DB1A3536F0DE9E3B_TypeDefinitionIndex)->GetStaticField(0xA050);
	}
	::Struct_2_62045C6D411AE8C4<::Struct_2_DFC18A96C36DAE79> Field_2_0; // 0x10

	::System::Void _ctor(::Struct_2_62045C6D411AE8C4<::Struct_2_DFC18A96C36DAE79> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_62045C6D411AE8C4<::Struct_2_DFC18A96C36DAE79>))((::PBYTE)hIl2Cpp + STRUCT_2_DB1A3536F0DE9E3B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_DB1A3536F0DE9E3B__CCTOR_OFFSET))();
	}
};
