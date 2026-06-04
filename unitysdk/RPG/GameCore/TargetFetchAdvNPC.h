#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FetchAdvNPCData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_2A83406C3CC83EBD_OFFSET UNITYSDK_OFFSET(0x19D090E0)
#define RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_352693F8F057F2C4_OFFSET UNITYSDK_OFFSET(0x19CF5670)
#define RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_6D7E65BB5DF30053_OFFSET UNITYSDK_OFFSET(0x19D03710)
#define RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_F8299BC67BC1B88E_OFFSET UNITYSDK_OFFSET(0x19D09070)
#define RPG_GAMECORE_TARGETFETCHADVNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF5620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvNPC_TypeDefinitionIndex = 22557;

	class TargetFetchAdvNPC : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::FetchAdvNPCData*>* MultiGroupFetch; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F8299BC67BC1B88E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_F8299BC67BC1B88E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_352693F8F057F2C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_352693F8F057F2C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D7E65BB5DF30053(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_6D7E65BB5DF30053_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2A83406C3CC83EBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_2A83406C3CC83EBD_OFFSET))(a1, a2);
		}
	};
}
