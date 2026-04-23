#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_417C7B46A4074E8A.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Texture; }

#define CLASS_5_2B16A5C96E49218A_METHOD_5_1A83B4B5F36C859C_OFFSET UNITYSDK_OFFSET(0x9987320)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_29757CCEC95F1D79_OFFSET UNITYSDK_OFFSET(0x9987750)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_4883A895855DA4FA_OFFSET UNITYSDK_OFFSET(0x9987760)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_4E86709449004B68_OFFSET UNITYSDK_OFFSET(0x9987490)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_9360C31866DA05E1_OFFSET UNITYSDK_OFFSET(0x99873C0)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_9A2AF3C770D145DA_OFFSET UNITYSDK_OFFSET(0x9987770)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_9E600C4C9DC20126_1_OFFSET UNITYSDK_OFFSET(0x99872B0)
#define CLASS_5_2B16A5C96E49218A_METHOD_5_9E600C4C9DC20126_OFFSET UNITYSDK_OFFSET(0x9987240)
#define CLASS_5_2B16A5C96E49218A__CTOR_OFFSET UNITYSDK_OFFSET(0x99876B0)

inline static constexpr unsigned int Class_5_2B16A5C96E49218A_TypeDefinitionIndex = 46091;

class Class_5_2B16A5C96E49218A : public ::Class_4_417C7B46A4074E8A
{
public:
	static ::UnityEngine::Texture** StaticGet_Field_5_0()
	{
		return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(Class_5_2B16A5C96E49218A_TypeDefinitionIndex)->GetStaticField(0x1B690);
	}
	::System::Int32 Field_5_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_9E600C4C9DC20126(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_9E600C4C9DC20126_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture* Method_5_9E600C4C9DC20126_1(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_9E600C4C9DC20126_1_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture* Method_5_1A83B4B5F36C859C()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_1A83B4B5F36C859C_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_9360C31866DA05E1()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_9360C31866DA05E1_OFFSET))(this);
	}

	::System::Void Method_5_4E86709449004B68(::UnityEngine::Cubemap* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_4E86709449004B68_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture* Method_5_29757CCEC95F1D79(::UnityEngine::Texture* P0, ::UnityEngine::Texture* P1, ::System::Single P2)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_29757CCEC95F1D79_OFFSET))(this, P0, P1, P2);
	}

	::UnityEngine::Texture* Method_5_4883A895855DA4FA()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_4883A895855DA4FA_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_5_9A2AF3C770D145DA()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2B16A5C96E49218A_METHOD_5_9A2AF3C770D145DA_OFFSET))(this);
	}
};
