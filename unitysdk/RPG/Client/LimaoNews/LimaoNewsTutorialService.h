#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0BE9E9C1D5A3C687;
class Class_1_C56ACF52E09DFFD3;

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD494D40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_GET_FIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0xD494FE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_ISNEEDSHOWEVENTGUIDE_OFFSET UNITYSDK_OFFSET(0xD494DF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_REFRESHFIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0xD494DA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_SET_FIRSTENTEREDMAINPAGEFLAG_OFFSET UNITYSDK_OFFSET(0xD494FF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD495000)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD494D90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xD494D80)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsTutorialService_TypeDefinitionIndex = 79022;

	class LimaoNewsTutorialService : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_TutorialForumNodeID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsTutorialService_TypeDefinitionIndex)->GetStaticField(0x13E30);
		}
		static ::System::UInt32* StaticGet_TutorialPostID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsTutorialService_TypeDefinitionIndex)->GetStaticField(0x13E34);
		}
		::Class_1_0BE9E9C1D5A3C687* _LimaoNewsConditionService; // 0x10
		::Class_1_C56ACF52E09DFFD3* _LimaoNewsLimaoService; // 0x18
		::System::Boolean _FirstEnteredMainPageFlag_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_0BE9E9C1D5A3C687* a1, ::Class_1_C56ACF52E09DFFD3* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0BE9E9C1D5A3C687*, ::Class_1_C56ACF52E09DFFD3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshFirstEnteredMainPageFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_REFRESHFIRSTENTEREDMAINPAGEFLAG_OFFSET))(this, a1);
		}

		::System::Boolean IsNeedShowEventGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_ISNEEDSHOWEVENTGUIDE_OFFSET))(this);
		}

		::System::Boolean get_FirstEnteredMainPageFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_GET_FIRSTENTEREDMAINPAGEFLAG_OFFSET))(this);
		}

		::System::Void set_FirstEnteredMainPageFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSTUTORIALSERVICE_SET_FIRSTENTEREDMAINPAGEFLAG_OFFSET))(this, a1);
		}
	};
}
