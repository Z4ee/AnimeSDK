#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_16D537A80B3F8320_OFFSET UNITYSDK_OFFSET(0x1952CAF0)
#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_9ECF044381B5A51D_OFFSET UNITYSDK_OFFSET(0x1952C8E0)
#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_B66F6211CCFE0468_OFFSET UNITYSDK_OFFSET(0x1952CB70)
#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_D1C6D581165370B7_OFFSET UNITYSDK_OFFSET(0x1952C9B0)
#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x1952C960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueDiceRotateImmediately_TypeDefinitionIndex = 21049;

	class ByCompareRogueDiceRotateImmediately : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9ECF044381B5A51D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_9ECF044381B5A51D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1C6D581165370B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_D1C6D581165370B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_16D537A80B3F8320(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_16D537A80B3F8320_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B66F6211CCFE0468(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_B66F6211CCFE0468_OFFSET))(a1, a2);
		}
	};
}
