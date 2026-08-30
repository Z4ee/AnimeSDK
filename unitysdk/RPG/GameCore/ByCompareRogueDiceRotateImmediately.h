#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_579122B04A06A11D_OFFSET UNITYSDK_OFFSET(0x1BBB5C20)
#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_AFF3A955A7333B7C_OFFSET UNITYSDK_OFFSET(0x1BBB5AA0)
#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_CFF68747983E79B4_OFFSET UNITYSDK_OFFSET(0x1BBB5C50)
#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_D1C6D581165370B7_OFFSET UNITYSDK_OFFSET(0x1BBB5AE0)
#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB5AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueDiceRotateImmediately_TypeDefinitionIndex = 22026;

	class ByCompareRogueDiceRotateImmediately : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AFF3A955A7333B7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_AFF3A955A7333B7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1C6D581165370B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_D1C6D581165370B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_579122B04A06A11D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_579122B04A06A11D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CFF68747983E79B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_CFF68747983E79B4_OFFSET))(a1, a2);
		}
	};
}
