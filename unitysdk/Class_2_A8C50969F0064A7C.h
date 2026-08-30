#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class Object; }

#define CLASS_2_A8C50969F0064A7C_METHOD_2_1908B442124B40FB_OFFSET UNITYSDK_OFFSET(0x16EBFAB0)
#define CLASS_2_A8C50969F0064A7C__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x16EBF990)
#define CLASS_2_A8C50969F0064A7C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EBFB40)

inline static constexpr unsigned int Class_2_A8C50969F0064A7C_TypeDefinitionIndex = 63592;

class Class_2_A8C50969F0064A7C : public ::RPG::Client::BaseModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8C50969F0064A7C__CTOR_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8C50969F0064A7C__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_1908B442124B40FB(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A8C50969F0064A7C_METHOD_2_1908B442124B40FB_OFFSET))(this, a1, a2);
	}
};
