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

#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_392AB94E6CF7B6EB_OFFSET UNITYSDK_OFFSET(0x1CEBA520)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_483DC8DB014C4E0D_OFFSET UNITYSDK_OFFSET(0x1CEBA4E0)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_758ABF858F0B8441_OFFSET UNITYSDK_OFFSET(0x1CEBA190)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_E5617A0433673E36_OFFSET UNITYSDK_OFFSET(0x1CEBA130)
#define RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBA170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCountOfBaseType_TypeDefinitionIndex = 23321;

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

		static ::System::Void Method_4_E5617A0433673E36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCountOfBaseType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCountOfBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_E5617A0433673E36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_758ABF858F0B8441(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_758ABF858F0B8441_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_483DC8DB014C4E0D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_483DC8DB014C4E0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_392AB94E6CF7B6EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECOUNTOFBASETYPE_METHOD_4_392AB94E6CF7B6EB_OFFSET))(a1, a2);
		}
	};
}
