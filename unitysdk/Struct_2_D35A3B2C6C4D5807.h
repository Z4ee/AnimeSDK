#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0269E9CD0547602F.h"
#include "unitysdk/Enum_3_CBE15F282C7D6943.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_D35A3B2C6C4D5807_METHOD_2_ED0E3DD53734BBBE_OFFSET UNITYSDK_OFFSET(0x1793A870)
#define STRUCT_2_D35A3B2C6C4D5807_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x82FB70)
#define STRUCT_2_D35A3B2C6C4D5807__CCTOR_OFFSET UNITYSDK_OFFSET(0x1793A7E0)
#define STRUCT_2_D35A3B2C6C4D5807__CTOR_OFFSET UNITYSDK_OFFSET(0x82FB20)

inline static constexpr unsigned int Struct_2_D35A3B2C6C4D5807_TypeDefinitionIndex = 70572;

struct alignas(8) Struct_2_D35A3B2C6C4D5807
{
	static ::Il2CppArray<::Struct_2_D35A3B2C6C4D5807>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::Struct_2_D35A3B2C6C4D5807>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_D35A3B2C6C4D5807_TypeDefinitionIndex)->GetStaticField(0x47740);
	}
	::Enum_3_CBE15F282C7D6943 Field_2_1; // 0x10
	::System::Boolean Field_2_2; // 0x11
	::System::String* Field_2_3; // 0x18
	::System::String* Field_2_4; // 0x20

	::System::Void _ctor(::Enum_3_CBE15F282C7D6943 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CBE15F282C7D6943, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_D35A3B2C6C4D5807__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D35A3B2C6C4D5807__CCTOR_OFFSET))();
	}

	static ::Struct_2_D35A3B2C6C4D5807 Method_2_ED0E3DD53734BBBE(::Enum_3_0269E9CD0547602F a1)
	{
		return ((::Struct_2_D35A3B2C6C4D5807(*)(::Enum_3_0269E9CD0547602F))((::PBYTE)hIl2Cpp + STRUCT_2_D35A3B2C6C4D5807_METHOD_2_ED0E3DD53734BBBE_OFFSET))(a1);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D35A3B2C6C4D5807_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}
};
