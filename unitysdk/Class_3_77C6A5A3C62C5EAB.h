#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateRinCaseBoardMoveBaseInfo; }

#define CLASS_3_77C6A5A3C62C5EAB_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x103CB700)
#define CLASS_3_77C6A5A3C62C5EAB_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x103CB6C0)
#define CLASS_3_77C6A5A3C62C5EAB__CTOR_OFFSET UNITYSDK_OFFSET(0x103CB6F0)

inline static constexpr unsigned int Class_3_77C6A5A3C62C5EAB_TypeDefinitionIndex = 19159;

class Class_3_77C6A5A3C62C5EAB : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FateRinCaseBoardMoveBaseInfo* Field_3_0; // 0x18
	::RPG::GameCore::FateRinCaseBoardTeamType Field_3_1; // 0x20
	::System::Single Field_3_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77C6A5A3C62C5EAB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_77C6A5A3C62C5EAB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_77C6A5A3C62C5EAB*&))((::PBYTE)hIl2Cpp + CLASS_3_77C6A5A3C62C5EAB_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_77C6A5A3C62C5EAB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_77C6A5A3C62C5EAB*))((::PBYTE)hIl2Cpp + CLASS_3_77C6A5A3C62C5EAB_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
