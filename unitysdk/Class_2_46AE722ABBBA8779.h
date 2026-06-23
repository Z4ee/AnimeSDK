#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_89.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"

class Class_2_BAACDA6D506721D1;

#define CLASS_2_46AE722ABBBA8779_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13100D00)
#define CLASS_2_46AE722ABBBA8779_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x13100D10)
#define CLASS_2_46AE722ABBBA8779_METHOD_2_E29ABAB4DD4D3439_OFFSET UNITYSDK_OFFSET(0x13100BE0)
#define CLASS_2_46AE722ABBBA8779__CTOR_OFFSET UNITYSDK_OFFSET(0x13100B80)

inline static constexpr unsigned int Class_2_46AE722ABBBA8779_TypeDefinitionIndex = 64814;

class Class_2_46AE722ABBBA8779 : public ::Class_1_43BD383C98B4C0C5_89
{
public:
	::Class_2_BAACDA6D506721D1* Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46AE722ABBBA8779__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData Method_2_E29ABAB4DD4D3439(::MoleMole::NAPInput::IMUData a1)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + CLASS_2_46AE722ABBBA8779_METHOD_2_E29ABAB4DD4D3439_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46AE722ABBBA8779_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_46AE722ABBBA8779_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}
};
