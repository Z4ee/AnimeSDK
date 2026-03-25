#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION_METHOD_3_0EB2FC4E3311BC6F_OFFSET UNITYSDK_OFFSET(0x17198CC0)
#define RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION_METHOD_3_D266DF79387479FE_OFFSET UNITYSDK_OFFSET(0x17198C40)
#define RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x17198C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableLocalPlayerIgnoreTimeRewindCollision_TypeDefinitionIndex = 19282;

	class EnableLocalPlayerIgnoreTimeRewindCollision : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Ignore; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D266DF79387479FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION_METHOD_3_D266DF79387479FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0EB2FC4E3311BC6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableLocalPlayerIgnoreTimeRewindCollision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLELOCALPLAYERIGNORETIMEREWINDCOLLISION_METHOD_3_0EB2FC4E3311BC6F_OFFSET))(a1, a2);
		}
	};
}
