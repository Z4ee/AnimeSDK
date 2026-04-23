#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MunicipalChatEntityInfo; }
namespace RPG::GameCore { class MunicipalChatNPCInfo; }

#define CLASS_2_138D7411B1643FD7___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF2DFD70)
#define CLASS_2_138D7411B1643FD7___C__DISPLAYCLASS2_0__LOADCHATCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0xF2E0A20)

inline static constexpr unsigned int Class_2_138D7411B1643FD7___c__DisplayClass2_0_TypeDefinitionIndex = 53742;

class Class_2_138D7411B1643FD7___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::MunicipalChatNPCInfo* npcInfo; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _LoadChatConfig_b__0(::RPG::GameCore::MunicipalChatEntityInfo* info)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MunicipalChatEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_2_138D7411B1643FD7___C__DISPLAYCLASS2_0__LOADCHATCONFIG_B__0_OFFSET))(this, info);
	}
};
