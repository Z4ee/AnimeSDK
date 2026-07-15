#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEAIDEGRADE_METHOD_3_AEDED0533F5E0577_OFFSET UNITYSDK_OFFSET(0x1BD120A0)
#define RPG_GAMECORE_MARBLEAIDEGRADE_METHOD_3_DA93A601FCC17B86_OFFSET UNITYSDK_OFFSET(0x1BD12000)
#define RPG_GAMECORE_MARBLEAIDEGRADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD12090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAIDegrade_TypeDefinitionIndex = 16196;

	class MarbleAIDegrade : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAIDEGRADE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA93A601FCC17B86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAIDegrade*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAIDegrade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAIDEGRADE_METHOD_3_DA93A601FCC17B86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AEDED0533F5E0577(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAIDegrade* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAIDegrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAIDEGRADE_METHOD_3_AEDED0533F5E0577_OFFSET))(a1, a2);
		}
	};
}
