#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FetchAdvNPCData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_1CDC792D1EAC4254_OFFSET UNITYSDK_OFFSET(0x1E168B80)
#define RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_A8973A21CC47C8BE_OFFSET UNITYSDK_OFFSET(0x1E168BD0)
#define RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_B2D4DC7EF84418B5_OFFSET UNITYSDK_OFFSET(0x1E168A30)
#define RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_DED2477199D0E54D_OFFSET UNITYSDK_OFFSET(0x1E168A90)
#define RPG_GAMECORE_TARGETFETCHADVNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E168A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvNPC_TypeDefinitionIndex = 23600;

	class TargetFetchAdvNPC : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::FetchAdvNPCData*>* MultiGroupFetch; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B2D4DC7EF84418B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_B2D4DC7EF84418B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DED2477199D0E54D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_DED2477199D0E54D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1CDC792D1EAC4254(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_1CDC792D1EAC4254_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8973A21CC47C8BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvNPC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVNPC_METHOD_4_A8973A21CC47C8BE_OFFSET))(a1, a2);
		}
	};
}
