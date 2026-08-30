#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_10F2684111BDACA3_OFFSET UNITYSDK_OFFSET(0x1E1B5B00)
#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_476DFA9AE99E7987_OFFSET UNITYSDK_OFFSET(0x1E1B5A20)
#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_95FE3DE17BFEE216_OFFSET UNITYSDK_OFFSET(0x1E1B5AA0)
#define RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_F9956A196E297DB6_OFFSET UNITYSDK_OFFSET(0x1E1B5B20)
#define RPG_GAMECORE_TARGETFETCHOWNERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B5A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchOwnerEntity_TypeDefinitionIndex = 23701;

	class TargetFetchOwnerEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_476DFA9AE99E7987(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_476DFA9AE99E7987_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95FE3DE17BFEE216(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchOwnerEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_95FE3DE17BFEE216_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10F2684111BDACA3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_10F2684111BDACA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F9956A196E297DB6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHOWNERENTITY_METHOD_4_F9956A196E297DB6_OFFSET))(a1, a2);
		}
	};
}
