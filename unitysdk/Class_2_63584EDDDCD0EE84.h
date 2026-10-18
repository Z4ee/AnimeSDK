#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class BattleMonsterSingleBlockData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_63584EDDDCD0EE84_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB1429E0)
#define CLASS_2_63584EDDDCD0EE84_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB142A30)
#define CLASS_2_63584EDDDCD0EE84_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0xB142830)
#define CLASS_2_63584EDDDCD0EE84_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xB1428D0)
#define CLASS_2_63584EDDDCD0EE84_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xB142710)
#define CLASS_2_63584EDDDCD0EE84_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xB142770)
#define CLASS_2_63584EDDDCD0EE84__CTOR_OFFSET UNITYSDK_OFFSET(0xB142A70)

inline static constexpr unsigned int Class_2_63584EDDDCD0EE84_TypeDefinitionIndex = 71765;

class Class_2_63584EDDDCD0EE84 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::RPG::Client::BattleMonsterSingleBlockData* APPIHABBCGK; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63584EDDDCD0EE84__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_63584EDDDCD0EE84_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63584EDDDCD0EE84_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63584EDDDCD0EE84_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63584EDDDCD0EE84_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63584EDDDCD0EE84_GET_INDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63584EDDDCD0EE84_GET_TRANS_OFFSET))(this);
	}
};
