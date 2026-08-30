#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MunicipalChatEntityInfo; }
namespace RPG::GameCore { class MunicipalChatNPCInfo; }

#define CLASS_2_28D22891565E4637___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160236E0)
#define CLASS_2_28D22891565E4637___C__DISPLAYCLASS2_0__LOADCHATCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x160244F0)

inline static constexpr unsigned int Class_2_28D22891565E4637___c__DisplayClass2_0_TypeDefinitionIndex = 58421;

class Class_2_28D22891565E4637___c__DisplayClass2_0 : public ::System::Object
{
public:
	::RPG::GameCore::MunicipalChatNPCInfo* npcInfo; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _LoadChatConfig_b__0(::RPG::GameCore::MunicipalChatEntityInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MunicipalChatEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_2_28D22891565E4637___C__DISPLAYCLASS2_0__LOADCHATCONFIG_B__0_OFFSET))(this, a1);
	}
};
