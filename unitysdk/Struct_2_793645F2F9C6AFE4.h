#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"

#define STRUCT_2_793645F2F9C6AFE4_METHOD_2_757226EFFAE61C87_OFFSET UNITYSDK_OFFSET(0x740FB0)
#define STRUCT_2_793645F2F9C6AFE4_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x740DF0)
#define STRUCT_2_793645F2F9C6AFE4_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x67CE20)
#define STRUCT_2_793645F2F9C6AFE4_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x740ED0)
#define STRUCT_2_793645F2F9C6AFE4__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F38E30)
#define STRUCT_2_793645F2F9C6AFE4__CTOR_OFFSET UNITYSDK_OFFSET(0x740DD0)

inline static constexpr unsigned int Struct_2_793645F2F9C6AFE4_TypeDefinitionIndex = 57341;

struct alignas(8) Struct_2_793645F2F9C6AFE4
{
	static ::Struct_2_793645F2F9C6AFE4* StaticGet_Field_2_3()
	{
		return (::Struct_2_793645F2F9C6AFE4*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_793645F2F9C6AFE4_TypeDefinitionIndex)->GetStaticField(0xF4B0);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14
	::UnityEngine::Animations::AnimatorControllerPlayable Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::UnityEngine::Animations::AnimatorControllerPlayable a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_757226EFFAE61C87(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_793645F2F9C6AFE4_METHOD_2_757226EFFAE61C87_OFFSET))(this, a1);
	}
};
