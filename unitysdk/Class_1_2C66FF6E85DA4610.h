#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/System/Object.h"

class Class_1_A8F358278D5B9235;
namespace RPG::UINavigation { class UINavigation; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CLASS_1_2C66FF6E85DA4610_METHOD_1_17A60C5671B90277_OFFSET UNITYSDK_OFFSET(0x8A6A580)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_2E6631776A7A76BC_OFFSET UNITYSDK_OFFSET(0x8A6A7B0)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_5D8A1EAE3D5132D5_OFFSET UNITYSDK_OFFSET(0x8A6A180)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_74B683DF3B5A0AE6_OFFSET UNITYSDK_OFFSET(0x8A6AD00)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_793E8C3168918B76_OFFSET UNITYSDK_OFFSET(0x8A6AB20)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_A1D57D1322B2A96A_OFFSET UNITYSDK_OFFSET(0x8A6A340)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_B92276BAA43CD9E4_OFFSET UNITYSDK_OFFSET(0x8A6A170)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_BA2EB1BC1B950B00_OFFSET UNITYSDK_OFFSET(0x8A6AEE0)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x8A6A070)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_CBFC81825D7F21BA_OFFSET UNITYSDK_OFFSET(0x8A6A8F0)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0x8A6A4E0)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_E607519FCB80C849_OFFSET UNITYSDK_OFFSET(0x8A6AD70)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_EB0CF1EC81C5DE9C_OFFSET UNITYSDK_OFFSET(0x8A6A5F0)
#define CLASS_1_2C66FF6E85DA4610_METHOD_1_F5A738034151F52F_OFFSET UNITYSDK_OFFSET(0x8A6AFB0)
#define CLASS_1_2C66FF6E85DA4610__CTOR_OFFSET UNITYSDK_OFFSET(0x8A6A120)

inline static constexpr unsigned int Class_1_2C66FF6E85DA4610_TypeDefinitionIndex = 41833;

class Class_1_2C66FF6E85DA4610 : public ::System::Object
{
public:
	static ::Class_1_2C66FF6E85DA4610** StaticGet_Field_1_0()
	{
		return (::Class_1_2C66FF6E85DA4610**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C66FF6E85DA4610_TypeDefinitionIndex)->GetStaticField(0x35F30);
	}
	::Class_1_A8F358278D5B9235* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610__CTOR_OFFSET))(this);
	}

	static ::Class_1_2C66FF6E85DA4610* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_2C66FF6E85DA4610*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::RPG::UINavigation::UINavigationZone* Method_1_B92276BAA43CD9E4()
	{
		return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_B92276BAA43CD9E4_OFFSET))(this);
	}

	::System::Void Method_1_A1D57D1322B2A96A(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::AxisEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_A1D57D1322B2A96A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2E6631776A7A76BC(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_2E6631776A7A76BC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CBFC81825D7F21BA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_CBFC81825D7F21BA_OFFSET))(this);
	}

	::System::Void Method_1_793E8C3168918B76(::RPG::UINavigation::UINavigation* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_793E8C3168918B76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E607519FCB80C849(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_E607519FCB80C849_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BA2EB1BC1B950B00(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_BA2EB1BC1B950B00_OFFSET))(this, a1);
	}

	::RPG::UINavigation::UINavigation* Method_1_74B683DF3B5A0AE6(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_74B683DF3B5A0AE6_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5A738034151F52F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_F5A738034151F52F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EB0CF1EC81C5DE9C(::RPG::UINavigation::UINavigation* a1, ::Class_1_A8F358278D5B9235* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_EB0CF1EC81C5DE9C_OFFSET))(this, a1, a2);
	}

	::Class_1_A8F358278D5B9235* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_A8F358278D5B9235*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_E4886687508BA48F_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigationZone* Method_1_5D8A1EAE3D5132D5()
	{
		return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_5D8A1EAE3D5132D5_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigationDirection Method_1_17A60C5671B90277(::UnityEngine::EventSystems::AxisEventData* a1)
	{
		return ((::RPG::UINavigation::UINavigationDirection(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CLASS_1_2C66FF6E85DA4610_METHOD_1_17A60C5671B90277_OFFSET))(this, a1);
	}
};
