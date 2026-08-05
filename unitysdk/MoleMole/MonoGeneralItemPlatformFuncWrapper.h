#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_BE6BF7909AD9D940;
namespace MoleMole { class UIBaseController; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x180713B0)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_0B4B9CF894B38303_OFFSET UNITYSDK_OFFSET(0x18072230)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18071AA0)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x18071C00)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_70CD9A040B4290BE_OFFSET UNITYSDK_OFFSET(0x18071420)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0x18072040)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_F3FE4B1C21DCE6C1_OFFSET UNITYSDK_OFFSET(0x180722D0)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x18071BB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGeneralItemPlatformFuncWrapper_TypeDefinitionIndex = 50901;

	class MonoGeneralItemPlatformFuncWrapper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* NameTrans; // 0x18
		::UnityEngine::UI::Extension::UILocalizationText* Name; // 0x20
		::UnityEngine::Transform* PlatformIDTrans; // 0x28
		::UnityEngine::UI::Extension::UILocalizationText* PlatformOnlineID; // 0x30
		::UnityEngine::UI::Image* PlatformIcon; // 0x38
		::UnityEngine::Transform* PCIDTrans; // 0x40
		::UnityEngine::UI::Extension::UILocalizationText* PCID; // 0x48
		::MoleMole::UIBaseController* Field_5_4; // 0x50
		::Class_1_BE6BF7909AD9D940* Field_5_11; // 0x58
		::System::Boolean Field_5_10; // 0x60
		::System::Boolean Field_5_9; // 0x61
		::UnityEngine::UI::Extension::UILocalizationText* Field_5_8; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::UIBaseController* a1, ::Class_1_BE6BF7909AD9D940* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_70CD9A040B4290BE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_70CD9A040B4290BE_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_0B4B9CF894B38303(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_0B4B9CF894B38303_OFFSET))(this, a1);
		}

		::System::Void Method_5_890F5FC885825F9E(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_890F5FC885825F9E_OFFSET))(this, a1);
		}

		::System::Void Method_5_F3FE4B1C21DCE6C1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_F3FE4B1C21DCE6C1_OFFSET))(this);
		}

		::System::Void Method_5_6F73A40265D5B980()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_6F73A40265D5B980_OFFSET))(this);
		}
	};
}
