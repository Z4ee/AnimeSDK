#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_55243860A8251F75_OFFSET UNITYSDK_OFFSET(0x1954DDB0)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_68259BED40F9E733_OFFSET UNITYSDK_OFFSET(0x1954E150)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_847C13705A240B12_OFFSET UNITYSDK_OFFSET(0x1954DED0)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_C1C40619C06A044C_OFFSET UNITYSDK_OFFSET(0x1954E0B0)
#define RPG_GAMECORE_BYHASINSERTACTIONBYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1954DE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertActionByTarget_TypeDefinitionIndex = 21336;

	class ByHasInsertActionByTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean IncludeActiveAction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_55243860A8251F75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertActionByTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertActionByTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_55243860A8251F75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_847C13705A240B12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_847C13705A240B12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C1C40619C06A044C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_C1C40619C06A044C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_68259BED40F9E733(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertActionByTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertActionByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTACTIONBYTARGET_METHOD_4_68259BED40F9E733_OFFSET))(a1, a2);
		}
	};
}
