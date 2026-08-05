#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_275;

#define CLASS_1_F00B40DBB5A83F85_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1AC1F5F0)
#define CLASS_1_F00B40DBB5A83F85_METHOD_1_6CF31E0925095FDB_OFFSET UNITYSDK_OFFSET(0x1AC1F5C0)
#define CLASS_1_F00B40DBB5A83F85_METHOD_1_9D7EBCEC8E689F99_OFFSET UNITYSDK_OFFSET(0x1AC1F560)
#define CLASS_1_F00B40DBB5A83F85_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1AC1F5B0)
#define CLASS_1_F00B40DBB5A83F85_METHOD_1_CB75ACDC0FA33D41_OFFSET UNITYSDK_OFFSET(0x1AC1F4A0)
#define CLASS_1_F00B40DBB5A83F85_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x1AC1F450)
#define CLASS_1_F00B40DBB5A83F85__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1F390)

inline static constexpr unsigned int Class_1_F00B40DBB5A83F85_TypeDefinitionIndex = 74511;

class Class_1_F00B40DBB5A83F85 : public ::System::Object
{
public:
	::MoleMole::Config::SceneConfigRuntimeDataArea Field_1_1; // 0x10
	::Class_2_208CC9941471731A_275* Field_1_0; // 0x58
	::System::Int32 Field_1_2; // 0x60

	::System::Void _ctor(::Class_2_208CC9941471731A_275* a1, ::MoleMole::Config::SceneConfigRuntimeDataArea a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_275*, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CB75ACDC0FA33D41(::UnityEngine::Vector3 a1, ::System::Byte a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_CB75ACDC0FA33D41_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_9D7EBCEC8E689F99(::System::Byte a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_9D7EBCEC8E689F99_OFFSET))(this, a1);
	}

	::MoleMole::Config::SceneConfigRuntimeDataArea Method_1_6CF31E0925095FDB()
	{
		return ((::MoleMole::Config::SceneConfigRuntimeDataArea(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_6CF31E0925095FDB_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_275* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_208CC9941471731A_275*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}
};
