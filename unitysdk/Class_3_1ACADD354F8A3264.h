#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Services_1.h"

class Class_1_07F3159234271541;
class Class_1_3B1EA953A4067E26_1;
class Class_1_819B021DF635F679;
class Class_1_CBB89C7DD8FEA4EE;
class Class_2_7AF1D57CA4301272;

#define CLASS_3_1ACADD354F8A3264_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE465000)
#define CLASS_3_1ACADD354F8A3264__CTOR_OFFSET UNITYSDK_OFFSET(0xE464E70)
#define CLASS_3_1ACADD354F8A3264___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE465080)

inline static constexpr unsigned int Class_3_1ACADD354F8A3264_TypeDefinitionIndex = 61785;

class Class_3_1ACADD354F8A3264 : public ::RPG::Client::LittleGame::Services_1<::Class_2_7AF1D57CA4301272*>
{
public:
	::Class_1_07F3159234271541* Field_3_3; // 0x90
	::Class_1_819B021DF635F679* Field_3_2; // 0x98
	::Class_1_3B1EA953A4067E26_1* Field_3_0; // 0xA0
	::Class_1_CBB89C7DD8FEA4EE* Field_3_1; // 0xA8

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_1*))((::PBYTE)hIl2Cpp + CLASS_3_1ACADD354F8A3264__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1ACADD354F8A3264_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1ACADD354F8A3264___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
