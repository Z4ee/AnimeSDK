#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValueRangeCallback; }

#define RPG_GAMECORE_DYNAMICVALUERANGEGROUP_METHOD_2_A6DD6CE5877AAB42_OFFSET UNITYSDK_OFFSET(0x196D2110)
#define RPG_GAMECORE_DYNAMICVALUERANGEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x196D22C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValueRangeGroup_TypeDefinitionIndex = 17322;

	class DynamicValueRangeGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash Key; // 0x10
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x14
		::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>* Ranges; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUERANGEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A6DD6CE5877AAB42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DynamicValueRangeGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DynamicValueRangeGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUERANGEGROUP_METHOD_2_A6DD6CE5877AAB42_OFFSET))(a1, a2);
		}
	};
}
