#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_472;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA_CHALLENGECACHEDATACREATOR_OFFSET UNITYSDK_OFFSET(0x18A36510)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18A366B0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA_ISCONDITIONVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x18A36590)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0x18A367B0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA_SETDEFAULT_OFFSET UNITYSDK_OFFSET(0x18A36760)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A368C0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A36580)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController_ChallengeCacheData_TypeDefinitionIndex = 75876;

	class UIMissionTipsRowWidgetController_ChallengeCacheData : public ::System::Object
	{
	public:
		static ::Foundation::ObjectPool_1<::MoleMole::UIMissionTipsRowWidgetController_ChallengeCacheData*>** StaticGet_SPool()
		{
			return (::Foundation::ObjectPool_1<::MoleMole::UIMissionTipsRowWidgetController_ChallengeCacheData*>**)Il2CppClass::FromTypeDefinitionIndex(UIMissionTipsRowWidgetController_ChallengeCacheData_TypeDefinitionIndex)->GetStaticField(0x4EC30);
		}
		::UnityEngine::UI::Extension::UILocalizationText* lt; // 0x10
		::Class_0_16E4307DCC419505_472* condition; // 0x18
		::System::Int32 cacheCurrentValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA__CCTOR_OFFSET))();
		}

		static ::MoleMole::UIMissionTipsRowWidgetController_ChallengeCacheData* ChallengeCacheDataCreator()
		{
			return ((::MoleMole::UIMissionTipsRowWidgetController_ChallengeCacheData*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA_CHALLENGECACHEDATACREATOR_OFFSET))();
		}

		::System::Boolean IsConditionValueChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA_ISCONDITIONVALUECHANGE_OFFSET))(this);
		}

		static ::MoleMole::UIMissionTipsRowWidgetController_ChallengeCacheData* Create()
		{
			return ((::MoleMole::UIMissionTipsRowWidgetController_ChallengeCacheData*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA_CREATE_OFFSET))();
		}

		::System::Void SetDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA_SETDEFAULT_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER_CHALLENGECACHEDATA_RELEASE_OFFSET))(this);
		}
	};
}
