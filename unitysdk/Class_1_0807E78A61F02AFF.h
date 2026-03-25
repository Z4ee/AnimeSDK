#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelUIComponent; }

#define CLASS_1_0807E78A61F02AFF_METHOD_1_1A56B0D03D5F32CE_OFFSET UNITYSDK_OFFSET(0x114EBB80)
#define CLASS_1_0807E78A61F02AFF_METHOD_1_3AA20A0DA6990FBE_OFFSET UNITYSDK_OFFSET(0x114EBE30)
#define CLASS_1_0807E78A61F02AFF_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x114EBC40)
#define CLASS_1_0807E78A61F02AFF_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x114EC010)
#define CLASS_1_0807E78A61F02AFF_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x114EBCB0)
#define CLASS_1_0807E78A61F02AFF_METHOD_1_A77870C566864FEA_OFFSET UNITYSDK_OFFSET(0x114EBD30)
#define CLASS_1_0807E78A61F02AFF__CTOR_OFFSET UNITYSDK_OFFSET(0x114EC9E0)

inline static constexpr unsigned int Class_1_0807E78A61F02AFF_TypeDefinitionIndex = 59275;

class Class_1_0807E78A61F02AFF : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* Field_1_1; // 0x10
	::RPG::GameCore::LevelUIComponent* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0807E78A61F02AFF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1A56B0D03D5F32CE(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_0807E78A61F02AFF_METHOD_1_1A56B0D03D5F32CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0807E78A61F02AFF_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0807E78A61F02AFF_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_A77870C566864FEA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0807E78A61F02AFF_METHOD_1_A77870C566864FEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_3AA20A0DA6990FBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0807E78A61F02AFF_METHOD_1_3AA20A0DA6990FBE_OFFSET))(this);
	}

	::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0807E78A61F02AFF_METHOD_1_8DC652D916C182B2_OFFSET))(this);
	}
};
