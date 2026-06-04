#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_18ED56414D338634_OFFSET UNITYSDK_OFFSET(0x1950B1B0)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_696031B356A8D18F_OFFSET UNITYSDK_OFFSET(0x1950B130)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_758ABF858F0B8441_OFFSET UNITYSDK_OFFSET(0x1950ADE0)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_8AAE9F4EE609FE1B_OFFSET UNITYSDK_OFFSET(0x1950AD00)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1950AD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCountOfBaseType_TypeDefinitionIndex = 22303;

	class ByCompareCountOfBaseType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BaseTypeList; // 0x28
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x30
		::RPG::GameCore::TargetEvaluator* BaseTypeSourceTarget; // 0x38
		::RPG::GameCore::AvatarBaseTypeKind SourceBaseTypeKind; // 0x40
		::RPG::GameCore::CompareType CompareType; // 0x44
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8AAE9F4EE609FE1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCountOfBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCountOfBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_8AAE9F4EE609FE1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_758ABF858F0B8441(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_758ABF858F0B8441_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_696031B356A8D18F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_696031B356A8D18F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_18ED56414D338634(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_18ED56414D338634_OFFSET))(a1, a2);
		}
	};
}
