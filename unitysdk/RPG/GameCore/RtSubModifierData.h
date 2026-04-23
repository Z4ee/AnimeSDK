#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTSUBMODIFIERDATA_METHOD_2_7A3B629FF5E5C700_OFFSET UNITYSDK_OFFSET(0x18DD8F60)
#define RPG_GAMECORE_RTSUBMODIFIERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD9180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSubModifierData_TypeDefinitionIndex = 23189;

	class RtSubModifierData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x28
		::System::Boolean SyncLayerFromParent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSUBMODIFIERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7A3B629FF5E5C700(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSubModifierData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSubModifierData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSUBMODIFIERDATA_METHOD_2_7A3B629FF5E5C700_OFFSET))(a1, a2);
		}
	};
}
