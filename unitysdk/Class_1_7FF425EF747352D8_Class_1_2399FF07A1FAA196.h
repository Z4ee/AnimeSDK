#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBulletTracingData; }
namespace System { class Action; }

#define CLASS_1_7FF425EF747352D8_CLASS_1_2399FF07A1FAA196_METHOD_1_6B8804508895B94C_OFFSET UNITYSDK_OFFSET(0x14924330)
#define CLASS_1_7FF425EF747352D8_CLASS_1_2399FF07A1FAA196__CTOR_OFFSET UNITYSDK_OFFSET(0x14924320)

inline static constexpr unsigned int Class_1_7FF425EF747352D8_Class_1_2399FF07A1FAA196_TypeDefinitionIndex = 51283;

class Class_1_7FF425EF747352D8_Class_1_2399FF07A1FAA196 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_2399FF07A1FAA196__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6B8804508895B94C(::MoleMole::ConfigBulletTracingData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBulletTracingData*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_2399FF07A1FAA196_METHOD_1_6B8804508895B94C_OFFSET))(this, a1);
	}
};
