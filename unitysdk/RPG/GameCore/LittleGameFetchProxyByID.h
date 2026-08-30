#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_CBAF848C5A466DB3_OFFSET UNITYSDK_OFFSET(0x1D202770)
#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_D29A0958C3119837_OFFSET UNITYSDK_OFFSET(0x1D202660)
#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_D8F83BB3C0A45D31_OFFSET UNITYSDK_OFFSET(0x1D2027C0)
#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_E56A82B890AFBDAD_OFFSET UNITYSDK_OFFSET(0x1D2026C0)
#define RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2026B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameFetchProxyByID_TypeDefinitionIndex = 21178;

	class LittleGameFetchProxyByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::System::UInt32>* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D29A0958C3119837(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameFetchProxyByID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameFetchProxyByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_D29A0958C3119837_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E56A82B890AFBDAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameFetchProxyByID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameFetchProxyByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_E56A82B890AFBDAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CBAF848C5A466DB3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameFetchProxyByID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameFetchProxyByID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_CBAF848C5A466DB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D8F83BB3C0A45D31(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::LittleGameFetchProxyByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::LittleGameFetchProxyByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEFETCHPROXYBYID_METHOD_4_D8F83BB3C0A45D31_OFFSET))(a1, a2);
		}
	};
}
