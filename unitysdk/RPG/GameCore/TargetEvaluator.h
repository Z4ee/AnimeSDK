#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_02D95B7B722136A6_OFFSET UNITYSDK_OFFSET(0x1E14E410)
#define RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_101794217258AEF8_OFFSET UNITYSDK_OFFSET(0x1E166780)
#define RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_1631CC4D79302AD6_OFFSET UNITYSDK_OFFSET(0x1E166770)
#define RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_76A6B9467EADE6F3_OFFSET UNITYSDK_OFFSET(0x1E166710)
#define RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_BC6C782BC059E53C_OFFSET UNITYSDK_OFFSET(0x1E1666B0)
#define RPG_GAMECORE_TARGETEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E165A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetEvaluator_TypeDefinitionIndex = 23471;

	class TargetEvaluator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02D95B7B722136A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_02D95B7B722136A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC6C782BC059E53C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_BC6C782BC059E53C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76A6B9467EADE6F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_76A6B9467EADE6F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1631CC4D79302AD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_1631CC4D79302AD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_101794217258AEF8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_METHOD_3_101794217258AEF8_OFFSET))(a1, a2);
		}
	};
}
