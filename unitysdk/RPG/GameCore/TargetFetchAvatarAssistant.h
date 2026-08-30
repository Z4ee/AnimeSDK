#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_86B195EFDBF8B54F_OFFSET UNITYSDK_OFFSET(0x1D5A9290)
#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_BD3CF71317217CDE_OFFSET UNITYSDK_OFFSET(0x1D5A9210)
#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_CC5A87492E1407AF_OFFSET UNITYSDK_OFFSET(0x1D5A9310)
#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_FA1EC9772A305762_OFFSET UNITYSDK_OFFSET(0x1D5A92F0)
#define RPG_GAMECORE_TARGETFETCHAVATARASSISTANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAvatarAssistant_TypeDefinitionIndex = 23665;

	class TargetFetchAvatarAssistant : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BD3CF71317217CDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAvatarAssistant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAvatarAssistant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_BD3CF71317217CDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86B195EFDBF8B54F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_86B195EFDBF8B54F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA1EC9772A305762(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarAssistant*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarAssistant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_FA1EC9772A305762_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC5A87492E1407AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAvatarAssistant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAVATARASSISTANT_METHOD_4_CC5A87492E1407AF_OFFSET))(a1, a2);
		}
	};
}
