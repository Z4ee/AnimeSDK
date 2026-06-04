#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_6;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVETEAMRECOMMENDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198489C0)
#define RPG_GAMECORE_IDLELIVETEAMRECOMMENDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19848C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTeamRecommendRow_TypeDefinitionIndex = 11197;

	class IdleLiveTeamRecommendRow : public ::System::Object
	{
	public:
		::System::String* DisplayCondition; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_6*>* TeamMember; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::RPG::Client::TextID Desc; // 0x30
		::System::UInt32 ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMRECOMMENDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveTeamRecommendRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTeamRecommendRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMRECOMMENDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
