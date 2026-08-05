#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_2_F5737224A0253470;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }

#define CLASS_2_F5737224A0253470_CLASS_1_37A9F3A7EC39E9B7_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11319CD0)
#define CLASS_2_F5737224A0253470_CLASS_1_37A9F3A7EC39E9B7_METHOD_1_F181E5AA3BEB1DAA_OFFSET UNITYSDK_OFFSET(0x11319D10)
#define CLASS_2_F5737224A0253470_CLASS_1_37A9F3A7EC39E9B7__CTOR_OFFSET UNITYSDK_OFFSET(0x11319CC0)

inline static constexpr unsigned int Class_2_F5737224A0253470_Class_1_37A9F3A7EC39E9B7_TypeDefinitionIndex = 78710;

class Class_2_F5737224A0253470_Class_1_37A9F3A7EC39E9B7 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Class_2_F5737224A0253470* Field_1_2; // 0x18
	::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5737224A0253470_CLASS_1_37A9F3A7EC39E9B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5737224A0253470_CLASS_1_37A9F3A7EC39E9B7_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_F181E5AA3BEB1DAA(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_F5737224A0253470_CLASS_1_37A9F3A7EC39E9B7_METHOD_1_F181E5AA3BEB1DAA_OFFSET))(this, a1, a2, a3, a4);
	}
};
