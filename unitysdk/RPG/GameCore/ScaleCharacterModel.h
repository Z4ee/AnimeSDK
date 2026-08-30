#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SCALECHARACTERMODEL_METHOD_3_04A98E40CFEC08A6_OFFSET UNITYSDK_OFFSET(0x1DB47190)
#define RPG_GAMECORE_SCALECHARACTERMODEL_METHOD_3_2D5B5A0BF655A6A7_OFFSET UNITYSDK_OFFSET(0x1DB470F0)
#define RPG_GAMECORE_SCALECHARACTERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB47150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScaleCharacterModel_TypeDefinitionIndex = 22473;

	class ScaleCharacterModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AliveOnly; // 0x20
		::RPG::GameCore::DynamicFloat* ModelScaleBase; // 0x28
		::System::Single OutlineWidthScale; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* Multiplier; // 0x38
		::System::Boolean ReadTargetFromCaster; // 0x40
		::System::Boolean SaveTargetToCaster; // 0x41
		::System::Boolean EqualRatioByMin; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALECHARACTERMODEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D5B5A0BF655A6A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScaleCharacterModel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScaleCharacterModel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALECHARACTERMODEL_METHOD_3_2D5B5A0BF655A6A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04A98E40CFEC08A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScaleCharacterModel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScaleCharacterModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALECHARACTERMODEL_METHOD_3_04A98E40CFEC08A6_OFFSET))(a1, a2);
		}
	};
}
