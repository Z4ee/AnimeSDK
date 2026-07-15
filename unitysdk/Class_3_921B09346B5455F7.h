#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillUIState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_921B09346B5455F7_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1B5C4710)
#define CLASS_3_921B09346B5455F7_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1B5C4750)
#define CLASS_3_921B09346B5455F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C4740)

inline static constexpr unsigned int Class_3_921B09346B5455F7_TypeDefinitionIndex = 22331;

class Class_3_921B09346B5455F7 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::SilverWolf999UltraSkillUIState Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_921B09346B5455F7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_921B09346B5455F7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_921B09346B5455F7*&))((::PBYTE)hIl2Cpp + CLASS_3_921B09346B5455F7_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_921B09346B5455F7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_921B09346B5455F7*))((::PBYTE)hIl2Cpp + CLASS_3_921B09346B5455F7_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
