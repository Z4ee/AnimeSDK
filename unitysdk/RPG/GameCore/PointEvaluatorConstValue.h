#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DistanceToScoreWeightMapping; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_POINTEVALUATORCONSTVALUE_METHOD_2_E2AB6B457551DEDF_OFFSET UNITYSDK_OFFSET(0x1D7B4220)
#define RPG_GAMECORE_POINTEVALUATORCONSTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B4300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointEvaluatorConstValue_TypeDefinitionIndex = 15460;

	class PointEvaluatorConstValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DistanceToScoreWeightMapping*>* WeightMappingTemplates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORCONSTVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E2AB6B457551DEDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointEvaluatorConstValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointEvaluatorConstValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORCONSTVALUE_METHOD_2_E2AB6B457551DEDF_OFFSET))(a1, a2);
		}
	};
}
