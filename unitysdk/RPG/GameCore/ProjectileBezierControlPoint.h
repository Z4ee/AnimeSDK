#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROJECTILEBEZIERCONTROLPOINT_METHOD_2_F9D70BCC0146532B_OFFSET UNITYSDK_OFFSET(0x1D1716E0)
#define RPG_GAMECORE_PROJECTILEBEZIERCONTROLPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D171810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileBezierControlPoint_TypeDefinitionIndex = 15479;

	class ProjectileBezierControlPoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Ratio; // 0x10
		::System::Single Height; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEBEZIERCONTROLPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F9D70BCC0146532B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProjectileBezierControlPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProjectileBezierControlPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEBEZIERCONTROLPOINT_METHOD_2_F9D70BCC0146532B_OFFSET))(a1, a2);
		}
	};
}
