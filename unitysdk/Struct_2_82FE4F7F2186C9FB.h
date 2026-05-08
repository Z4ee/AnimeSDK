#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3DFF974943A619B7.h"
#include "unitysdk/Enum_3_3DFF974943A619B7_1.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_82FE4F7F2186C9FB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1568E1A0)

inline static constexpr unsigned int Struct_2_82FE4F7F2186C9FB_TypeDefinitionIndex = 82948;

struct alignas(8) Struct_2_82FE4F7F2186C9FB
{
	static ::System::String** StaticGet_Field_2_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_82FE4F7F2186C9FB_TypeDefinitionIndex)->GetStaticField(0x342C0);
	}
	::System::String* Field_2_0; // 0x10
	::Enum_3_3DFF974943A619B7 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::Enum_3_3DFF974943A619B7_1 Field_2_3; // 0x20
	::System::Int32 Field_2_4; // 0x24
	::MoleMole::Config::AidAttackType Field_2_5; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_82FE4F7F2186C9FB__CCTOR_OFFSET))();
	}
};
