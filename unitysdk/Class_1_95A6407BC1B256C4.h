#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
class Class_1_53046032C589F545;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define CLASS_1_95A6407BC1B256C4_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x129ECF80)
#define CLASS_1_95A6407BC1B256C4_METHOD_1_CD53F45513A00C57_OFFSET UNITYSDK_OFFSET(0x129ED0F0)
#define CLASS_1_95A6407BC1B256C4__CTOR_OFFSET UNITYSDK_OFFSET(0x129ECEE0)

inline static constexpr unsigned int Class_1_95A6407BC1B256C4_TypeDefinitionIndex = 60201;

class Class_1_95A6407BC1B256C4 : public ::System::Object
{
public:
	::RPG::Client::GridFightTraitElationEffect* Field_1_1; // 0x10
	::Class_1_53046032C589F545* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + CLASS_1_95A6407BC1B256C4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95A6407BC1B256C4_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_663* Method_1_CD53F45513A00C57(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_663*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_95A6407BC1B256C4_METHOD_1_CD53F45513A00C57_OFFSET))(this, a1);
	}
};
