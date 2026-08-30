#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Services_1.h"

class Class_1_07F3159234271541;
class Class_1_26B10E55247AB428;
class Class_1_3B1EA953A4067E26_1;
class Class_1_E17CC0467667494B;
class Class_2_C01BA129C3E40259;

#define CLASS_3_1ACADD354F8A3264_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B89B40)
#define CLASS_3_1ACADD354F8A3264__CTOR_OFFSET UNITYSDK_OFFSET(0x16B899B0)

inline static constexpr unsigned int Class_3_1ACADD354F8A3264_TypeDefinitionIndex = 75337;

class Class_3_1ACADD354F8A3264 : public ::RPG::Client::LittleGame::Services_1<::Class_2_C01BA129C3E40259*>
{
public:
	::Class_1_26B10E55247AB428* OAOLJJHOIOO; // 0x90
	::Class_1_E17CC0467667494B* JEMEGKOIGOC; // 0x98
	::Class_1_07F3159234271541* GGLIEKAILAN; // 0xA0
	::Class_1_3B1EA953A4067E26_1* FKINCGODJEP; // 0xA8

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + CLASS_3_1ACADD354F8A3264__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1ACADD354F8A3264_DISPOSE_OFFSET))(this);
	}
};
