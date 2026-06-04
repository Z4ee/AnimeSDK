#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_4C7AFC34AD7E2F7D_OFFSET UNITYSDK_OFFSET(0x19567500)
#define RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_721BF12B1EA14222_OFFSET UNITYSDK_OFFSET(0x195673C0)
#define RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_8367C840F74A1771_OFFSET UNITYSDK_OFFSET(0x19567580)
#define RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_B3A97AA292D987C8_OFFSET UNITYSDK_OFFSET(0x195672F0)
#define RPG_GAMECORE_BYISINELATIONTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x19567370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInElationTime_TypeDefinitionIndex = 21382;

	class ByIsInElationTime : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B3A97AA292D987C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInElationTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInElationTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_B3A97AA292D987C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_721BF12B1EA14222(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_721BF12B1EA14222_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C7AFC34AD7E2F7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_4C7AFC34AD7E2F7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8367C840F74A1771(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_8367C840F74A1771_OFFSET))(a1, a2);
		}
	};
}
