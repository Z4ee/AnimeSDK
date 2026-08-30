#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF079561C804F2A6;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8730A0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8730E0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C___GETSELECTEDITEMINDEX_B__25_0_OFFSET UNITYSDK_OFFSET(0xC8730F0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYSubSkillPanelControl___c_TypeDefinitionIndex = 80457;

	class B51RacingDIYSubSkillPanelControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::B51Racing::B51RacingDIYSubSkillPanelControl___c** StaticGet___9()
		{
			return (::RPG::Client::B51Racing::B51RacingDIYSubSkillPanelControl___c**)Il2CppClass::FromTypeDefinitionIndex(B51RacingDIYSubSkillPanelControl___c_TypeDefinitionIndex)->GetStaticField(0x66780);
		}
		static ::System::Predicate_1<::Class_1_EF079561C804F2A6*>** StaticGet___9__25_0()
		{
			return (::System::Predicate_1<::Class_1_EF079561C804F2A6*>**)Il2CppClass::FromTypeDefinitionIndex(B51RacingDIYSubSkillPanelControl___c_TypeDefinitionIndex)->GetStaticField(0x66788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetSelectedItemIndex_b__25_0(::Class_1_EF079561C804F2A6* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_EF079561C804F2A6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C___GETSELECTEDITEMINDEX_B__25_0_OFFSET))(this, a1);
		}
	};
}
