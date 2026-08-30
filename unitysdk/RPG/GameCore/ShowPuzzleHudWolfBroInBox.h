#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_METHOD_3_388C9D23147CECDB_OFFSET UNITYSDK_OFFSET(0x1D52E340)
#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_METHOD_3_F037C5D90A51A308_OFFSET UNITYSDK_OFFSET(0x1D52E300)
#define RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52E330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPuzzleHudWolfBroInBox_TypeDefinitionIndex = 22053;

	class ShowPuzzleHudWolfBroInBox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F037C5D90A51A308(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_METHOD_3_F037C5D90A51A308_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_388C9D23147CECDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPuzzleHudWolfBroInBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPUZZLEHUDWOLFBROINBOX_METHOD_3_388C9D23147CECDB_OFFSET))(a1, a2);
		}
	};
}
