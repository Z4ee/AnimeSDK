#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETCONCAT_METHOD_4_317F7831A3FAB1C0_OFFSET UNITYSDK_OFFSET(0x19CF3290)
#define RPG_GAMECORE_TARGETCONCAT_METHOD_4_76A9E353CA16F553_OFFSET UNITYSDK_OFFSET(0x19CF3470)
#define RPG_GAMECORE_TARGETCONCAT_METHOD_4_F332C1F91F3CB60A_OFFSET UNITYSDK_OFFSET(0x19CF3350)
#define RPG_GAMECORE_TARGETCONCAT_METHOD_4_FA80997F3C6B3A99_OFFSET UNITYSDK_OFFSET(0x19CF3400)
#define RPG_GAMECORE_TARGETCONCAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF3300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetConcat_TypeDefinitionIndex = 22578;

	class TargetConcat : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetEvaluator*>* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_317F7831A3FAB1C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetConcat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetConcat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_METHOD_4_317F7831A3FAB1C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F332C1F91F3CB60A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetConcat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_METHOD_4_F332C1F91F3CB60A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA80997F3C6B3A99(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_METHOD_4_FA80997F3C6B3A99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76A9E353CA16F553(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_METHOD_4_76A9E353CA16F553_OFFSET))(a1, a2);
		}
	};
}
