#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_5B30A91CD8F11E40_METHOD_2_92DB99F6EF684554_OFFSET UNITYSDK_OFFSET(0x14C92110)
#define STRUCT_2_5B30A91CD8F11E40_METHOD_2_B3D1DA0B8F2BE696_OFFSET UNITYSDK_OFFSET(0x14C92080)
#define STRUCT_2_5B30A91CD8F11E40__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C92030)
#define STRUCT_2_5B30A91CD8F11E40__CTOR_OFFSET UNITYSDK_OFFSET(0x3A4A20)

inline static constexpr unsigned int Struct_2_5B30A91CD8F11E40_TypeDefinitionIndex = 45071;

struct alignas(8) Struct_2_5B30A91CD8F11E40
{
	static ::Struct_2_5B30A91CD8F11E40* StaticGet_Field_2_2()
	{
		return (::Struct_2_5B30A91CD8F11E40*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_5B30A91CD8F11E40_TypeDefinitionIndex)->GetStaticField(0x470D0);
	}
	::MoleMole::Config::BaseProperty Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::MoleMole::Config::BaseProperty a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_5B30A91CD8F11E40__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_5B30A91CD8F11E40__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_2_B3D1DA0B8F2BE696(::Struct_2_5B30A91CD8F11E40 a1, ::Struct_2_5B30A91CD8F11E40 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_5B30A91CD8F11E40, ::Struct_2_5B30A91CD8F11E40))((::PBYTE)hIl2Cpp + STRUCT_2_5B30A91CD8F11E40_METHOD_2_B3D1DA0B8F2BE696_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_92DB99F6EF684554(::Struct_2_5B30A91CD8F11E40 a1, ::Struct_2_5B30A91CD8F11E40 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_5B30A91CD8F11E40, ::Struct_2_5B30A91CD8F11E40))((::PBYTE)hIl2Cpp + STRUCT_2_5B30A91CD8F11E40_METHOD_2_92DB99F6EF684554_OFFSET))(a1, a2);
	}
};
