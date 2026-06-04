#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_9492AF20905CE717_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x13743750)
#define CLASS_2_9492AF20905CE717_METHOD_2_75AA9D5B35B1AE71_OFFSET UNITYSDK_OFFSET(0x137433D0)
#define CLASS_2_9492AF20905CE717_METHOD_2_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0x137436A0)
#define CLASS_2_9492AF20905CE717_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x137435E0)
#define CLASS_2_9492AF20905CE717_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x137432D0)
#define CLASS_2_9492AF20905CE717_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x13743510)
#define CLASS_2_9492AF20905CE717_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x137431F0)
#define CLASS_2_9492AF20905CE717_ONRETURN_OFFSET UNITYSDK_OFFSET(0x13743240)
#define CLASS_2_9492AF20905CE717__CTOR_OFFSET UNITYSDK_OFFSET(0x137437B0)
#define CLASS_2_9492AF20905CE717__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13743340)
#define CLASS_2_9492AF20905CE717___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x137437E0)

inline static constexpr unsigned int Class_2_9492AF20905CE717_TypeDefinitionIndex = 67295;

class Class_2_9492AF20905CE717 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::RectTransform* Field_2_1; // 0x60
	::System::Single Field_2_2; // 0x68

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

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9492AF20905CE717___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
