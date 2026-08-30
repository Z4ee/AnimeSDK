#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_1C96D6F3A6211299_OFFSET UNITYSDK_OFFSET(0x1CDA4A70)
#define RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_721BF12B1EA14222_OFFSET UNITYSDK_OFFSET(0x1CDA4AB0)
#define RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_89A4DB90A0A4155C_OFFSET UNITYSDK_OFFSET(0x1CDA4BF0)
#define RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_C9C8DD9CA405651D_OFFSET UNITYSDK_OFFSET(0x1CDA4C20)
#define RPG_GAMECORE_BYISINELATIONTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA4AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInElationTime_TypeDefinitionIndex = 22364;

	class ByIsInElationTime : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1C96D6F3A6211299(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInElationTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInElationTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_1C96D6F3A6211299_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_721BF12B1EA14222(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_721BF12B1EA14222_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_89A4DB90A0A4155C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_89A4DB90A0A4155C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C9C8DD9CA405651D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_METHOD_4_C9C8DD9CA405651D_OFFSET))(a1, a2);
		}
	};
}
