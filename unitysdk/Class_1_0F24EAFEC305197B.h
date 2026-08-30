#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_0F24EAFEC305197B_METHOD_1_5CC4255384CFB098_OFFSET UNITYSDK_OFFSET(0xBBFB0D0)
#define CLASS_1_0F24EAFEC305197B_METHOD_1_A306C9697DD477FE_1_OFFSET UNITYSDK_OFFSET(0xBBFACB0)
#define CLASS_1_0F24EAFEC305197B_METHOD_1_A306C9697DD477FE_OFFSET UNITYSDK_OFFSET(0xBBFA910)
#define CLASS_1_0F24EAFEC305197B_METHOD_1_E2E71AD285D5962D_1_OFFSET UNITYSDK_OFFSET(0xBBFADD0)
#define CLASS_1_0F24EAFEC305197B_METHOD_1_E2E71AD285D5962D_OFFSET UNITYSDK_OFFSET(0xBBFAA30)
#define CLASS_1_0F24EAFEC305197B_METHOD_1_F47C2E600A3E6D92_OFFSET UNITYSDK_OFFSET(0xBBFAE80)
#define CLASS_1_0F24EAFEC305197B_METHOD_1_F88DB2783BB43746_OFFSET UNITYSDK_OFFSET(0xBBFAAE0)
#define CLASS_1_0F24EAFEC305197B__CTOR_OFFSET UNITYSDK_OFFSET(0xBBFB440)

inline static constexpr unsigned int Class_1_0F24EAFEC305197B_TypeDefinitionIndex = 57854;

class Class_1_0F24EAFEC305197B : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x18
	::Class_1_5F51D4049EA87B7B* GODIODIIBNC; // 0x20
	::System::Boolean BDLAKIDPLHB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F24EAFEC305197B__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_A306C9697DD477FE()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F24EAFEC305197B_METHOD_1_A306C9697DD477FE_OFFSET))(this);
	}

	::System::Void Method_1_E2E71AD285D5962D(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0F24EAFEC305197B_METHOD_1_E2E71AD285D5962D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F88DB2783BB43746(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F24EAFEC305197B_METHOD_1_F88DB2783BB43746_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_A306C9697DD477FE_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F24EAFEC305197B_METHOD_1_A306C9697DD477FE_1_OFFSET))(this);
	}

	::System::Void Method_1_E2E71AD285D5962D_1(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0F24EAFEC305197B_METHOD_1_E2E71AD285D5962D_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F47C2E600A3E6D92(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0F24EAFEC305197B_METHOD_1_F47C2E600A3E6D92_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CC4255384CFB098(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_0F24EAFEC305197B_METHOD_1_5CC4255384CFB098_OFFSET))(this, a1, a2);
	}
};
