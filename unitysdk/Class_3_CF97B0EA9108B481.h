#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }

#define CLASS_3_CF97B0EA9108B481_METHOD_3_3AD4360E2346F7A3_OFFSET UNITYSDK_OFFSET(0x1C8FE790)
#define CLASS_3_CF97B0EA9108B481_METHOD_3_A2326BE0630DF75E_OFFSET UNITYSDK_OFFSET(0x1C8FE750)
#define CLASS_3_CF97B0EA9108B481__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FE780)

inline static constexpr unsigned int Class_3_CF97B0EA9108B481_TypeDefinitionIndex = 19698;

class Class_3_CF97B0EA9108B481 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* BJODJNFGMCB; // 0x18
	::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* LDCJONHGDAN; // 0x20
	::System::Boolean GNDCCBNILML; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF97B0EA9108B481__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A2326BE0630DF75E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CF97B0EA9108B481*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CF97B0EA9108B481*&))((::PBYTE)hIl2Cpp + CLASS_3_CF97B0EA9108B481_METHOD_3_A2326BE0630DF75E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3AD4360E2346F7A3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CF97B0EA9108B481* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CF97B0EA9108B481*))((::PBYTE)hIl2Cpp + CLASS_3_CF97B0EA9108B481_METHOD_3_3AD4360E2346F7A3_OFFSET))(a1, a2);
	}
};
