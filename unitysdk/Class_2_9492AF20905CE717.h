#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_9492AF20905CE717_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x18AB1380)
#define CLASS_2_9492AF20905CE717_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x18AB1600)
#define CLASS_2_9492AF20905CE717_METHOD_2_75AA9D5B35B1AE71_OFFSET UNITYSDK_OFFSET(0x18AB1240)
#define CLASS_2_9492AF20905CE717_METHOD_2_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0x18AB1550)
#define CLASS_2_9492AF20905CE717_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x18AB1490)
#define CLASS_2_9492AF20905CE717_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18AB1140)
#define CLASS_2_9492AF20905CE717_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x18AB1060)
#define CLASS_2_9492AF20905CE717_ONRETURN_OFFSET UNITYSDK_OFFSET(0x18AB10B0)
#define CLASS_2_9492AF20905CE717__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB1660)
#define CLASS_2_9492AF20905CE717__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18AB11B0)

inline static constexpr unsigned int Class_2_9492AF20905CE717_TypeDefinitionIndex = 71960;

class Class_2_9492AF20905CE717 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* BHGCAHHJMEF; // 0x0
	::UnityEngine::RectTransform* DDMJJAKCOID; // 0x60
	::System::Single GCGPHAMIHLH; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717__CTOR_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717_ONRETURN_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_75AA9D5B35B1AE71(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717_METHOD_2_75AA9D5B35B1AE71_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8FAD57395F26ACC4_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717_METHOD_2_8FAD57395F26ACC4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717_METHOD_2_9681042564541CD6_OFFSET))(this);
	}
};
