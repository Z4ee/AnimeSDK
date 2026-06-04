#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/System/Object.h"

class Class_1_27E062DB46F0D058;
namespace RPG::UINavigation { class UINavigation; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CLASS_1_3592A68B17F67903_METHOD_1_077F2C16076531D1_OFFSET UNITYSDK_OFFSET(0x13B910B0)
#define CLASS_1_3592A68B17F67903_METHOD_1_17A60C5671B90277_OFFSET UNITYSDK_OFFSET(0x13B91230)
#define CLASS_1_3592A68B17F67903_METHOD_1_1924BF6751A2BFC6_OFFSET UNITYSDK_OFFSET(0x13B90F60)
#define CLASS_1_3592A68B17F67903_METHOD_1_34ED94DB38707547_OFFSET UNITYSDK_OFFSET(0x13B91490)
#define CLASS_1_3592A68B17F67903_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x13B911A0)
#define CLASS_1_3592A68B17F67903_METHOD_1_51B5C1EF7E57A129_OFFSET UNITYSDK_OFFSET(0x13B91530)
#define CLASS_1_3592A68B17F67903_METHOD_1_6662B92AEBC00AD0_OFFSET UNITYSDK_OFFSET(0x13B917E0)
#define CLASS_1_3592A68B17F67903_METHOD_1_7AE328AD493DB361_OFFSET UNITYSDK_OFFSET(0x13B916C0)
#define CLASS_1_3592A68B17F67903_METHOD_1_82AE446F1002E5E5_OFFSET UNITYSDK_OFFSET(0x13B91E80)
#define CLASS_1_3592A68B17F67903_METHOD_1_8DB08F520156E9A9_OFFSET UNITYSDK_OFFSET(0x13B90F70)
#define CLASS_1_3592A68B17F67903_METHOD_1_BA2EB1BC1B950B00_OFFSET UNITYSDK_OFFSET(0x13B91C80)
#define CLASS_1_3592A68B17F67903_METHOD_1_C67FD7343B3CBCAD_OFFSET UNITYSDK_OFFSET(0x13B91D50)
#define CLASS_1_3592A68B17F67903_METHOD_1_C6C5701C46B0AA2F_OFFSET UNITYSDK_OFFSET(0x13B91930)
#define CLASS_1_3592A68B17F67903_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0x13B90D80)
#define CLASS_1_3592A68B17F67903_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13B91C30)
#define CLASS_1_3592A68B17F67903_METHOD_1_E607519FCB80C849_OFFSET UNITYSDK_OFFSET(0x13B91A60)
#define CLASS_1_3592A68B17F67903_METHOD_1_EB0CF1EC81C5DE9C_OFFSET UNITYSDK_OFFSET(0x13B912A0)
#define CLASS_1_3592A68B17F67903_METHOD_1_EEC3F0B2C99B3FD3_OFFSET UNITYSDK_OFFSET(0x13B90E90)
#define CLASS_1_3592A68B17F67903_METHOD_1_F5A738034151F52F_OFFSET UNITYSDK_OFFSET(0x13B91DC0)
#define CLASS_1_3592A68B17F67903_METHOD_1_FA5E4186FA3A875C_OFFSET UNITYSDK_OFFSET(0x13B90E80)
#define CLASS_1_3592A68B17F67903__CTOR_OFFSET UNITYSDK_OFFSET(0x13B90E30)

inline static constexpr unsigned int Class_1_3592A68B17F67903_TypeDefinitionIndex = 48419;

class Class_1_3592A68B17F67903 : public ::System::Object
{
public:
	static ::Class_1_3592A68B17F67903** StaticGet_Field_1_0()
	{
		return (::Class_1_3592A68B17F67903**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3592A68B17F67903_TypeDefinitionIndex)->GetStaticField(0x62A10);
	}
	::Class_1_27E062DB46F0D058* Field_1_1; // 0x10
	::RPG::UINavigation::UINavigation* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903__CTOR_OFFSET))(this);
	}

	static ::Class_1_3592A68B17F67903* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_3592A68B17F67903*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::RPG::UINavigation::UINavigationZone* Method_1_FA5E4186FA3A875C()
	{
		return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_FA5E4186FA3A875C_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigation* Method_1_1924BF6751A2BFC6()
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_1924BF6751A2BFC6_OFFSET))(this);
	}

	::System::Void Method_1_077F2C16076531D1(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::AxisEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_077F2C16076531D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_34ED94DB38707547(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_34ED94DB38707547_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_51B5C1EF7E57A129()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_51B5C1EF7E57A129_OFFSET))(this);
	}

	::System::Void Method_1_7AE328AD493DB361(::RPG::UINavigation::UINavigation* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_7AE328AD493DB361_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E607519FCB80C849(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_E607519FCB80C849_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_BA2EB1BC1B950B00(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_BA2EB1BC1B950B00_OFFSET))(this, a1);
	}

	::RPG::UINavigation::UINavigation* Method_1_C67FD7343B3CBCAD(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_C67FD7343B3CBCAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5A738034151F52F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_F5A738034151F52F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EB0CF1EC81C5DE9C(::RPG::UINavigation::UINavigation* a1, ::Class_1_27E062DB46F0D058* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_EB0CF1EC81C5DE9C_OFFSET))(this, a1, a2);
	}

	::Class_1_27E062DB46F0D058* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_27E062DB46F0D058*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigation* Method_1_8DB08F520156E9A9()
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_8DB08F520156E9A9_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigationZone* Method_1_EEC3F0B2C99B3FD3()
	{
		return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_EEC3F0B2C99B3FD3_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigationDirection Method_1_17A60C5671B90277(::UnityEngine::EventSystems::AxisEventData* a1)
	{
		return ((::RPG::UINavigation::UINavigationDirection(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_17A60C5671B90277_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6C5701C46B0AA2F(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_C6C5701C46B0AA2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_6662B92AEBC00AD0(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_6662B92AEBC00AD0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_82AE446F1002E5E5(::RPG::UINavigation::UINavigation* a1, ::RPG::UINavigation::UINavigation* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_3592A68B17F67903_METHOD_1_82AE446F1002E5E5_OFFSET))(this, a1, a2);
	}
};
