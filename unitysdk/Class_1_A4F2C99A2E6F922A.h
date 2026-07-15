#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAreaConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_A4F2C99A2E6F922A_GET_ISENTERED_OFFSET UNITYSDK_OFFSET(0x183B1E50)
#define CLASS_1_A4F2C99A2E6F922A_METHOD_1_0619D137A62C3F76_OFFSET UNITYSDK_OFFSET(0x1504B650)
#define CLASS_1_A4F2C99A2E6F922A_METHOD_1_193E00E83BC3E6E8_OFFSET UNITYSDK_OFFSET(0x183B1F90)
#define CLASS_1_A4F2C99A2E6F922A_METHOD_1_3EA2E124EC6BB35D_OFFSET UNITYSDK_OFFSET(0x183B1E70)
#define CLASS_1_A4F2C99A2E6F922A_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x183B1CC0)
#define CLASS_1_A4F2C99A2E6F922A_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x183B1D80)
#define CLASS_1_A4F2C99A2E6F922A_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x183B1BF0)
#define CLASS_1_A4F2C99A2E6F922A_SET_ISENTERED_OFFSET UNITYSDK_OFFSET(0x183B1E60)
#define CLASS_1_A4F2C99A2E6F922A__CTOR_OFFSET UNITYSDK_OFFSET(0x1504B8B0)

inline static constexpr unsigned int Class_1_A4F2C99A2E6F922A_TypeDefinitionIndex = 74613;

class Class_1_A4F2C99A2E6F922A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::RPG::Client::Prop::DronesPuzzleAreaConfig Field_1_1; // 0x18
	::System::Action* Field_1_2; // 0x38
	::System::Boolean _IsEntered_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4F2C99A2E6F922A__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4F2C99A2E6F922A_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4F2C99A2E6F922A_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4F2C99A2E6F922A_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::System::Boolean get_IsEntered()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4F2C99A2E6F922A_GET_ISENTERED_OFFSET))(this);
	}

	::System::Void set_IsEntered(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A4F2C99A2E6F922A_SET_ISENTERED_OFFSET))(this, a1);
	}

	::System::Void Method_1_3EA2E124EC6BB35D(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A4F2C99A2E6F922A_METHOD_1_3EA2E124EC6BB35D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_193E00E83BC3E6E8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A4F2C99A2E6F922A_METHOD_1_193E00E83BC3E6E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_0619D137A62C3F76(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A4F2C99A2E6F922A_METHOD_1_0619D137A62C3F76_OFFSET))(this, a1);
	}
};
