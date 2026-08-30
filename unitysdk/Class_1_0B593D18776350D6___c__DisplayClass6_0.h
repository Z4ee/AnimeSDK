#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E754E66360B8422F;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarData; }

#define CLASS_1_0B593D18776350D6___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1609CBF0)
#define CLASS_1_0B593D18776350D6___C__DISPLAYCLASS6_0__GETBACKUPCHARACTERDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x1609EA40)

inline static constexpr unsigned int Class_1_0B593D18776350D6___c__DisplayClass6_0_TypeDefinitionIndex = 73174;

class Class_1_0B593D18776350D6___c__DisplayClass6_0 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* avatarInfo; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B593D18776350D6___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetBackupCharacterDataList_b__0(::Class_1_E754E66360B8422F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E754E66360B8422F*))((::PBYTE)hIl2Cpp + CLASS_1_0B593D18776350D6___C__DISPLAYCLASS6_0__GETBACKUPCHARACTERDATALIST_B__0_OFFSET))(this, a1);
	}
};
