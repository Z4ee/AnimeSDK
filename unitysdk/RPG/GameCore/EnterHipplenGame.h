#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTERHIPPLENGAME_METHOD_3_42152EA725C0565D_OFFSET UNITYSDK_OFFSET(0x196EA0A0)
#define RPG_GAMECORE_ENTERHIPPLENGAME_METHOD_3_CB7896F61CAD2D91_OFFSET UNITYSDK_OFFSET(0x196EA1B0)
#define RPG_GAMECORE_ENTERHIPPLENGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x196EA180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterHipplenGame_TypeDefinitionIndex = 20134;

	class EnterHipplenGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERHIPPLENGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42152EA725C0565D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterHipplenGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterHipplenGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERHIPPLENGAME_METHOD_3_42152EA725C0565D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB7896F61CAD2D91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterHipplenGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterHipplenGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERHIPPLENGAME_METHOD_3_CB7896F61CAD2D91_OFFSET))(a1, a2);
		}
	};
}
