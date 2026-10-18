#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define STRUCT_2_2AB745636FB526D5_METHOD_2_5C0AA221A18612A0_OFFSET UNITYSDK_OFFSET(0x2E781C0)
#define STRUCT_2_2AB745636FB526D5_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x2E78160)
#define STRUCT_2_2AB745636FB526D5_METHOD_2_A00EAD174EF85E42_1_OFFSET UNITYSDK_OFFSET(0x2E782A0)
#define STRUCT_2_2AB745636FB526D5_METHOD_2_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x2E78230)
#define STRUCT_2_2AB745636FB526D5__CTOR_OFFSET UNITYSDK_OFFSET(0xB310)

inline static constexpr unsigned int Struct_2_2AB745636FB526D5_TypeDefinitionIndex = 53519;

struct alignas(8) Struct_2_2AB745636FB526D5
{
	::Il2CppArray<::RPG::GameCore::GameEntity*>* JAPBDCBHCKN; // 0x10
	::Il2CppArray<::System::Boolean>* IBOPFHFMCPL; // 0x18
	::Il2CppArray<::System::Boolean>* JKFGHPCJKAE; // 0x20

	::System::Void _ctor(::Il2CppArray<::RPG::GameCore::GameEntity*>* a1, ::Il2CppArray<::System::Boolean>* a2, ::Il2CppArray<::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::GameEntity*>*, ::Il2CppArray<::System::Boolean>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + STRUCT_2_2AB745636FB526D5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2AB745636FB526D5_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_5C0AA221A18612A0(::System::Int32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_2AB745636FB526D5_METHOD_2_5C0AA221A18612A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_2AB745636FB526D5_METHOD_2_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A00EAD174EF85E42_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_2AB745636FB526D5_METHOD_2_A00EAD174EF85E42_1_OFFSET))(this, a1);
	}
};
