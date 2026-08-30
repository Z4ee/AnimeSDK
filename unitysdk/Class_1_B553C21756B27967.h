#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatStageFirstType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_4;
namespace System { class String; }

#define CLASS_1_B553C21756B27967_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x1CEFFD40)
#define CLASS_1_B553C21756B27967__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF00250)

inline static constexpr unsigned int Class_1_B553C21756B27967_TypeDefinitionIndex = 11286;

class Class_1_B553C21756B27967 : public ::System::Object
{
public:
	::System::String* KKKDCNECFDG; // 0x10
	::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_4*>* LCNHHDJNHPF; // 0x18
	::Il2CppArray<::System::UInt32>* EKMLKINHNOJ; // 0x20
	::System::String* AJJDAJLFNBP; // 0x28
	::Il2CppArray<::System::UInt32>* MBHMFMANFOJ; // 0x30
	::Il2CppArray<::System::UInt32>* ENHDOJLCADJ; // 0x38
	::Il2CppArray<::System::UInt32>* JDMNNJLANMI; // 0x40
	::System::UInt32 MPHLEBAPCOK; // 0x48
	::System::UInt32 PHFMCACHFIJ; // 0x4C
	::System::UInt32 NCNDBAIHDMC; // 0x50
	::RPG::GameCore::DiceCombatStageFirstType MMNJJHDBJCI; // 0x54
	::System::UInt32 OKDHOHKPEKK; // 0x58
	::System::UInt32 BFJDEHGEDFB; // 0x5C
	::System::UInt32 LIPCDDAPHNF; // 0x60
	::System::UInt32 DEAKHCBABDF; // 0x64
	::System::UInt32 HPIANKGODCK; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B553C21756B27967__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B553C21756B27967*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B553C21756B27967*&))((::PBYTE)hIl2Cpp + CLASS_1_B553C21756B27967_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};
