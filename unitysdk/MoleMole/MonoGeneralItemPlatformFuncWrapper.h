#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_BE6BF7909AD9D940;
namespace MoleMole { class UIBaseController; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x170E9F30)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_0B4B9CF894B38303_OFFSET UNITYSDK_OFFSET(0x170EA6B0)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x170EA580)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x170EA930)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_70CD9A040B4290BE_OFFSET UNITYSDK_OFFSET(0x170E9FA0)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0x170EA740)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x170EADD0)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x170EA660)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGeneralItemPlatformFuncWrapper_TypeDefinitionIndex = 41688;

	class MonoGeneralItemPlatformFuncWrapper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UILocalizationText* Name; // 0x18
		::UnityEngine::Transform* PlatformIDTrans; // 0x20
		::UnityEngine::UI::Extension::UILocalizationText* PlatformOnlineID; // 0x28
		::UnityEngine::UI::Image* PlatformIcon; // 0x30
		::UnityEngine::Transform* PCIDTrans; // 0x38
		::UnityEngine::UI::Extension::UILocalizationText* PCID; // 0x40
		::MoleMole::UIBaseController* Field_5_6; // 0x48
		::Class_1_BE6BF7909AD9D940* Field_5_7; // 0x50
		::System::Boolean Field_5_8; // 0x58
		::System::Boolean Field_5_9; // 0x59
		::UnityEngine::UI::Extension::UILocalizationText* Field_5_10; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::UIBaseController* a1, ::Class_1_BE6BF7909AD9D940* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0B4B9CF894B38303(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_0B4B9CF894B38303_OFFSET))(this, a1);
		}

		::System::Void Method_5_64F3965CE4C4DB47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_64F3965CE4C4DB47_OFFSET))(this);
		}

		::System::Void Method_5_70CD9A040B4290BE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_70CD9A040B4290BE_OFFSET))(this);
		}

		::System::Void Method_5_0D372435D9CAE4BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_0D372435D9CAE4BC_OFFSET))(this);
		}

		::System::Void Method_5_890F5FC885825F9E(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_890F5FC885825F9E_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
