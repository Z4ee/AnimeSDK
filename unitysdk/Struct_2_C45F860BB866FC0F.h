#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_DC42C676F790CC3B;
class Class_3_DFD5D1FDB9D2A4AC;

#define STRUCT_2_C45F860BB866FC0F_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x7C4520)
#define STRUCT_2_C45F860BB866FC0F_METHOD_2_413472096512A213_OFFSET UNITYSDK_OFFSET(0x2ADAB0)
#define STRUCT_2_C45F860BB866FC0F_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x3EA130)
#define STRUCT_2_C45F860BB866FC0F_METHOD_2_65585810E2458BA4_OFFSET UNITYSDK_OFFSET(0x2AD810)
#define STRUCT_2_C45F860BB866FC0F_METHOD_2_BF9F2260F82C8262_OFFSET UNITYSDK_OFFSET(0x7C4510)
#define STRUCT_2_C45F860BB866FC0F_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x66AD60)
#define STRUCT_2_C45F860BB866FC0F__CTOR_OFFSET UNITYSDK_OFFSET(0x7C4500)

inline static constexpr unsigned int Struct_2_C45F860BB866FC0F_TypeDefinitionIndex = 72104;

struct alignas(8) Struct_2_C45F860BB866FC0F
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x20

	::System::Void _ctor(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + STRUCT_2_C45F860BB866FC0F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF9F2260F82C8262(::Class_3_DC42C676F790CC3B* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DC42C676F790CC3B*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + STRUCT_2_C45F860BB866FC0F_METHOD_2_BF9F2260F82C8262_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C45F860BB866FC0F_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C45F860BB866FC0F_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C45F860BB866FC0F_METHOD_2_413472096512A213_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_C45F860BB866FC0F_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_65585810E2458BA4(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + STRUCT_2_C45F860BB866FC0F_METHOD_2_65585810E2458BA4_OFFSET))(this, a1);
	}
};
