#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_417C7B46A4074E8A.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Texture; }

#define CLASS_5_D5F25CDB6AC0C7F4_METHOD_5_4E86709449004B68_OFFSET UNITYSDK_OFFSET(0x17FE1F50)
#define CLASS_5_D5F25CDB6AC0C7F4_METHOD_5_9360C31866DA05E1_OFFSET UNITYSDK_OFFSET(0x17FE1E80)
#define CLASS_5_D5F25CDB6AC0C7F4_METHOD_5_9E600C4C9DC20126_1_OFFSET UNITYSDK_OFFSET(0x17FE1D90)
#define CLASS_5_D5F25CDB6AC0C7F4_METHOD_5_9E600C4C9DC20126_OFFSET UNITYSDK_OFFSET(0x17FE1D20)
#define CLASS_5_D5F25CDB6AC0C7F4_METHOD_5_D2DA768232E640DF_OFFSET UNITYSDK_OFFSET(0x17FE1E00)
#define CLASS_5_D5F25CDB6AC0C7F4__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE2170)

inline static constexpr unsigned int Class_5_D5F25CDB6AC0C7F4_TypeDefinitionIndex = 49920;

class Class_5_D5F25CDB6AC0C7F4 : public ::Class_4_417C7B46A4074E8A
{
public:
	static ::UnityEngine::Texture** StaticGet_LPOEMAMIKMC()
	{
		return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(Class_5_D5F25CDB6AC0C7F4_TypeDefinitionIndex)->GetStaticField(0x5E420);
	}
	::System::Int32 OCBAAJJBPIP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_D5F25CDB6AC0C7F4__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_9E600C4C9DC20126(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_D5F25CDB6AC0C7F4_METHOD_5_9E600C4C9DC20126_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture* Method_5_9E600C4C9DC20126_1(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_D5F25CDB6AC0C7F4_METHOD_5_9E600C4C9DC20126_1_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture* Method_5_D2DA768232E640DF()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_D5F25CDB6AC0C7F4_METHOD_5_D2DA768232E640DF_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_9360C31866DA05E1()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_D5F25CDB6AC0C7F4_METHOD_5_9360C31866DA05E1_OFFSET))(this);
	}

	::System::Void Method_5_4E86709449004B68(::UnityEngine::Cubemap* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_5_D5F25CDB6AC0C7F4_METHOD_5_4E86709449004B68_OFFSET))(this, a1, a2);
	}
};
