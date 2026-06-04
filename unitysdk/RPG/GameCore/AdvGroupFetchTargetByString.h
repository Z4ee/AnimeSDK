#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_06E2673798548413_OFFSET UNITYSDK_OFFSET(0x19426BE0)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_22EC16A4865BC2F7_OFFSET UNITYSDK_OFFSET(0x19426B60)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_749D8AE749813327_OFFSET UNITYSDK_OFFSET(0x19426CF0)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_809BE87F7B53F808_OFFSET UNITYSDK_OFFSET(0x19426A20)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19426B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGroupFetchTargetByString_TypeDefinitionIndex = 19989;

	class AdvGroupFetchTargetByString : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicString* Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_809BE87F7B53F808(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupFetchTargetByString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupFetchTargetByString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_809BE87F7B53F808_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22EC16A4865BC2F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupFetchTargetByString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_22EC16A4865BC2F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_06E2673798548413(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_06E2673798548413_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_749D8AE749813327(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_749D8AE749813327_OFFSET))(a1, a2);
		}
	};
}
