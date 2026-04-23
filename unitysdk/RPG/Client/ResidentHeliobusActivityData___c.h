#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAFDCA50)
#define RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAFDCA80)
#define RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C___GETCONDITION_B__19_0_OFFSET UNITYSDK_OFFSET(0xAFDCA90)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentHeliobusActivityData___c_TypeDefinitionIndex = 56963;

	class ResidentHeliobusActivityData___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ResidentHeliobusActivityData___c_TypeDefinitionIndex)->GetStaticField(0x15760);
		}
		static ::RPG::Client::ResidentHeliobusActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::ResidentHeliobusActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(ResidentHeliobusActivityData___c_TypeDefinitionIndex)->GetStaticField(0x15768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Void __GetCondition_b__19_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* mainMissionDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTHELIOBUSACTIVITYDATA___C___GETCONDITION_B__19_0_OFFSET))(this, mainMissionDataList);
		}
	};
}
