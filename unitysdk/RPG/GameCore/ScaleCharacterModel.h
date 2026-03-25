#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SCALECHARACTERMODEL_METHOD_3_1955D8FE7A261719_OFFSET UNITYSDK_OFFSET(0x1769AD50)
#define RPG_GAMECORE_SCALECHARACTERMODEL_METHOD_3_94AA597E068738FA_OFFSET UNITYSDK_OFFSET(0x1769AC70)
#define RPG_GAMECORE_SCALECHARACTERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1769ACF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScaleCharacterModel_TypeDefinitionIndex = 20915;

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

		static ::System::Void Method_3_94AA597E068738FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScaleCharacterModel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScaleCharacterModel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALECHARACTERMODEL_METHOD_3_94AA597E068738FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1955D8FE7A261719(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScaleCharacterModel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScaleCharacterModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALECHARACTERMODEL_METHOD_3_1955D8FE7A261719_OFFSET))(a1, a2);
		}
	};
}
