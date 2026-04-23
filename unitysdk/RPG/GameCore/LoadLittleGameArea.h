#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOADLITTLEGAMEAREA_METHOD_3_51A4604A229CD756_OFFSET UNITYSDK_OFFSET(0x18A71CC0)
#define RPG_GAMECORE_LOADLITTLEGAMEAREA_METHOD_3_E219E7BDC1551695_OFFSET UNITYSDK_OFFSET(0x18A71E10)
#define RPG_GAMECORE_LOADLITTLEGAMEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A71D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadLittleGameArea_TypeDefinitionIndex = 19980;

	class LoadLittleGameArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* Area; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLITTLEGAMEAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_51A4604A229CD756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadLittleGameArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadLittleGameArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLITTLEGAMEAREA_METHOD_3_51A4604A229CD756_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E219E7BDC1551695(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadLittleGameArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLITTLEGAMEAREA_METHOD_3_E219E7BDC1551695_OFFSET))(a1, a2);
		}
	};
}
