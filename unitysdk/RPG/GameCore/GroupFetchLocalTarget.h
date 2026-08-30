#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupLocalTargetType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_01347C146E95CF88_OFFSET UNITYSDK_OFFSET(0x1D16FDC0)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_2E55DDAD0AC699DE_OFFSET UNITYSDK_OFFSET(0x1D16FCB0)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_3DC26DD11BFD6BFA_OFFSET UNITYSDK_OFFSET(0x1D16FDF0)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_EE35B7AAC2C674C9_OFFSET UNITYSDK_OFFSET(0x1D16FC70)
#define RPG_GAMECORE_GROUPFETCHLOCALTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16FCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupFetchLocalTarget_TypeDefinitionIndex = 20911;

	class GroupFetchLocalTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::GroupLocalTargetType TargetType; // 0x10
		::Il2CppArray<::System::UInt32>* Targets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EE35B7AAC2C674C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFetchLocalTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFetchLocalTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_EE35B7AAC2C674C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E55DDAD0AC699DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_2E55DDAD0AC699DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_01347C146E95CF88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_01347C146E95CF88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3DC26DD11BFD6BFA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::GroupFetchLocalTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPFETCHLOCALTARGET_METHOD_4_3DC26DD11BFD6BFA_OFFSET))(a1, a2);
		}
	};
}
