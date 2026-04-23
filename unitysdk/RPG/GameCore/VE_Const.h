#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VE_CONST_METHOD_3_2B2754A581077985_OFFSET UNITYSDK_OFFSET(0x190ECE50)
#define RPG_GAMECORE_VE_CONST_METHOD_3_AAE8928ED547B4F0_OFFSET UNITYSDK_OFFSET(0x190ECE10)
#define RPG_GAMECORE_VE_CONST__CTOR_OFFSET UNITYSDK_OFFSET(0x190ECE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Const_TypeDefinitionIndex = 23029;

	class VE_Const : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AAE8928ED547B4F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Const*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Const*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_METHOD_3_AAE8928ED547B4F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B2754A581077985(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Const* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Const*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CONST_METHOD_3_2B2754A581077985_OFFSET))(a1, a2);
		}
	};
}
