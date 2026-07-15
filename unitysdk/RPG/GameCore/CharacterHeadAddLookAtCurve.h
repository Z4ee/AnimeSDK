#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LookAtAdditiveCurveConstraint; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE_METHOD_3_922B5ADDA8948F6C_OFFSET UNITYSDK_OFFSET(0x1B723CB0)
#define RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE_METHOD_3_FF9B2887871438EF_OFFSET UNITYSDK_OFFSET(0x1B723DB0)
#define RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B723D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHeadAddLookAtCurve_TypeDefinitionIndex = 21108;

	class CharacterHeadAddLookAtCurve : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* CurveName; // 0x20
		::RPG::GameCore::LookAtAdditiveCurveConstraint* Constraint; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_922B5ADDA8948F6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterHeadAddLookAtCurve*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterHeadAddLookAtCurve*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE_METHOD_3_922B5ADDA8948F6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF9B2887871438EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterHeadAddLookAtCurve* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterHeadAddLookAtCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERHEADADDLOOKATCURVE_METHOD_3_FF9B2887871438EF_OFFSET))(a1, a2);
		}
	};
}
