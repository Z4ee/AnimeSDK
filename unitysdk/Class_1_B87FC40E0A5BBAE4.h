#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_606;
class Class_1_5BA1211B460A073E;
class Class_1_AAE19C7012281A1B;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole::MiniGame::TartarusHounds::View { class ImageEffectConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_B87FC40E0A5BBAE4_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11AFB5B0)
#define CLASS_1_B87FC40E0A5BBAE4_METHOD_1_305593C6E9E5EFF6_OFFSET UNITYSDK_OFFSET(0x11AFADF0)
#define CLASS_1_B87FC40E0A5BBAE4_METHOD_1_6936990A45A19C77_OFFSET UNITYSDK_OFFSET(0x11AFB280)
#define CLASS_1_B87FC40E0A5BBAE4_METHOD_1_7642F0F535690077_OFFSET UNITYSDK_OFFSET(0x11AFB520)
#define CLASS_1_B87FC40E0A5BBAE4_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x11AFB4A0)
#define CLASS_1_B87FC40E0A5BBAE4_METHOD_1_F3387696CEC333B2_OFFSET UNITYSDK_OFFSET(0x11AFAF00)
#define CLASS_1_B87FC40E0A5BBAE4_METHOD_1_F6E5115FB17B3B4D_OFFSET UNITYSDK_OFFSET(0x11AFB370)
#define CLASS_1_B87FC40E0A5BBAE4__CTOR_OFFSET UNITYSDK_OFFSET(0x11AFAD70)

inline static constexpr unsigned int Class_1_B87FC40E0A5BBAE4_TypeDefinitionIndex = 75546;

class Class_1_B87FC40E0A5BBAE4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_606*>* Field_1_0; // 0x10
	::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>* Field_1_2; // 0x18
	::System::Action* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87FC40E0A5BBAE4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_305593C6E9E5EFF6(::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig* a1, ::Class_1_5BA1211B460A073E* a2, ::Class_2_A9A857AD270B9CE1* a3, ::UnityEngine::RectTransform* a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::UI::Image* a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*, ::Class_1_5BA1211B460A073E*, ::Class_2_A9A857AD270B9CE1*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + CLASS_1_B87FC40E0A5BBAE4_METHOD_1_305593C6E9E5EFF6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_6936990A45A19C77(::Class_1_AAE19C7012281A1B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AAE19C7012281A1B*))((::PBYTE)hIl2Cpp + CLASS_1_B87FC40E0A5BBAE4_METHOD_1_6936990A45A19C77_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6E5115FB17B3B4D(::Class_1_5BA1211B460A073E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5BA1211B460A073E*))((::PBYTE)hIl2Cpp + CLASS_1_B87FC40E0A5BBAE4_METHOD_1_F6E5115FB17B3B4D_OFFSET))(this, a1);
	}

	::Class_1_AAE19C7012281A1B* Method_1_F3387696CEC333B2(::Class_1_5BA1211B460A073E* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::RectTransform* a4, ::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig* a5, ::UnityEngine::UI::Image* a6)
	{
		return ((::Class_1_AAE19C7012281A1B*(*)(::PVOID, ::Class_1_5BA1211B460A073E*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::RectTransform*, ::MoleMole::MiniGame::TartarusHounds::View::ImageEffectConfig*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + CLASS_1_B87FC40E0A5BBAE4_METHOD_1_F3387696CEC333B2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87FC40E0A5BBAE4_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_7642F0F535690077(::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B87FC40E0A5BBAE4_METHOD_1_7642F0F535690077_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B87FC40E0A5BBAE4_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
