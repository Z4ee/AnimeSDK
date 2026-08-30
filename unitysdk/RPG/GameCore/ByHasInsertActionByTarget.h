#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_0BFDEF8772369FD2_OFFSET UNITYSDK_OFFSET(0x1BBDF4A0)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_7544DAC8A396E4E3_OFFSET UNITYSDK_OFFSET(0x1BBDF1C0)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_847C13705A240B12_OFFSET UNITYSDK_OFFSET(0x1BBDF260)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_C16622B126F48433_OFFSET UNITYSDK_OFFSET(0x1BBDF440)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDF220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertActionByTarget_TypeDefinitionIndex = 22318;

	class ByHasInsertActionByTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean IncludeActiveAction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7544DAC8A396E4E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertActionByTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertActionByTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_7544DAC8A396E4E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_847C13705A240B12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_847C13705A240B12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C16622B126F48433(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_C16622B126F48433_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0BFDEF8772369FD2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_0BFDEF8772369FD2_OFFSET))(a1, a2);
		}
	};
}
