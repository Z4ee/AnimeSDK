#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_22EC16A4865BC2F7_OFFSET UNITYSDK_OFFSET(0x1BE1EDE0)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_B18828A6657ACEA8_OFFSET UNITYSDK_OFFSET(0x1BE1EE90)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_B542DF814275AC9A_OFFSET UNITYSDK_OFFSET(0x1BE1ED30)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_FBD1146AD75BEFFE_OFFSET UNITYSDK_OFFSET(0x1BE1EE60)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1EDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGroupFetchTargetByString_TypeDefinitionIndex = 20361;

	class AdvGroupFetchTargetByString : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicString* Target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B542DF814275AC9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupFetchTargetByString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupFetchTargetByString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_B542DF814275AC9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22EC16A4865BC2F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupFetchTargetByString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_22EC16A4865BC2F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FBD1146AD75BEFFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_FBD1146AD75BEFFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B18828A6657ACEA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRING_METHOD_4_B18828A6657ACEA8_OFFSET))(a1, a2);
		}
	};
}
