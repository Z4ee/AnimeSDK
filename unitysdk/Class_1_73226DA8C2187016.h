#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_7624D9FDB0907477;
class Class_1_A278AA6264F2673F;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraControlConfig; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_73226DA8C2187016_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18158690)
#define CLASS_1_73226DA8C2187016_METHOD_1_1E991A40F7081803_OFFSET UNITYSDK_OFFSET(0x181587B0)
#define CLASS_1_73226DA8C2187016_METHOD_1_9C25D81B36F50A81_OFFSET UNITYSDK_OFFSET(0x18158C70)
#define CLASS_1_73226DA8C2187016_METHOD_1_A4CE2154DAB122DB_OFFSET UNITYSDK_OFFSET(0x18158790)
#define CLASS_1_73226DA8C2187016_METHOD_1_DFEA80256A97C1C4_OFFSET UNITYSDK_OFFSET(0x181587D0)
#define CLASS_1_73226DA8C2187016_METHOD_1_EF4ADC28D204C0FC_OFFSET UNITYSDK_OFFSET(0x18158B80)
#define CLASS_1_73226DA8C2187016_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x18158CF0)
#define CLASS_1_73226DA8C2187016_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18158B60)
#define CLASS_1_73226DA8C2187016_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x18158B40)
#define CLASS_1_73226DA8C2187016__CTOR_OFFSET UNITYSDK_OFFSET(0x18158500)

inline static constexpr unsigned int Class_1_73226DA8C2187016_TypeDefinitionIndex = 66154;

class Class_1_73226DA8C2187016 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::Class_1_A278AA6264F2673F* Field_1_3; // 0x10
	::Class_1_7624D9FDB0907477* Field_1_2; // 0x18
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::MoleMole::Photo::ScopedFirstPersonCameraControlConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Photo::ScopedFirstPersonCameraControlConfig*))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A4CE2154DAB122DB(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_A4CE2154DAB122DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1E991A40F7081803(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_1E991A40F7081803_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFEA80256A97C1C4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_DFEA80256A97C1C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_EF4ADC28D204C0FC()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_EF4ADC28D204C0FC_OFFSET))(this);
	}

	::System::Void Method_1_9C25D81B36F50A81(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_9C25D81B36F50A81_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}
};
