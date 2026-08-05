#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5203B7D603EEC4F6;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_F67472AB575CAD5E_CLASS_1_E79766713E2BB8FD__CTOR_OFFSET UNITYSDK_OFFSET(0xF0A3760)

inline static constexpr unsigned int Class_3_F67472AB575CAD5E_Class_1_E79766713E2BB8FD_TypeDefinitionIndex = 44214;

class Class_3_F67472AB575CAD5E_Class_1_E79766713E2BB8FD : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::Class_3_5203B7D603EEC4F6* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_CLASS_1_E79766713E2BB8FD__CTOR_OFFSET))(this);
	}
};
