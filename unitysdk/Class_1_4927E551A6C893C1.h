#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_7ED05899B4F4C7F2;
class Class_1_ED80D3EC77F13F93;
class Class_1_F9FBCC956DFCF137_10;
namespace RPG::AvatarSystem { class Avatar; }

#define CLASS_1_4927E551A6C893C1_METHOD_1_5D4F3EB3A0A68849_OFFSET UNITYSDK_OFFSET(0x146B00B0)
#define CLASS_1_4927E551A6C893C1_METHOD_1_88F8314CB95582B1_OFFSET UNITYSDK_OFFSET(0x146AFF90)
#define CLASS_1_4927E551A6C893C1__CTOR_OFFSET UNITYSDK_OFFSET(0x146AFEB0)

inline static constexpr unsigned int Class_1_4927E551A6C893C1_TypeDefinitionIndex = 59775;

class Class_1_4927E551A6C893C1 : public ::System::Object
{
public:
	::Class_1_ED80D3EC77F13F93* Field_1_0; // 0x10
	::Class_1_7ED05899B4F4C7F2* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_F9FBCC956DFCF137_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_10*))((::PBYTE)hIl2Cpp + CLASS_1_4927E551A6C893C1__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Avatar* Method_1_88F8314CB95582B1(::Struct_2_AAD4F4215611A944& a1, ::System::UInt32 a2)
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4927E551A6C893C1_METHOD_1_88F8314CB95582B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5D4F3EB3A0A68849(::Struct_2_AAD4F4215611A944& a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4927E551A6C893C1_METHOD_1_5D4F3EB3A0A68849_OFFSET))(this, a1, a2);
	}
};
