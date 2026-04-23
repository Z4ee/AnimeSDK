#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
class Class_1_53046032C589F545;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_BBF620797152C03F_1_METHOD_1_CD53F45513A00C57_OFFSET UNITYSDK_OFFSET(0x11E2D610)
#define CLASS_1_BBF620797152C03F_1_METHOD_1_DD39C4DB3CC4FFB9_OFFSET UNITYSDK_OFFSET(0x11E2D0B0)
#define CLASS_1_BBF620797152C03F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11E2D010)

inline static constexpr unsigned int Class_1_BBF620797152C03F_1_TypeDefinitionIndex = 60481;

class Class_1_BBF620797152C03F_1 : public ::System::Object
{
public:
	::RPG::Client::AvatarData* Field_1_0; // 0x10
	::Class_1_53046032C589F545* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_BBF620797152C03F_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD39C4DB3CC4FFB9(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_BBF620797152C03F_1_METHOD_1_DD39C4DB3CC4FFB9_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_663* Method_1_CD53F45513A00C57(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_663*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_BBF620797152C03F_1_METHOD_1_CD53F45513A00C57_OFFSET))(this, a1);
	}
};
