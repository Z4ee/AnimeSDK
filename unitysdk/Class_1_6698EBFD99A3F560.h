#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/PerformMark.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_6698EBFD99A3F560_METHOD_1_2B6D9B0FD6D07F9B_OFFSET UNITYSDK_OFFSET(0x1D052640)
#define CLASS_1_6698EBFD99A3F560__CTOR_OFFSET UNITYSDK_OFFSET(0x1D052690)

inline static constexpr unsigned int Class_1_6698EBFD99A3F560_TypeDefinitionIndex = 40970;

class Class_1_6698EBFD99A3F560 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::Match3::PerformMark NCAMLFJOLML; // 0x10
	::System::UInt32 ONPIPJNFCDO; // 0x14
	::System::UInt32 FOPFDKNDOFL; // 0x18
	::System::Boolean AIAMHOBEECJ; // 0x1C
	::System::UInt32 DFEJABODPGM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6698EBFD99A3F560__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Method_1_2B6D9B0FD6D07F9B()
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6698EBFD99A3F560_METHOD_1_2B6D9B0FD6D07F9B_OFFSET))(this);
	}
};
