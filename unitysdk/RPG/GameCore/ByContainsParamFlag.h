#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameCoreParamFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_7523329FC1EC29E0_OFFSET UNITYSDK_OFFSET(0x1CF101A0)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_7EBADACA5D1A9845_OFFSET UNITYSDK_OFFSET(0x1CF101E0)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_B53FC4F8DF992F7F_OFFSET UNITYSDK_OFFSET(0x1CF10360)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_E88D9F61C6C20778_OFFSET UNITYSDK_OFFSET(0x1CF10390)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF101D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainsParamFlag_TypeDefinitionIndex = 23272;

	class ByContainsParamFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GameCoreParamFlag Flag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7523329FC1EC29E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsParamFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsParamFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_7523329FC1EC29E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7EBADACA5D1A9845(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_7EBADACA5D1A9845_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B53FC4F8DF992F7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_B53FC4F8DF992F7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E88D9F61C6C20778(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_METHOD_4_E88D9F61C6C20778_OFFSET))(a1, a2);
		}
	};
}
