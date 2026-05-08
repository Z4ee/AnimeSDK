#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_943E95074A489718_CLASS_1_6E4419B6E2B2F348_METHOD_1_323A963656E34238_OFFSET UNITYSDK_OFFSET(0x11877DE0)
#define CLASS_3_943E95074A489718_CLASS_1_6E4419B6E2B2F348__CTOR_OFFSET UNITYSDK_OFFSET(0x118754A0)

inline static constexpr unsigned int Class_3_943E95074A489718_Class_1_6E4419B6E2B2F348_TypeDefinitionIndex = 64932;

class Class_3_943E95074A489718_Class_1_6E4419B6E2B2F348 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_CLASS_1_6E4419B6E2B2F348__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_323A963656E34238(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_943E95074A489718_CLASS_1_6E4419B6E2B2F348_METHOD_1_323A963656E34238_OFFSET))(this, a1);
	}
};
