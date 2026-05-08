#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define STRUCT_2_8B67601907B8CB80_METHOD_2_1524BBDF654AD3DF_OFFSET UNITYSDK_OFFSET(0x67CF60)
#define STRUCT_2_8B67601907B8CB80_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x67CD30)
#define STRUCT_2_8B67601907B8CB80_METHOD_2_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x67CE80)
#define STRUCT_2_8B67601907B8CB80_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x67CE20)
#define STRUCT_2_8B67601907B8CB80__CCTOR_OFFSET UNITYSDK_OFFSET(0xF1E6080)
#define STRUCT_2_8B67601907B8CB80__CTOR_OFFSET UNITYSDK_OFFSET(0x67CD00)

inline static constexpr unsigned int Struct_2_8B67601907B8CB80_TypeDefinitionIndex = 80732;

struct alignas(8) Struct_2_8B67601907B8CB80
{
	static ::Struct_2_8B67601907B8CB80* StaticGet_Field_2_3()
	{
		return (::Struct_2_8B67601907B8CB80*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_8B67601907B8CB80_TypeDefinitionIndex)->GetStaticField(0x10260);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::UnityEngine::Animations::AnimatorControllerPlayable Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::UnityEngine::Animations::AnimatorControllerPlayable a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80__CCTOR_OFFSET))();
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_2_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80_METHOD_2_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Single Method_2_1524BBDF654AD3DF(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_8B67601907B8CB80_METHOD_2_1524BBDF654AD3DF_OFFSET))(this, a1);
	}
};
