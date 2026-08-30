#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ActivityPanelDataResidentAdaptor; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE6C190)
#define RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDE6C1C0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER___C__GETDISPLAYRESIDENTACTIVITIES_B__0_0_OFFSET UNITYSDK_OFFSET(0xDE6C1D0)
#define RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER___C__GETDISPLAYRESIDENTACTIVITIES_B__0_1_OFFSET UNITYSDK_OFFSET(0xDE6C270)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentActivityPanelDataProvider___c_TypeDefinitionIndex = 61863;

	class ResidentActivityPanelDataProvider___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityPanelData*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityPanelData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ResidentActivityPanelDataProvider___c_TypeDefinitionIndex)->GetStaticField(0x61B80);
		}
		static ::System::Func_2<::RPG::Client::ActivityPanelData*, ::RPG::Client::ActivityPanelDataResidentAdaptor*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityPanelData*, ::RPG::Client::ActivityPanelDataResidentAdaptor*>**)Il2CppClass::FromTypeDefinitionIndex(ResidentActivityPanelDataProvider___c_TypeDefinitionIndex)->GetStaticField(0x61B88);
		}
		static ::RPG::Client::ResidentActivityPanelDataProvider___c** StaticGet___9()
		{
			return (::RPG::Client::ResidentActivityPanelDataProvider___c**)Il2CppClass::FromTypeDefinitionIndex(ResidentActivityPanelDataProvider___c_TypeDefinitionIndex)->GetStaticField(0x61B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDisplayResidentActivities_b__0_0(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER___C__GETDISPLAYRESIDENTACTIVITIES_B__0_0_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityPanelDataResidentAdaptor* _GetDisplayResidentActivities_b__0_1(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::RPG::Client::ActivityPanelDataResidentAdaptor*(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTACTIVITYPANELDATAPROVIDER___C__GETDISPLAYRESIDENTACTIVITIES_B__0_1_OFFSET))(this, a1);
		}
	};
}
