#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RubikRotDirection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SELECTRUBIKGROUP_METHOD_3_11C7A81FDC567CB5_OFFSET UNITYSDK_OFFSET(0x1769EFE0)
#define RPG_GAMECORE_SELECTRUBIKGROUP_METHOD_3_1BE59FE3D4E30449_OFFSET UNITYSDK_OFFSET(0x1769F060)
#define RPG_GAMECORE_SELECTRUBIKGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1769F030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelectRubikGroup_TypeDefinitionIndex = 20329;

	class SelectRubikGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::RubikRotDirection SelectFace; // 0x20
		::RPG::GameCore::DynamicString* ParamSelectFace; // 0x28
		::System::Boolean SelectAll; // 0x30
		::System::String* CubeName; // 0x38
		::System::Boolean IsSelect; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTRUBIKGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11C7A81FDC567CB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SelectRubikGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SelectRubikGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTRUBIKGROUP_METHOD_3_11C7A81FDC567CB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1BE59FE3D4E30449(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SelectRubikGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SelectRubikGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTRUBIKGROUP_METHOD_3_1BE59FE3D4E30449_OFFSET))(a1, a2);
		}
	};
}
