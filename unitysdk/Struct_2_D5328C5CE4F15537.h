#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13244C8B2F412690.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_D5328C5CE4F15537_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x87D6F0)
#define STRUCT_2_D5328C5CE4F15537_METHOD_2_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define STRUCT_2_D5328C5CE4F15537_METHOD_2_64B3F03EE727A9B1_1_OFFSET UNITYSDK_OFFSET(0x181F7590)
#define STRUCT_2_D5328C5CE4F15537_METHOD_2_64B3F03EE727A9B1_OFFSET UNITYSDK_OFFSET(0x181F74C0)
#define STRUCT_2_D5328C5CE4F15537_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_D5328C5CE4F15537_METHOD_2_C17BB88FB6CDB833_OFFSET UNITYSDK_OFFSET(0x87D680)
#define STRUCT_2_D5328C5CE4F15537_TOSTRING_OFFSET UNITYSDK_OFFSET(0x87D670)
#define STRUCT_2_D5328C5CE4F15537__CTOR_OFFSET UNITYSDK_OFFSET(0x87D630)

inline static constexpr unsigned int Struct_2_D5328C5CE4F15537_TypeDefinitionIndex = 87077;

struct alignas(8) Struct_2_D5328C5CE4F15537
{
	::Enum_3_13244C8B2F412690 Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0x14
	::System::Nullable_1<::UnityEngine::Vector2> Field_2_0; // 0x18
	::System::Object* Field_2_7; // 0x28

	::System::Void _ctor(::Enum_3_13244C8B2F412690 a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_13244C8B2F412690, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + STRUCT_2_D5328C5CE4F15537__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D5328C5CE4F15537_TOSTRING_OFFSET))(this);
	}

	static ::Struct_2_D5328C5CE4F15537 Method_2_64B3F03EE727A9B1(::Enum_3_13244C8B2F412690 a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
	{
		return ((::Struct_2_D5328C5CE4F15537(*)(::Enum_3_13244C8B2F412690, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + STRUCT_2_D5328C5CE4F15537_METHOD_2_64B3F03EE727A9B1_OFFSET))(a1, a2);
	}

	::System::Void Method_2_3DACC45AC8150727(::Enum_3_13244C8B2F412690 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_13244C8B2F412690))((::PBYTE)hIl2Cpp + STRUCT_2_D5328C5CE4F15537_METHOD_2_3DACC45AC8150727_OFFSET))(this, a1);
	}

	static ::Struct_2_D5328C5CE4F15537 Method_2_64B3F03EE727A9B1_1(::Enum_3_13244C8B2F412690 a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
	{
		return ((::Struct_2_D5328C5CE4F15537(*)(::Enum_3_13244C8B2F412690, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + STRUCT_2_D5328C5CE4F15537_METHOD_2_64B3F03EE727A9B1_1_OFFSET))(a1, a2);
	}

	::Struct_2_D5328C5CE4F15537 Method_2_C17BB88FB6CDB833(::System::Object* a1)
	{
		return ((::Struct_2_D5328C5CE4F15537(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_D5328C5CE4F15537_METHOD_2_C17BB88FB6CDB833_OFFSET))(this, a1);
	}

	::Enum_3_13244C8B2F412690 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_13244C8B2F412690(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D5328C5CE4F15537_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D5328C5CE4F15537_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
