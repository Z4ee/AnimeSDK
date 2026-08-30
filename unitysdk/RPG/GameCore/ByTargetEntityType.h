#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_0DB6079465FD2B06_OFFSET UNITYSDK_OFFSET(0x1CDC4AD0)
#define RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_601FF42B5C162B01_OFFSET UNITYSDK_OFFSET(0x1CDC4D20)
#define RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_A53DEC672B782B4F_OFFSET UNITYSDK_OFFSET(0x1CDC4A80)
#define RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_C0353B80AC07B2DF_OFFSET UNITYSDK_OFFSET(0x1CDC4CE0)
#define RPG_GAMECORE_BYTARGETENTITYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC4AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetEntityType_TypeDefinitionIndex = 22757;

	class ByTargetEntityType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x28
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETENTITYTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A53DEC672B782B4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetEntityType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetEntityType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_A53DEC672B782B4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0DB6079465FD2B06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetEntityType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetEntityType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_0DB6079465FD2B06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C0353B80AC07B2DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetEntityType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetEntityType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_C0353B80AC07B2DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_601FF42B5C162B01(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetEntityType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetEntityType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETENTITYTYPE_METHOD_4_601FF42B5C162B01_OFFSET))(a1, a2);
		}
	};
}
