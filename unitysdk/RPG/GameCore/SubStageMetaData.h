#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_SUBSTAGEMETADATA_METHOD_2_1EF1AD321708FF9A_OFFSET UNITYSDK_OFFSET(0x19CD1C00)
#define RPG_GAMECORE_SUBSTAGEMETADATA_METHOD_2_4D7C7DA54803810F_OFFSET UNITYSDK_OFFSET(0x19CD1AC0)
#define RPG_GAMECORE_SUBSTAGEMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD1BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubStageMetaData_TypeDefinitionIndex = 18158;

	class SubStageMetaData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* SubStageDataPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEMETADATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4D7C7DA54803810F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubStageMetaData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubStageMetaData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEMETADATA_METHOD_2_4D7C7DA54803810F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1EF1AD321708FF9A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubStageMetaData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubStageMetaData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEMETADATA_METHOD_2_1EF1AD321708FF9A_OFFSET))(a1, a2);
		}
	};
}
