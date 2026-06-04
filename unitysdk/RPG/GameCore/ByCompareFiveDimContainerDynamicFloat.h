#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_96CBCF7AD65DC189_OFFSET UNITYSDK_OFFSET(0x19511AC0)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_9ACE5908631D6BE4_OFFSET UNITYSDK_OFFSET(0x19511B40)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_B5EE7BB41BE22F6E_OFFSET UNITYSDK_OFFSET(0x195117B0)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_EB638552A0BF517E_OFFSET UNITYSDK_OFFSET(0x19511890)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19511830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFiveDimContainerDynamicFloat_TypeDefinitionIndex = 20247;

	class ByCompareFiveDimContainerDynamicFloat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B5EE7BB41BE22F6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_B5EE7BB41BE22F6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EB638552A0BF517E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_EB638552A0BF517E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_96CBCF7AD65DC189(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_96CBCF7AD65DC189_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9ACE5908631D6BE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_9ACE5908631D6BE4_OFFSET))(a1, a2);
		}
	};
}
