#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define STRUCT_2_82892336BD7BD369_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x775E80)
#define STRUCT_2_82892336BD7BD369_METHOD_2_C20E2BB25B76A888_OFFSET UNITYSDK_OFFSET(0x7760A0)
#define STRUCT_2_82892336BD7BD369_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x775F60)
#define STRUCT_2_82892336BD7BD369_METHOD_2_F624506052E4790C_OFFSET UNITYSDK_OFFSET(0x775FC0)
#define STRUCT_2_82892336BD7BD369__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C567E0)
#define STRUCT_2_82892336BD7BD369__CTOR_OFFSET UNITYSDK_OFFSET(0x775E60)

inline static constexpr unsigned int Struct_2_82892336BD7BD369_TypeDefinitionIndex = 85356;

struct alignas(8) Struct_2_82892336BD7BD369
{
	static ::Struct_2_82892336BD7BD369* StaticGet_Field_2_6()
	{
		return (::Struct_2_82892336BD7BD369*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_82892336BD7BD369_TypeDefinitionIndex)->GetStaticField(0xE5C0);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14
	::UnityEngine::Animations::AnimatorControllerPlayable Field_2_7; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Animations::AnimatorControllerPlayable a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_2_F624506052E4790C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369_METHOD_2_F624506052E4790C_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C20E2BB25B76A888(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_82892336BD7BD369_METHOD_2_C20E2BB25B76A888_OFFSET))(this, a1);
	}
};
