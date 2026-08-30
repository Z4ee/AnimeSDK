#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LGameEntityRef; }
namespace System { class String; }

#define STRUCT_2_F01DF3CDCF3FD7AC_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x3B18D10)
#define STRUCT_2_F01DF3CDCF3FD7AC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B18D00)
#define STRUCT_2_F01DF3CDCF3FD7AC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B18C50)
#define STRUCT_2_F01DF3CDCF3FD7AC__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B18CA0)
#define STRUCT_2_F01DF3CDCF3FD7AC__CTOR_OFFSET UNITYSDK_OFFSET(0x3B18C20)

inline static constexpr unsigned int Struct_2_F01DF3CDCF3FD7AC_TypeDefinitionIndex = 64278;

struct alignas(4) Struct_2_F01DF3CDCF3FD7AC
{
	::System::UInt32 LLDCHLHNADA; // 0x10
	::System::UInt32 GDBJDAOOCOH; // 0x14
	::System::UInt32 ODMPMJCAHPN; // 0x18
	::UnityEngine::Vector3 AIBGEDIGEOO; // 0x1C
	::UnityEngine::Quaternion LOLLEGPLMOO; // 0x28
	::System::Boolean MCAFKKOOGPI; // 0x38

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

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F01DF3CDCF3FD7AC_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
