#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_0DB5927DFECDAAB4_OFFSET UNITYSDK_OFFSET(0x187419E0)
#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_6ADCD44BF1300457_OFFSET UNITYSDK_OFFSET(0x18741B00)
#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x18741A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainCustomString_TypeDefinitionIndex = 22400;

	class ByContainCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::StringHash Key; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0DB5927DFECDAAB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_0DB5927DFECDAAB4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6ADCD44BF1300457(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_METHOD_4_6ADCD44BF1300457_OFFSET))(a1, a2);
		}
	};
}
