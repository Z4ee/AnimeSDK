#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B36CB1F1D5FEB799_4;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_F67472AB575CAD5E_CLASS_1_E79766713E2BB8FD__CTOR_OFFSET UNITYSDK_OFFSET(0x12393320)

inline static constexpr unsigned int Class_3_F67472AB575CAD5E_Class_1_E79766713E2BB8FD_TypeDefinitionIndex = 41847;

class Class_3_F67472AB575CAD5E_Class_1_E79766713E2BB8FD : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::Class_3_B36CB1F1D5FEB799_4* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_CLASS_1_E79766713E2BB8FD__CTOR_OFFSET))(this);
	}
};
