#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_483CDA3598060E03_OFFSET UNITYSDK_OFFSET(0x1CF66B70)
#define RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_A478E013EA9D79F0_OFFSET UNITYSDK_OFFSET(0x1CF66D60)
#define RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_EA192B31175BE0C6_OFFSET UNITYSDK_OFFSET(0x1CF66D30)
#define RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_FA57737ACF91A7CA_OFFSET UNITYSDK_OFFSET(0x1CF66BB0)
#define RPG_GAMECORE_BYTARGETVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF66BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetVisible_TypeDefinitionIndex = 20367;

	class ByTargetVisible : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_483CDA3598060E03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_483CDA3598060E03_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA57737ACF91A7CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_FA57737ACF91A7CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA192B31175BE0C6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetVisible*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_EA192B31175BE0C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A478E013EA9D79F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetVisible* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_A478E013EA9D79F0_OFFSET))(a1, a2);
		}
	};
}
