#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_8E7CCA650385060E_OFFSET UNITYSDK_OFFSET(0x1989ECE0)
#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_A339E55B3B1A5E76_OFFSET UNITYSDK_OFFSET(0x1989EE70)
#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_C48B921F2F42BA9C_OFFSET UNITYSDK_OFFSET(0x1989EF00)
#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_E56A82B890AFBDAD_OFFSET UNITYSDK_OFFSET(0x1989EDC0)
#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x1989ED70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameFetchProxyByID_TypeDefinitionIndex = 20233;

	class LittleGameFetchProxyByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::System::UInt32>* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8E7CCA650385060E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameFetchProxyByID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameFetchProxyByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_8E7CCA650385060E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E56A82B890AFBDAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameFetchProxyByID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameFetchProxyByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_E56A82B890AFBDAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A339E55B3B1A5E76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameFetchProxyByID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameFetchProxyByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_A339E55B3B1A5E76_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C48B921F2F42BA9C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameFetchProxyByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameFetchProxyByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_C48B921F2F42BA9C_OFFSET))(a1, a2);
		}
	};
}
