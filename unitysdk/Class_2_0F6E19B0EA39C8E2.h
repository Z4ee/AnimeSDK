#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_876922B6C2DFE338.h"
#include "unitysdk/Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_53842913455A8556;
namespace System { class String; }

#define CLASS_2_0F6E19B0EA39C8E2_METHOD_2_940918FEDA1F3064_OFFSET UNITYSDK_OFFSET(0x122318C0)
#define CLASS_2_0F6E19B0EA39C8E2_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x12231980)
#define CLASS_2_0F6E19B0EA39C8E2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12231860)
#define CLASS_2_0F6E19B0EA39C8E2__CTOR_OFFSET UNITYSDK_OFFSET(0x12231850)

inline static constexpr unsigned int Class_2_0F6E19B0EA39C8E2_TypeDefinitionIndex = 43437;

class Class_2_0F6E19B0EA39C8E2 : public ::Class_1_876922B6C2DFE338
{
public:
	::System::Void _ctor(::System::Int32 a1, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0F6E19B0EA39C8E2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::String* a1, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83 a2, ::MoleMole::EntityHandle a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_E63367724D8B0533_Enum_3_3EA7493A9A9EFC83, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_0F6E19B0EA39C8E2__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_940918FEDA1F3064(::Class_1_53842913455A8556* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + CLASS_2_0F6E19B0EA39C8E2_METHOD_2_940918FEDA1F3064_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_53842913455A8556* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53842913455A8556*))((::PBYTE)hIl2Cpp + CLASS_2_0F6E19B0EA39C8E2_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
