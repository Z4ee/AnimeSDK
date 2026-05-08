#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_C376DB68B1C74261;
class Class_1_F5B35B1B6669CF16;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigPlayChessBGQuadFade; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_247D01E9659250AE_METHOD_5_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x1358B910)
#define CLASS_5_247D01E9659250AE_METHOD_5_19ED8136218C5C0B_OFFSET UNITYSDK_OFFSET(0x1358BDF0)
#define CLASS_5_247D01E9659250AE_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1358BF70)
#define CLASS_5_247D01E9659250AE_METHOD_5_B430F3DD5F896C88_OFFSET UNITYSDK_OFFSET(0x1358BEA0)
#define CLASS_5_247D01E9659250AE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1358C010)
#define CLASS_5_247D01E9659250AE_METHOD_5_DFBA3759E53DCE38_OFFSET UNITYSDK_OFFSET(0x1358B8A0)
#define CLASS_5_247D01E9659250AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1358BF10)

inline static constexpr unsigned int Class_5_247D01E9659250AE_TypeDefinitionIndex = 58359;

class Class_5_247D01E9659250AE : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigPlayChessBGQuadFade*>
{
public:
	::MoleMole::Config::ConfigPlayChessBGQuadFade* Field_5_0; // 0x40
	::Class_1_F5B35B1B6669CF16* Field_5_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_DFBA3759E53DCE38(::MoleMole::Config::ConfigPlayChessBGQuadFade* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_C376DB68B1C74261* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayChessBGQuadFade*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_DFBA3759E53DCE38_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_5_B430F3DD5F896C88(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_B430F3DD5F896C88_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_5_19ED8136218C5C0B(::System::Boolean a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_19ED8136218C5C0B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_247D01E9659250AE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
