#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_688;

#define CLASS_1_F00B40DBB5A83F85_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x11B43470)
#define CLASS_1_F00B40DBB5A83F85_METHOD_1_6CF31E0925095FDB_OFFSET UNITYSDK_OFFSET(0x11B43480)
#define CLASS_1_F00B40DBB5A83F85_METHOD_1_9D7EBCEC8E689F99_OFFSET UNITYSDK_OFFSET(0x11B433C0)
#define CLASS_1_F00B40DBB5A83F85_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11B43410)
#define CLASS_1_F00B40DBB5A83F85_METHOD_1_CB75ACDC0FA33D41_OFFSET UNITYSDK_OFFSET(0x11B43300)
#define CLASS_1_F00B40DBB5A83F85_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x11B43420)
#define CLASS_1_F00B40DBB5A83F85__CTOR_OFFSET UNITYSDK_OFFSET(0x11B43250)

inline static constexpr unsigned int Class_1_F00B40DBB5A83F85_TypeDefinitionIndex = 78450;

class Class_1_F00B40DBB5A83F85 : public ::System::Object
{
public:
	::MoleMole::Config::SceneConfigRuntimeDataArea Field_1_1; // 0x10
	::Class_2_208CC9941471731A_688* Field_1_2; // 0x48
	::System::Int32 Field_1_0; // 0x50

	::System::Void _ctor(::Class_2_208CC9941471731A_688* a1, ::MoleMole::Config::SceneConfigRuntimeDataArea a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_688*, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CB75ACDC0FA33D41(::UnityEngine::Vector3 a1, ::System::Byte a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_CB75ACDC0FA33D41_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9D7EBCEC8E689F99(::System::Byte a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_9D7EBCEC8E689F99_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_688* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_208CC9941471731A_688*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::MoleMole::Config::SceneConfigRuntimeDataArea Method_1_6CF31E0925095FDB()
	{
		return ((::MoleMole::Config::SceneConfigRuntimeDataArea(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F00B40DBB5A83F85_METHOD_1_6CF31E0925095FDB_OFFSET))(this);
	}
};
