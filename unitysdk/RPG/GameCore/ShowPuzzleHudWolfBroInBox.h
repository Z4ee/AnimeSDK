#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_METHOD_3_388C9D23147CECDB_OFFSET UNITYSDK_OFFSET(0x17701870)
#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_METHOD_3_E0C2DF621D3B6F72_OFFSET UNITYSDK_OFFSET(0x177017F0)
#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x17701840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPuzzleHudWolfBroInBox_TypeDefinitionIndex = 20496;

	class ShowPuzzleHudWolfBroInBox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0C2DF621D3B6F72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_METHOD_3_E0C2DF621D3B6F72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_388C9D23147CECDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_METHOD_3_388C9D23147CECDB_OFFSET))(a1, a2);
		}
	};
}
