#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/PerformMark.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_6698EBFD99A3F560_METHOD_1_2B6D9B0FD6D07F9B_OFFSET UNITYSDK_OFFSET(0x1757E9E0)
#define CLASS_1_6698EBFD99A3F560__CTOR_OFFSET UNITYSDK_OFFSET(0x1757EA20)

inline static constexpr unsigned int Class_1_6698EBFD99A3F560_TypeDefinitionIndex = 40091;

class Class_1_6698EBFD99A3F560 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::RPG::Client::LittleGame::Match3::PerformMark Field_1_3; // 0x1C
	::System::Boolean Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6698EBFD99A3F560__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Method_1_2B6D9B0FD6D07F9B()
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6698EBFD99A3F560_METHOD_1_2B6D9B0FD6D07F9B_OFFSET))(this);
	}
};
