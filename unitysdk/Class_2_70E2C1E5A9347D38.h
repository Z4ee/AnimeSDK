#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_70E2C1E5A9347D38_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x19991DF0)
#define CLASS_2_70E2C1E5A9347D38_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x19991980)
#define CLASS_2_70E2C1E5A9347D38_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x19991B50)
#define CLASS_2_70E2C1E5A9347D38_METHOD_2_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x199919E0)
#define CLASS_2_70E2C1E5A9347D38_METHOD_2_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x19991CD0)
#define CLASS_2_70E2C1E5A9347D38_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x199918B0)
#define CLASS_2_70E2C1E5A9347D38_ONRETURN_OFFSET UNITYSDK_OFFSET(0x19991900)
#define CLASS_2_70E2C1E5A9347D38__CTOR_OFFSET UNITYSDK_OFFSET(0x19991E60)
#define CLASS_2_70E2C1E5A9347D38__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x19991940)

inline static constexpr unsigned int Class_2_70E2C1E5A9347D38_TypeDefinitionIndex = 71739;

class Class_2_70E2C1E5A9347D38 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Image* GGADAPDEIAD; // 0x60
	::UnityEngine::RectTransform* JAKMENOCECF; // 0x68
	::System::Single KOLOABGLOFA; // 0x70

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

	::System::Void Method_2_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_METHOD_2_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_METHOD_2_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70E2C1E5A9347D38_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
