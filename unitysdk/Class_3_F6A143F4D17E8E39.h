#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeathSource.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_F6A143F4D17E8E39_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1D004AC0)
#define CLASS_3_F6A143F4D17E8E39_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1D004B10)
#define CLASS_3_F6A143F4D17E8E39__CTOR_OFFSET UNITYSDK_OFFSET(0x1D004B00)

inline static constexpr unsigned int Class_3_F6A143F4D17E8E39_TypeDefinitionIndex = 23850;

class Class_3_F6A143F4D17E8E39 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* MDKGHHJBLOI; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::DeathSource HFELBILEHNM; // 0x28
	::System::Boolean FMPDLMMILBG; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6A143F4D17E8E39__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F6A143F4D17E8E39*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F6A143F4D17E8E39*&))((::PBYTE)hIl2Cpp + CLASS_3_F6A143F4D17E8E39_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F6A143F4D17E8E39* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F6A143F4D17E8E39*))((::PBYTE)hIl2Cpp + CLASS_3_F6A143F4D17E8E39_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
