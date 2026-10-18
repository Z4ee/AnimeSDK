#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIDragSource; }

#define CLASS_1_DCF8BD91C05E4BD7_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB1FFB20)
#define CLASS_1_DCF8BD91C05E4BD7__CTOR_OFFSET UNITYSDK_OFFSET(0xB1FFB30)

inline static constexpr unsigned int Class_1_DCF8BD91C05E4BD7_TypeDefinitionIndex = 73063;

class Class_1_DCF8BD91C05E4BD7 : public ::System::Object
{
public:
	::RPG::Client::UIDragSource* _Source_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::UIDragSource* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*))((::PBYTE)hIl2Cpp + CLASS_1_DCF8BD91C05E4BD7__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::UIDragSource* get_Source()
	{
		return ((::RPG::Client::UIDragSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCF8BD91C05E4BD7_GET_SOURCE_OFFSET))(this);
	}
};
