#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6AF265B57C1DDED9;
namespace RPG::Client { class GridFightDivisionListViewExtra; }

#define CLASS_1_13FE22FD43633245_ENTER_OFFSET UNITYSDK_OFFSET(0x1584FD90)
#define CLASS_1_13FE22FD43633245_EXIT_OFFSET UNITYSDK_OFFSET(0x15850310)
#define CLASS_1_13FE22FD43633245_TICK_OFFSET UNITYSDK_OFFSET(0x158500A0)
#define CLASS_1_13FE22FD43633245__CTOR_OFFSET UNITYSDK_OFFSET(0x15850350)

inline static constexpr unsigned int Class_1_13FE22FD43633245_TypeDefinitionIndex = 64455;

class Class_1_13FE22FD43633245 : public ::System::Object
{
public:
	::Class_1_6AF265B57C1DDED9* PGMIOKKLHIE; // 0x10
	::System::Int32 JCEMFJNEOND; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE22FD43633245__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_13FE22FD43633245_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_13FE22FD43633245_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE22FD43633245_EXIT_OFFSET))(this);
	}
};
