#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEAIDEGRADE_METHOD_3_2D3F2D5B9AEC3ED0_OFFSET UNITYSDK_OFFSET(0x18A94C90)
#define RPG_GAMECORE_MARBLEAIDEGRADE_METHOD_3_AEDED0533F5E0577_OFFSET UNITYSDK_OFFSET(0x18A94DD0)
#define RPG_GAMECORE_MARBLEAIDEGRADE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A94D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAIDegrade_TypeDefinitionIndex = 15960;

	class MarbleAIDegrade : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAIDEGRADE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D3F2D5B9AEC3ED0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAIDegrade*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAIDegrade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAIDEGRADE_METHOD_3_2D3F2D5B9AEC3ED0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AEDED0533F5E0577(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAIDegrade* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAIDegrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAIDEGRADE_METHOD_3_AEDED0533F5E0577_OFFSET))(a1, a2);
		}
	};
}
