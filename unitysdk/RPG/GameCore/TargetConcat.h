#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETCONCAT_METHOD_4_07AEDF425ADD7E4C_OFFSET UNITYSDK_OFFSET(0x1B44DB50)
#define RPG_GAMECORE_TARGETCONCAT_METHOD_4_6117EA756D921B41_OFFSET UNITYSDK_OFFSET(0x1B44DB20)
#define RPG_GAMECORE_TARGETCONCAT_METHOD_4_E7A16B00C55B4F71_OFFSET UNITYSDK_OFFSET(0x1B44DA30)
#define RPG_GAMECORE_TARGETCONCAT_METHOD_4_F332C1F91F3CB60A_OFFSET UNITYSDK_OFFSET(0x1B44DA70)
#define RPG_GAMECORE_TARGETCONCAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44DA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetConcat_TypeDefinitionIndex = 23041;

	class TargetConcat : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetEvaluator*>* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E7A16B00C55B4F71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetConcat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetConcat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_METHOD_4_E7A16B00C55B4F71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F332C1F91F3CB60A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetConcat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_METHOD_4_F332C1F91F3CB60A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6117EA756D921B41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_METHOD_4_6117EA756D921B41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_07AEDF425ADD7E4C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_METHOD_4_07AEDF425ADD7E4C_OFFSET))(a1, a2);
		}
	};
}
