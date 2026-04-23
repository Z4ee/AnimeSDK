#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA60A2F0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA60A330)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___C___GETCONDITION_B__16_0_OFFSET UNITYSDK_OFFSET(0xA60A340)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusActivityData___c_TypeDefinitionIndex = 56839;

	class HeliobusActivityData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HeliobusActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::HeliobusActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(HeliobusActivityData___c_TypeDefinitionIndex)->GetStaticField(0x21140);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusActivityData___c_TypeDefinitionIndex)->GetStaticField(0x21148);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Void __GetCondition_b__16_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* mainMissionDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___C___GETCONDITION_B__16_0_OFFSET))(this, mainMissionDataList);
		}
	};
}
