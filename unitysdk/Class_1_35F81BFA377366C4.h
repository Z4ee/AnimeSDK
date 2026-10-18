#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/System/Object.h"

class Class_1_27E062DB46F0D058;
namespace RPG::UINavigation { class UINavigation; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CLASS_1_35F81BFA377366C4_METHOD_1_17A60C5671B90277_OFFSET UNITYSDK_OFFSET(0x15D34220)
#define CLASS_1_35F81BFA377366C4_METHOD_1_3491513EEDE20EE3_OFFSET UNITYSDK_OFFSET(0x15D33A60)
#define CLASS_1_35F81BFA377366C4_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x15D34180)
#define CLASS_1_35F81BFA377366C4_METHOD_1_53F67F5CC6ECBD62_OFFSET UNITYSDK_OFFSET(0x15D34B20)
#define CLASS_1_35F81BFA377366C4_METHOD_1_5D62FCBE4F9B5652_OFFSET UNITYSDK_OFFSET(0x15D34CD0)
#define CLASS_1_35F81BFA377366C4_METHOD_1_64009F2583B25B29_OFFSET UNITYSDK_OFFSET(0x15D34290)
#define CLASS_1_35F81BFA377366C4_METHOD_1_6F0C6D681DEC5404_OFFSET UNITYSDK_OFFSET(0x15D34680)
#define CLASS_1_35F81BFA377366C4_METHOD_1_793E8C3168918B76_OFFSET UNITYSDK_OFFSET(0x15D34840)
#define CLASS_1_35F81BFA377366C4_METHOD_1_82AE446F1002E5E5_OFFSET UNITYSDK_OFFSET(0x15D355E0)
#define CLASS_1_35F81BFA377366C4_METHOD_1_8DB08F520156E9A9_OFFSET UNITYSDK_OFFSET(0x15D33F50)
#define CLASS_1_35F81BFA377366C4_METHOD_1_A72216ED6FB703C9_OFFSET UNITYSDK_OFFSET(0x15D34090)
#define CLASS_1_35F81BFA377366C4_METHOD_1_BA2EB1BC1B950B00_OFFSET UNITYSDK_OFFSET(0x15D353E0)
#define CLASS_1_35F81BFA377366C4_METHOD_1_C984DD69A44A6D5C_OFFSET UNITYSDK_OFFSET(0x15D34950)
#define CLASS_1_35F81BFA377366C4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15D35380)
#define CLASS_1_35F81BFA377366C4_METHOD_1_CE176FE4DC10E1D5_OFFSET UNITYSDK_OFFSET(0x15D33F00)
#define CLASS_1_35F81BFA377366C4_METHOD_1_E607519FCB80C849_OFFSET UNITYSDK_OFFSET(0x15D35170)
#define CLASS_1_35F81BFA377366C4_METHOD_1_E9235B64A8E93D12_OFFSET UNITYSDK_OFFSET(0x15D354B0)
#define CLASS_1_35F81BFA377366C4_METHOD_1_EEC3F0B2C99B3FD3_OFFSET UNITYSDK_OFFSET(0x15D33E30)
#define CLASS_1_35F81BFA377366C4_METHOD_1_F1FD7E51281F907B_OFFSET UNITYSDK_OFFSET(0x15D345E0)
#define CLASS_1_35F81BFA377366C4_METHOD_1_F5A738034151F52F_OFFSET UNITYSDK_OFFSET(0x15D35520)
#define CLASS_1_35F81BFA377366C4_METHOD_1_F760886214C24FE8_OFFSET UNITYSDK_OFFSET(0x15D33DE0)
#define CLASS_1_35F81BFA377366C4__CTOR_OFFSET UNITYSDK_OFFSET(0x15D33C60)

inline static constexpr unsigned int Class_1_35F81BFA377366C4_TypeDefinitionIndex = 51742;

class Class_1_35F81BFA377366C4 : public ::System::Object
{
public:
	static ::Class_1_35F81BFA377366C4** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_35F81BFA377366C4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_35F81BFA377366C4_TypeDefinitionIndex)->GetStaticField(0x21EA0);
	}
	::System::Collections::Generic::HashSet_1<::RPG::UINavigation::UINavigation*>* HFAAKBPNHOJ; // 0x10
	::RPG::UINavigation::UINavigation* FAJFNAJPMLD; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::UINavigation::UINavigation*>* ONPNCFHLNMB; // 0x20
	::Class_1_27E062DB46F0D058* EPJJGFNHKEM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4__CTOR_OFFSET))(this);
	}

	static ::Class_1_35F81BFA377366C4* Method_1_3491513EEDE20EE3()
	{
		return ((::Class_1_35F81BFA377366C4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_3491513EEDE20EE3_OFFSET))();
	}

	::RPG::UINavigation::UINavigationZone* Method_1_F760886214C24FE8()
	{
		return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_F760886214C24FE8_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigation* Method_1_CE176FE4DC10E1D5()
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_CE176FE4DC10E1D5_OFFSET))(this);
	}

	::System::Void Method_1_A72216ED6FB703C9(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::AxisEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_A72216ED6FB703C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F1FD7E51281F907B(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_F1FD7E51281F907B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6F0C6D681DEC5404()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_6F0C6D681DEC5404_OFFSET))(this);
	}

	::System::Void Method_1_793E8C3168918B76(::RPG::UINavigation::UINavigation* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_793E8C3168918B76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E607519FCB80C849(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_E607519FCB80C849_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_BA2EB1BC1B950B00(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_BA2EB1BC1B950B00_OFFSET))(this, a1);
	}

	::RPG::UINavigation::UINavigation* Method_1_E9235B64A8E93D12(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_E9235B64A8E93D12_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5A738034151F52F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_F5A738034151F52F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_64009F2583B25B29(::RPG::UINavigation::UINavigation* a1, ::Class_1_27E062DB46F0D058* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_64009F2583B25B29_OFFSET))(this, a1, a2);
	}

	::Class_1_27E062DB46F0D058* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_27E062DB46F0D058*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigation* Method_1_8DB08F520156E9A9()
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_8DB08F520156E9A9_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigationZone* Method_1_EEC3F0B2C99B3FD3()
	{
		return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_EEC3F0B2C99B3FD3_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigationDirection Method_1_17A60C5671B90277(::UnityEngine::EventSystems::AxisEventData* a1)
	{
		return ((::RPG::UINavigation::UINavigationDirection(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_17A60C5671B90277_OFFSET))(this, a1);
	}

	::System::Void Method_1_53F67F5CC6ECBD62(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_53F67F5CC6ECBD62_OFFSET))(this, a1);
	}

	::System::Void Method_1_C984DD69A44A6D5C(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_C984DD69A44A6D5C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_82AE446F1002E5E5(::RPG::UINavigation::UINavigation* a1, ::RPG::UINavigation::UINavigation* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_82AE446F1002E5E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5D62FCBE4F9B5652(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_35F81BFA377366C4_METHOD_1_5D62FCBE4F9B5652_OFFSET))(this, a1);
	}
};
