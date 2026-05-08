#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimatorControllerPlayable.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_52EB650C9EAB482C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x73FB40)
#define STRUCT_2_52EB650C9EAB482C_METHOD_2_AAC9BD958EF70988_OFFSET UNITYSDK_OFFSET(0x73FD80)
#define STRUCT_2_52EB650C9EAB482C_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x73FD20)
#define STRUCT_2_52EB650C9EAB482C_METHOD_2_EF097C23DCA40FAE_OFFSET UNITYSDK_OFFSET(0x73FF70)
#define STRUCT_2_52EB650C9EAB482C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11EAB130)
#define STRUCT_2_52EB650C9EAB482C__CTOR_OFFSET UNITYSDK_OFFSET(0x73FAF0)

inline static constexpr unsigned int Struct_2_52EB650C9EAB482C_TypeDefinitionIndex = 69584;

struct alignas(8) Struct_2_52EB650C9EAB482C
{
	static ::Struct_2_52EB650C9EAB482C* StaticGet_Field_2_5()
	{
		return (::Struct_2_52EB650C9EAB482C*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_52EB650C9EAB482C_TypeDefinitionIndex)->GetStaticField(0x119C0);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_3; // 0x1C
	::UnityEngine::Animations::AnimatorControllerPlayable Field_2_4; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Animations::AnimatorControllerPlayable a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Animations::AnimatorControllerPlayable))((::PBYTE)hIl2Cpp + STRUCT_2_52EB650C9EAB482C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_52EB650C9EAB482C__CCTOR_OFFSET))();
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_52EB650C9EAB482C_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_52EB650C9EAB482C_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_2_AAC9BD958EF70988(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_52EB650C9EAB482C_METHOD_2_AAC9BD958EF70988_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_EF097C23DCA40FAE(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_52EB650C9EAB482C_METHOD_2_EF097C23DCA40FAE_OFFSET))(this, a1);
	}
};
