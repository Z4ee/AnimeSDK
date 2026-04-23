#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA73E610)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_GET_FIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0xA73E780)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_ISNEEDSHOWEVENTGUIDE_OFFSET UNITYSDK_OFFSET(0xA73E660)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_REFRESHFIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0xA738740)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_SET_FIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0xA73E790)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA73E7A0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA72E580)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xA73E650)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsTutorialService_TypeDefinitionIndex = 68508;

	class LimaoNewsTutorialService : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_TutorialForumNodeID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsTutorialService_TypeDefinitionIndex)->GetStaticField(0x75C0);
		}
		static ::System::UInt32* StaticGet_TutorialPostID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsTutorialService_TypeDefinitionIndex)->GetStaticField(0x75C4);
		}
		::Class_1_0BE9E9C1D5A3C687* _LimaoNewsConditionService; // 0x10
		::System::Boolean _FirstEnteredMainPageFlag_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_0BE9E9C1D5A3C687* limaoNewsConditionService)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE__CTOR_1_OFFSET))(this, limaoNewsConditionService);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshFirstEnteredMainPageFlag(::System::Boolean firstEntered)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_REFRESHFIRSTENTEREDMAINPAGEFLAG_OFFSET))(this, firstEntered);
		}

		::System::Boolean IsNeedShowEventGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_ISNEEDSHOWEVENTGUIDE_OFFSET))(this);
		}

		::System::Boolean get_FirstEnteredMainPageFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_GET_FIRSTENTEREDMAINPAGEFLAG_OFFSET))(this);
		}

		::System::Void set_FirstEnteredMainPageFlag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSTUTORIALSERVICE_SET_FIRSTENTEREDMAINPAGEFLAG_OFFSET))(this, value);
		}
	};
}
