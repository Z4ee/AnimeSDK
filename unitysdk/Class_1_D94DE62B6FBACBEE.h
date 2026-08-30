#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_7ED05899B4F4C7F2;
class Class_1_B2F03AF2376A5DC0;
class Class_1_ED80D3EC77F13F93;
class Class_1_F9FBCC956DFCF137_15;
namespace RPG::AvatarSystem { class Avatar; }

#define CLASS_1_D94DE62B6FBACBEE_METHOD_1_AC0C818C000785AC_OFFSET UNITYSDK_OFFSET(0xE04E9B0)
#define CLASS_1_D94DE62B6FBACBEE_METHOD_1_DEF4B203C91449CF_OFFSET UNITYSDK_OFFSET(0xE04EAB0)
#define CLASS_1_D94DE62B6FBACBEE__CTOR_OFFSET UNITYSDK_OFFSET(0xE04E890)

inline static constexpr unsigned int Class_1_D94DE62B6FBACBEE_TypeDefinitionIndex = 62889;

class Class_1_D94DE62B6FBACBEE : public ::System::Object
{
public:
	::Class_1_B2F03AF2376A5DC0* IIGOMJPLLBD; // 0x10
	::Class_1_7ED05899B4F4C7F2* LIOJKFIGGIJ; // 0x18
	::Class_1_ED80D3EC77F13F93* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_1_B2F03AF2376A5DC0* a1, ::Class_1_F9FBCC956DFCF137_15* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B2F03AF2376A5DC0*, ::Class_1_F9FBCC956DFCF137_15*))((::PBYTE)hIl2Cpp + CLASS_1_D94DE62B6FBACBEE__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::Avatar* Method_1_AC0C818C000785AC(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_D94DE62B6FBACBEE_METHOD_1_AC0C818C000785AC_OFFSET))(this, a1);
	}

	::System::Void Method_1_DEF4B203C91449CF(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_D94DE62B6FBACBEE_METHOD_1_DEF4B203C91449CF_OFFSET))(this, a1);
	}
};
