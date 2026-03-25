#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_1_43BD383C98B4C0C5_179;

#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA088630)
#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xA0885E0)
#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA088670)
#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA088690)
#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD___IFIXBASEPROXY_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xA088680)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DummyPuzzleBoard_TypeDefinitionIndex = 64024;

	class DummyPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_179* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_179*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_179* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_179*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD___IFIXBASEPROXY_RECOVERFROMPUZZLESTATE_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}
	};
}
