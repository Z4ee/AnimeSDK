#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoChaserConfig; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_SUMMERSURFBAR_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18CFEEB0)
#define MOLEMOLE_SUMMERSURFBAR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18CFF140)
#define MOLEMOLE_SUMMERSURFBAR_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18CFEEC0)
#define MOLEMOLE_SUMMERSURFBAR_SETPERCENT_OFFSET UNITYSDK_OFFSET(0x18CFF070)
#define MOLEMOLE_SUMMERSURFBAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CFF680)
#define MOLEMOLE_SUMMERSURFBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFF670)
#define MOLEMOLE_SUMMERSURFBAR___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18CFF6C0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerSurfBar_TypeDefinitionIndex = 40250;

	class SummerSurfBar : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_WaveHeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SummerSurfBar_TypeDefinitionIndex)->GetStaticField(0xDBF0);
		}
		::UnityEngine::Vector2 _lastPosition; // 0x318
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x320
		::System::UInt32 _entity; // 0x328
		::System::Single _value; // 0x32C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* baseContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_ONUIOPEN_OFFSET))(this, baseContext);
		}

		::System::Void SetPercent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_SETPERCENT_OFFSET))(this, value);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
