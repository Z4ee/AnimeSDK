#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupLocalTargetType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_01347C146E95CF88_OFFSET UNITYSDK_OFFSET(0x198135B0)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_1E2052D63AB8A012_OFFSET UNITYSDK_OFFSET(0x198133E0)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_25F0A45C4B94AC8B_OFFSET UNITYSDK_OFFSET(0x19813620)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_2E55DDAD0AC699DE_OFFSET UNITYSDK_OFFSET(0x198134A0)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19813450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupFetchLocalTarget_TypeDefinitionIndex = 19987;

	class GroupFetchLocalTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::GroupLocalTargetType TargetType; // 0x10
		::Il2CppArray<::System::UInt32>* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1E2052D63AB8A012(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFetchLocalTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFetchLocalTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_1E2052D63AB8A012_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E55DDAD0AC699DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_2E55DDAD0AC699DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_01347C146E95CF88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_01347C146E95CF88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25F0A45C4B94AC8B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_25F0A45C4B94AC8B_OFFSET))(a1, a2);
		}
	};
}
