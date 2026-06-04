#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_417C7B46A4074E8A.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Texture; }

#define CLASS_5_F95F8CACB3D8BD25_METHOD_5_37D2F114FD7E4011_OFFSET UNITYSDK_OFFSET(0x13BE12A0)
#define CLASS_5_F95F8CACB3D8BD25_METHOD_5_4252E84AE0496D23_OFFSET UNITYSDK_OFFSET(0x13BE12C0)
#define CLASS_5_F95F8CACB3D8BD25_METHOD_5_4883A895855DA4FA_OFFSET UNITYSDK_OFFSET(0x13BE12B0)
#define CLASS_5_F95F8CACB3D8BD25_METHOD_5_4E86709449004B68_OFFSET UNITYSDK_OFFSET(0x13BE0FE0)
#define CLASS_5_F95F8CACB3D8BD25_METHOD_5_9360C31866DA05E1_OFFSET UNITYSDK_OFFSET(0x13BE0F10)
#define CLASS_5_F95F8CACB3D8BD25_METHOD_5_9E600C4C9DC20126_1_OFFSET UNITYSDK_OFFSET(0x13BE0E20)
#define CLASS_5_F95F8CACB3D8BD25_METHOD_5_9E600C4C9DC20126_OFFSET UNITYSDK_OFFSET(0x13BE0DB0)
#define CLASS_5_F95F8CACB3D8BD25_METHOD_5_D2DA768232E640DF_OFFSET UNITYSDK_OFFSET(0x13BE0E90)
#define CLASS_5_F95F8CACB3D8BD25__CTOR_OFFSET UNITYSDK_OFFSET(0x13BE1200)

inline static constexpr unsigned int Class_5_F95F8CACB3D8BD25_TypeDefinitionIndex = 46674;

class Class_5_F95F8CACB3D8BD25 : public ::Class_4_417C7B46A4074E8A
{
public:
	static ::UnityEngine::Texture** StaticGet_Field_5_0()
	{
		return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(Class_5_F95F8CACB3D8BD25_TypeDefinitionIndex)->GetStaticField(0x641F0);
	}
	::System::Int32 Field_5_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F95F8CACB3D8BD25__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_9E600C4C9DC20126(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_F95F8CACB3D8BD25_METHOD_5_9E600C4C9DC20126_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture* Method_5_9E600C4C9DC20126_1(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_F95F8CACB3D8BD25_METHOD_5_9E600C4C9DC20126_1_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture* Method_5_D2DA768232E640DF()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F95F8CACB3D8BD25_METHOD_5_D2DA768232E640DF_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_9360C31866DA05E1()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F95F8CACB3D8BD25_METHOD_5_9360C31866DA05E1_OFFSET))(this);
	}

	::System::Void Method_5_4E86709449004B68(::UnityEngine::Cubemap* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_5_F95F8CACB3D8BD25_METHOD_5_4E86709449004B68_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture* Method_5_37D2F114FD7E4011(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_F95F8CACB3D8BD25_METHOD_5_37D2F114FD7E4011_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture* Method_5_4883A895855DA4FA()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F95F8CACB3D8BD25_METHOD_5_4883A895855DA4FA_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_4252E84AE0496D23()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F95F8CACB3D8BD25_METHOD_5_4252E84AE0496D23_OFFSET))(this);
	}
};
