#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_METHOD_2_B15DA7971D71BC9B_OFFSET UNITYSDK_OFFSET(0x1D2B0930)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_METHOD_2_C219FA2796262EB7_OFFSET UNITYSDK_OFFSET(0x1D2AFBE0)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B2F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixTaskConfig_TypeDefinitionIndex = 23089;

	class UniversalHotFixTaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* TargetTypeParams; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValueParams; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* DynamicStringParams; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* StringParams; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BoolParams; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntParams; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* UIntParams; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C219FA2796262EB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_METHOD_2_C219FA2796262EB7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B15DA7971D71BC9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::UniversalHotFixTaskConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::UniversalHotFixTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_METHOD_2_B15DA7971D71BC9B_OFFSET))(a1, a2);
		}
	};
}
