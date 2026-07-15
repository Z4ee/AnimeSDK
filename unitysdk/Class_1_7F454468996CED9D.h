#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PedestrianMemberExternalConfig_Floating; }

#define CLASS_1_7F454468996CED9D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16044B50)
#define CLASS_1_7F454468996CED9D_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x16044C20)
#define CLASS_1_7F454468996CED9D_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x16044BA0)
#define CLASS_1_7F454468996CED9D__CTOR_OFFSET UNITYSDK_OFFSET(0x16044AF0)

inline static constexpr unsigned int Class_1_7F454468996CED9D_TypeDefinitionIndex = 66182;

class Class_1_7F454468996CED9D : public ::System::Object
{
public:
	::RPG::Client::PedestrianMemberExternalConfig_Floating* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C

	::System::Void _ctor(::RPG::Client::PedestrianMemberExternalConfig_Floating* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_Floating*))((::PBYTE)hIl2Cpp + CLASS_1_7F454468996CED9D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F454468996CED9D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7F454468996CED9D_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F454468996CED9D_METHOD_1_124E7DAB85EAFECD_OFFSET))(this);
	}
};
