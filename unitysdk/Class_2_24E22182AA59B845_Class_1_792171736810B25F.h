#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_94628D425BD62B3D;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_24E22182AA59B845_CLASS_1_792171736810B25F_METHOD_1_06A698F1A5143933_OFFSET UNITYSDK_OFFSET(0x15B920D0)
#define CLASS_2_24E22182AA59B845_CLASS_1_792171736810B25F__CTOR_OFFSET UNITYSDK_OFFSET(0x15B92140)

inline static constexpr unsigned int Class_2_24E22182AA59B845_Class_1_792171736810B25F_TypeDefinitionIndex = 71804;

class Class_2_24E22182AA59B845_Class_1_792171736810B25F : public ::System::Object
{
public:
	::Class_2_94628D425BD62B3D* HBLFBGPMNJH; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
	::System::Boolean PKLFLANJCDG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_CLASS_1_792171736810B25F__CTOR_OFFSET))(this);
	}

	static ::Class_2_24E22182AA59B845_Class_1_792171736810B25F* Method_1_06A698F1A5143933(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::Class_2_94628D425BD62B3D* a3)
	{
		return ((::Class_2_24E22182AA59B845_Class_1_792171736810B25F*(*)(::RPG::GameCore::GameEntity*, ::System::Boolean, ::Class_2_94628D425BD62B3D*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_CLASS_1_792171736810B25F_METHOD_1_06A698F1A5143933_OFFSET))(a1, a2, a3);
	}
};
