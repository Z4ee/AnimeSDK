#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
class Class_1_53046032C589F545;
namespace RPG::Client { class GridFightElationTraitEquipComponent; }

#define CLASS_1_6C06189B998616EF_METHOD_1_92F85D4296A9ADDA_OFFSET UNITYSDK_OFFSET(0x98A4720)
#define CLASS_1_6C06189B998616EF_METHOD_1_CD53F45513A00C57_OFFSET UNITYSDK_OFFSET(0x98A4BF0)
#define CLASS_1_6C06189B998616EF__CTOR_OFFSET UNITYSDK_OFFSET(0x98A4680)

inline static constexpr unsigned int Class_1_6C06189B998616EF_TypeDefinitionIndex = 60199;

class Class_1_6C06189B998616EF : public ::System::Object
{
public:
	::Class_1_53046032C589F545* Field_1_1; // 0x10
	::RPG::Client::GridFightElationTraitEquipComponent* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightElationTraitEquipComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightElationTraitEquipComponent*))((::PBYTE)hIl2Cpp + CLASS_1_6C06189B998616EF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_92F85D4296A9ADDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C06189B998616EF_METHOD_1_92F85D4296A9ADDA_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_663* Method_1_CD53F45513A00C57(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_663*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_6C06189B998616EF_METHOD_1_CD53F45513A00C57_OFFSET))(this, a1);
	}
};
