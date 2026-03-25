#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_METHOD_2_8D94CFF4712EC2E6_OFFSET UNITYSDK_OFFSET(0x178E5C50)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178E6AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixTaskConfig_TypeDefinitionIndex = 21585;

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

		static ::System::Void Method_2_8D94CFF4712EC2E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKCONFIG_METHOD_2_8D94CFF4712EC2E6_OFFSET))(a1, a2);
		}
	};
}
