#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_A0AD184CA48493B4_OFFSET UNITYSDK_OFFSET(0x1CEC2D50)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_BF731151B80979DB_OFFSET UNITYSDK_OFFSET(0x1CEC2D90)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_EB638552A0BF517E_OFFSET UNITYSDK_OFFSET(0x1CEC2B20)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_F6FFEA2B5D0D9A5F_OFFSET UNITYSDK_OFFSET(0x1CEC2AD0)
#define RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC2B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFiveDimContainerDynamicFloat_TypeDefinitionIndex = 21193;

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

		static ::System::Void Method_4_F6FFEA2B5D0D9A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_F6FFEA2B5D0D9A5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EB638552A0BF517E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_EB638552A0BF517E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A0AD184CA48493B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_A0AD184CA48493B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF731151B80979DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFiveDimContainerDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFIVEDIMCONTAINERDYNAMICFLOAT_METHOD_4_BF731151B80979DB_OFFSET))(a1, a2);
		}
	};
}
