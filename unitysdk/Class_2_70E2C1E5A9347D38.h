#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_70E2C1E5A9347D38_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x975B7C0)
#define CLASS_2_70E2C1E5A9347D38_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x975B460)
#define CLASS_2_70E2C1E5A9347D38_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x975B4C0)
#define CLASS_2_70E2C1E5A9347D38_METHOD_2_657B3A247C551E8D_OFFSET UNITYSDK_OFFSET(0x975B720)
#define CLASS_2_70E2C1E5A9347D38_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x975B5C0)
#define CLASS_2_70E2C1E5A9347D38_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x975B390)
#define CLASS_2_70E2C1E5A9347D38_ONRETURN_OFFSET UNITYSDK_OFFSET(0x975B3E0)
#define CLASS_2_70E2C1E5A9347D38__CTOR_OFFSET UNITYSDK_OFFSET(0x975B830)
#define CLASS_2_70E2C1E5A9347D38__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x975B420)
#define CLASS_2_70E2C1E5A9347D38___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x975B860)

inline static constexpr unsigned int Class_2_70E2C1E5A9347D38_TypeDefinitionIndex = 66160;

class Class_2_70E2C1E5A9347D38 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::UnityEngine::RectTransform* Field_2_1; // 0x68
	::System::Single Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38__CTOR_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_ONRETURN_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_657B3A247C551E8D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_METHOD_2_657B3A247C551E8D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
