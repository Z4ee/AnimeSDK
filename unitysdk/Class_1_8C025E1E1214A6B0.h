#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_7ED05899B4F4C7F2;
class Class_1_ED80D3EC77F13F93;
class Class_1_F9FBCC956DFCF137_12;
namespace RPG::AvatarSystem { class Avatar; }

#define CLASS_1_8C025E1E1214A6B0_METHOD_1_AD49540C72EBA43A_OFFSET UNITYSDK_OFFSET(0xC0EB590)
#define CLASS_1_8C025E1E1214A6B0_METHOD_1_CDE023F3FCEADF9A_OFFSET UNITYSDK_OFFSET(0xC0EB470)
#define CLASS_1_8C025E1E1214A6B0__CTOR_OFFSET UNITYSDK_OFFSET(0xC0EB390)

inline static constexpr unsigned int Class_1_8C025E1E1214A6B0_TypeDefinitionIndex = 62686;

class Class_1_8C025E1E1214A6B0 : public ::System::Object
{
public:
	::Class_1_ED80D3EC77F13F93* EEFMDEHLLFI; // 0x10
	::Class_1_7ED05899B4F4C7F2* LIOJKFIGGIJ; // 0x18

	::System::Void _ctor(::Class_1_F9FBCC956DFCF137_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_12*))((::PBYTE)hIl2Cpp + CLASS_1_8C025E1E1214A6B0__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Avatar* Method_1_CDE023F3FCEADF9A(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_8C025E1E1214A6B0_METHOD_1_CDE023F3FCEADF9A_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Avatar* Method_1_AD49540C72EBA43A(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_8C025E1E1214A6B0_METHOD_1_AD49540C72EBA43A_OFFSET))(this, a1);
	}
};
