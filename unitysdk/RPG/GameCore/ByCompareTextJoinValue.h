#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_226BD00DC73AA323_OFFSET UNITYSDK_OFFSET(0x1BBC8550)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_53852523F4D94044_OFFSET UNITYSDK_OFFSET(0x1BBC8330)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_9EE93E5A994F1431_OFFSET UNITYSDK_OFFSET(0x1BBC8370)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_F9DAE346C65E4A4C_OFFSET UNITYSDK_OFFSET(0x1BBC8520)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC8360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTextJoinValue_TypeDefinitionIndex = 20642;

	class ByCompareTextJoinValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TextJoinID; // 0x20
		::System::UInt32 Value; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_53852523F4D94044(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTextJoinValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTextJoinValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_53852523F4D94044_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EE93E5A994F1431(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_9EE93E5A994F1431_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F9DAE346C65E4A4C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_F9DAE346C65E4A4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_226BD00DC73AA323(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_226BD00DC73AA323_OFFSET))(a1, a2);
		}
	};
}
