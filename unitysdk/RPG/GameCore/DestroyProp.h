#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GroupEntityInfo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DESTROYPROP_METHOD_3_6AAAB26D264883B1_OFFSET UNITYSDK_OFFSET(0x1885B940)
#define RPG_GAMECORE_DESTROYPROP_METHOD_3_7DE1DA2F95E50862_OFFSET UNITYSDK_OFFSET(0x1885BA90)
#define RPG_GAMECORE_DESTROYPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1885BA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyProp_TypeDefinitionIndex = 20803;

	class DestroyProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* UniqueName; // 0x20
		::RPG::GameCore::DynamicFloat* ID; // 0x28
		::RPG::GameCore::DynamicFloat* GroupID; // 0x30
		::Il2CppArray<::RPG::GameCore::GroupEntityInfo*>* DestroyList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6AAAB26D264883B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROP_METHOD_3_6AAAB26D264883B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7DE1DA2F95E50862(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYPROP_METHOD_3_7DE1DA2F95E50862_OFFSET))(a1, a2);
		}
	};
}
