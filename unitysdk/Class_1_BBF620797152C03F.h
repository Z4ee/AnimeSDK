#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;
class Class_1_53046032C589F545;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_BBF620797152C03F_METHOD_1_CD53F45513A00C57_OFFSET UNITYSDK_OFFSET(0xB275420)
#define CLASS_1_BBF620797152C03F_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xB275180)
#define CLASS_1_BBF620797152C03F__CTOR_OFFSET UNITYSDK_OFFSET(0xB2750E0)

inline static constexpr unsigned int Class_1_BBF620797152C03F_TypeDefinitionIndex = 50774;

class Class_1_BBF620797152C03F : public ::System::Object
{
public:
	::Class_1_53046032C589F545* Field_1_1; // 0x10
	::RPG::Client::AvatarData* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_BBF620797152C03F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBF620797152C03F_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_573* Method_1_CD53F45513A00C57(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_BBF620797152C03F_METHOD_1_CD53F45513A00C57_OFFSET))(this, a1);
	}
};
