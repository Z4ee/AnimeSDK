#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
class Class_1_53046032C589F545;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define CLASS_1_E571E77F7CFFE25B_METHOD_1_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x118D43B0)
#define CLASS_1_E571E77F7CFFE25B_METHOD_1_CD53F45513A00C57_OFFSET UNITYSDK_OFFSET(0x118D47E0)
#define CLASS_1_E571E77F7CFFE25B__CTOR_OFFSET UNITYSDK_OFFSET(0x118D4310)

inline static constexpr unsigned int Class_1_E571E77F7CFFE25B_TypeDefinitionIndex = 60200;

class Class_1_E571E77F7CFFE25B : public ::System::Object
{
public:
	::Class_1_53046032C589F545* Field_1_0; // 0x10
	::RPG::Client::GridFightTraitElationEffect* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + CLASS_1_E571E77F7CFFE25B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E571E77F7CFFE25B_METHOD_1_C9A3013DD208C696_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_663* Method_1_CD53F45513A00C57(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_663*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_E571E77F7CFFE25B_METHOD_1_CD53F45513A00C57_OFFSET))(this, a1);
	}
};
