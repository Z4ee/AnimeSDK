#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
class Class_1_53046032C589F545;
namespace RPG::Client { class GridFightTrait; }

#define CLASS_1_91E8EBCFBAEFD629_METHOD_1_CD53F45513A00C57_OFFSET UNITYSDK_OFFSET(0xB1F6F20)
#define CLASS_1_91E8EBCFBAEFD629_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xB1F6D40)
#define CLASS_1_91E8EBCFBAEFD629__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F6CA0)

inline static constexpr unsigned int Class_1_91E8EBCFBAEFD629_TypeDefinitionIndex = 60180;

class Class_1_91E8EBCFBAEFD629 : public ::System::Object
{
public:
	::Class_1_53046032C589F545* Field_1_0; // 0x10
	::RPG::Client::GridFightTrait* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_1_91E8EBCFBAEFD629__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91E8EBCFBAEFD629_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_663* Method_1_CD53F45513A00C57(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_663*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_91E8EBCFBAEFD629_METHOD_1_CD53F45513A00C57_OFFSET))(this, a1);
	}
};
