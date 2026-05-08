#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_3C7A2C6347C7498B;
class Class_1_7624D9FDB0907477;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraControlConfig; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_73226DA8C2187016_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D0DE80)
#define CLASS_1_73226DA8C2187016_METHOD_1_3363D89E03193669_OFFSET UNITYSDK_OFFSET(0x14D0E0F0)
#define CLASS_1_73226DA8C2187016_METHOD_1_63EBDE57BAB70085_OFFSET UNITYSDK_OFFSET(0x14D0E090)
#define CLASS_1_73226DA8C2187016_METHOD_1_B3AE6F32204AC5DE_OFFSET UNITYSDK_OFFSET(0x14D0E110)
#define CLASS_1_73226DA8C2187016_METHOD_1_D22B628A0B0EF318_OFFSET UNITYSDK_OFFSET(0x14D0E0D0)
#define CLASS_1_73226DA8C2187016_METHOD_1_DFEA80256A97C1C4_OFFSET UNITYSDK_OFFSET(0x14D0E190)
#define CLASS_1_73226DA8C2187016_METHOD_1_EF4ADC28D204C0FC_OFFSET UNITYSDK_OFFSET(0x14D0DF80)
#define CLASS_1_73226DA8C2187016_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x14D0E0B0)
#define CLASS_1_73226DA8C2187016_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x14D0E070)
#define CLASS_1_73226DA8C2187016__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0DCF0)

inline static constexpr unsigned int Class_1_73226DA8C2187016_TypeDefinitionIndex = 43549;

class Class_1_73226DA8C2187016 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_3; // 0x0
	::Class_1_7624D9FDB0907477* Field_1_1; // 0x10
	::System::Action* Field_1_2; // 0x18
	::Class_1_3C7A2C6347C7498B* Field_1_0; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::MoleMole::Photo::ScopedFirstPersonCameraControlConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Photo::ScopedFirstPersonCameraControlConfig*))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_EF4ADC28D204C0FC()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_EF4ADC28D204C0FC_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_63EBDE57BAB70085(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_63EBDE57BAB70085_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Void Method_1_D22B628A0B0EF318(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_D22B628A0B0EF318_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3363D89E03193669()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_3363D89E03193669_OFFSET))(this);
	}

	::System::Void Method_1_B3AE6F32204AC5DE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_B3AE6F32204AC5DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFEA80256A97C1C4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_73226DA8C2187016_METHOD_1_DFEA80256A97C1C4_OFFSET))(this, a1);
	}
};
