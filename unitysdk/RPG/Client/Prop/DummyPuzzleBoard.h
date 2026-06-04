#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_1_43BD383C98B4C0C5_196;

#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC54C920)
#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xC54C8D0)
#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC54C960)
#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xC54C980)
#define RPG_CLIENT_PROP_DUMMYPUZZLEBOARD___IFIXBASEPROXY_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xC54C970)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DummyPuzzleBoard_TypeDefinitionIndex = 73093;

	class DummyPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_196* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_196*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RecoverFromPuzzleState(::Class_1_43BD383C98B4C0C5_196* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_196*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD___IFIXBASEPROXY_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DUMMYPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}
	};
}
