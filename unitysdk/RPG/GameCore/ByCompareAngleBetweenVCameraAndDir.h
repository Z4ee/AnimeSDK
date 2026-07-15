#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_189258F6C215D3A7_OFFSET UNITYSDK_OFFSET(0x19CD12D0)
#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_1FA6C8B19A1EC76E_OFFSET UNITYSDK_OFFSET(0x19CD1310)
#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_708394C9B05BF381_OFFSET UNITYSDK_OFFSET(0x19CD1610)
#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_CCA6D5AC201F9DBE_OFFSET UNITYSDK_OFFSET(0x19CD15E0)
#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD1300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAngleBetweenVCameraAndDir_TypeDefinitionIndex = 22489;

	class ByCompareAngleBetweenVCameraAndDir : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseRealCameraDir; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x38
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_189258F6C215D3A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_189258F6C215D3A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FA6C8B19A1EC76E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_1FA6C8B19A1EC76E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CCA6D5AC201F9DBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_CCA6D5AC201F9DBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_708394C9B05BF381(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_708394C9B05BF381_OFFSET))(a1, a2);
		}
	};
}
