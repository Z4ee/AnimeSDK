#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateMasterTalkSituation.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_34118FB616997FA1_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1C8F7830)
#define CLASS_1_34118FB616997FA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F7B90)

inline static constexpr unsigned int Class_1_34118FB616997FA1_TypeDefinitionIndex = 11487;

class Class_1_34118FB616997FA1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BIFDDEDBGAL; // 0x10
	::Il2CppArray<::System::UInt32>* NFIKBPNJGDG; // 0x18
	::RPG::Client::TextID HHDKOKBHBCA; // 0x20
	::System::UInt32 LJPJOPFFGGF; // 0x30
	::RPG::GameCore::FateMasterTalkSituation KLAGNGDGAIC; // 0x34
	::System::UInt32 MGNIIAODKMF; // 0x38
	::System::UInt32 NNDOABPFDMI; // 0x3C
	::RPG::Client::TextID OKHNDIGJMIG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34118FB616997FA1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_34118FB616997FA1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_34118FB616997FA1*&))((::PBYTE)hIl2Cpp + CLASS_1_34118FB616997FA1_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
