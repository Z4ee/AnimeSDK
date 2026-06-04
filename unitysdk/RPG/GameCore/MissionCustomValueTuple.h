#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE_METHOD_2_868FBEEAE7597F7D_OFFSET UNITYSDK_OFFSET(0x19944760)
#define RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE_METHOD_2_D7EAEB1F921AAC5B_OFFSET UNITYSDK_OFFSET(0x199443C0)
#define RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x199450E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValueTuple_TypeDefinitionIndex = 18040;

	class MissionCustomValueTuple : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::UInt32 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D7EAEB1F921AAC5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionCustomValueTuple*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionCustomValueTuple*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE_METHOD_2_D7EAEB1F921AAC5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_868FBEEAE7597F7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionCustomValueTuple*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionCustomValueTuple*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUETUPLE_METHOD_2_868FBEEAE7597F7D_OFFSET))(a1, a2);
		}
	};
}
