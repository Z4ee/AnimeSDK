#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigChessEntityMap; }
namespace System { class Action; }

#define CONFIGCHESSENTITYDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC8840)
#define CONFIGCHESSENTITYDATA___C__DISPLAYCLASS2_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x17EC8850)

inline static constexpr unsigned int ConfigChessEntityData___c__DisplayClass2_0_TypeDefinitionIndex = 60094;

class ConfigChessEntityData___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::Action* complete; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _ReloadFromFile_b__0(::MoleMole::ConfigChessEntityMap* asset)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigChessEntityMap*))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATA___C__DISPLAYCLASS2_0__RELOADFROMFILE_B__0_OFFSET))(this, asset);
	}
};
