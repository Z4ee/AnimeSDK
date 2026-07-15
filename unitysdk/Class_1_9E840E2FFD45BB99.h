#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_641;
class Class_0_16E4307DCC419505_738;
class Class_0_16E4307DCC419505_739;
class Class_0_16E4307DCC419505_757;
class Class_1_B2F03AF2376A5DC0;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_9E840E2FFD45BB99_METHOD_1_2C04590334865B65_OFFSET UNITYSDK_OFFSET(0x14539150)
#define CLASS_1_9E840E2FFD45BB99_METHOD_1_7CAB5C6D21576B48_OFFSET UNITYSDK_OFFSET(0x145393F0)
#define CLASS_1_9E840E2FFD45BB99_METHOD_1_DEF6873E260E105E_OFFSET UNITYSDK_OFFSET(0x14539250)
#define CLASS_1_9E840E2FFD45BB99__CTOR_OFFSET UNITYSDK_OFFSET(0x14539010)

inline static constexpr unsigned int Class_1_9E840E2FFD45BB99_TypeDefinitionIndex = 60051;

class Class_1_9E840E2FFD45BB99 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_739* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_641* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_738* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_757* Field_1_3; // 0x28
	::Class_1_B2F03AF2376A5DC0* Field_1_4; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_739* a1, ::Class_1_B2F03AF2376A5DC0* a2, ::Class_0_16E4307DCC419505_641* a3, ::Class_0_16E4307DCC419505_757* a4, ::Class_0_16E4307DCC419505_738* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_739*, ::Class_1_B2F03AF2376A5DC0*, ::Class_0_16E4307DCC419505_641*, ::Class_0_16E4307DCC419505_757*, ::Class_0_16E4307DCC419505_738*))((::PBYTE)hIl2Cpp + CLASS_1_9E840E2FFD45BB99__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_2C04590334865B65(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E840E2FFD45BB99_METHOD_1_2C04590334865B65_OFFSET))(this, a1, a2);
	}

	::Struct_2_AAD4F4215611A944 Method_1_DEF6873E260E105E(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::Struct_2_AAD4F4215611A944(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E840E2FFD45BB99_METHOD_1_DEF6873E260E105E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_7CAB5C6D21576B48(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_9E840E2FFD45BB99_METHOD_1_7CAB5C6D21576B48_OFFSET))(this, a1);
	}
};
