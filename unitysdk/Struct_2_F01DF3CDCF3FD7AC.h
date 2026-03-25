#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LGameEntityRef; }
namespace System { class String; }

#define STRUCT_2_F01DF3CDCF3FD7AC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x74A40)
#define STRUCT_2_F01DF3CDCF3FD7AC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x74A30)
#define STRUCT_2_F01DF3CDCF3FD7AC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x74980)
#define STRUCT_2_F01DF3CDCF3FD7AC__CTOR_2_OFFSET UNITYSDK_OFFSET(0x749D0)
#define STRUCT_2_F01DF3CDCF3FD7AC__CTOR_OFFSET UNITYSDK_OFFSET(0x74950)
#define STRUCT_2_F01DF3CDCF3FD7AC___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x74A50)

inline static constexpr unsigned int Struct_2_F01DF3CDCF3FD7AC_TypeDefinitionIndex = 52132;

struct alignas(4) Struct_2_F01DF3CDCF3FD7AC
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_3; // 0x1C
	::UnityEngine::Quaternion Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x38

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F01DF3CDCF3FD7AC__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::RPG::GameCore::LGameEntityRef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LGameEntityRef*))((::PBYTE)hIl2Cpp + STRUCT_2_F01DF3CDCF3FD7AC__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_F01DF3CDCF3FD7AC__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F01DF3CDCF3FD7AC_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F01DF3CDCF3FD7AC_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F01DF3CDCF3FD7AC___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
