#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_1542345E285B8BDB_OFFSET UNITYSDK_OFFSET(0x1CF0E030)
#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_41EFD6A9CAFAAF26_OFFSET UNITYSDK_OFFSET(0x1CF0DD40)
#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_55FA5F210AC6EC96_OFFSET UNITYSDK_OFFSET(0x1CF0DFD0)
#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_6ADCD44BF1300457_OFFSET UNITYSDK_OFFSET(0x1CF0DDE0)
#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0DDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainCustomString_TypeDefinitionIndex = 23168;

	class ByContainCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::StringHash Key; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_41EFD6A9CAFAAF26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_41EFD6A9CAFAAF26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6ADCD44BF1300457(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_6ADCD44BF1300457_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_55FA5F210AC6EC96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainCustomString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_55FA5F210AC6EC96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1542345E285B8BDB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_1542345E285B8BDB_OFFSET))(a1, a2);
		}
	};
}
