#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2C3A33FA5415278F_Class_1_A54E6FBADE2841E3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class PropCurveMoveStartMode_Normal; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2C3A33FA5415278F_CLASS_2_608FDF3A89521BB0_METHOD_2_34E2987AFB79CE8C_OFFSET UNITYSDK_OFFSET(0x141CCE10)
#define CLASS_2_2C3A33FA5415278F_CLASS_2_608FDF3A89521BB0_METHOD_2_8F2217245CD5B67A_OFFSET UNITYSDK_OFFSET(0x141CA6F0)
#define CLASS_2_2C3A33FA5415278F_CLASS_2_608FDF3A89521BB0_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x141CCD70)
#define CLASS_2_2C3A33FA5415278F_CLASS_2_608FDF3A89521BB0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141CCDC0)
#define CLASS_2_2C3A33FA5415278F_CLASS_2_608FDF3A89521BB0__CTOR_OFFSET UNITYSDK_OFFSET(0x141CD060)

inline static constexpr unsigned int Class_2_2C3A33FA5415278F_Class_2_608FDF3A89521BB0_TypeDefinitionIndex = 54505;

class Class_2_2C3A33FA5415278F_Class_2_608FDF3A89521BB0 : public ::Class_2_2C3A33FA5415278F_Class_1_A54E6FBADE2841E3
{
public:
	::RPG::GameCore::PropCurveMoveStartMode_Normal* Field_2_0; // 0x68
	::System::Single Field_2_1; // 0x70
	::System::Single Field_2_2; // 0x74
	::System::Single Field_2_3; // 0x78
	::System::Single Field_2_4; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_CLASS_2_608FDF3A89521BB0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8F2217245CD5B67A(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveStartMode_Normal* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveStartMode_Normal*))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_CLASS_2_608FDF3A89521BB0_METHOD_2_8F2217245CD5B67A_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_CLASS_2_608FDF3A89521BB0_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_CLASS_2_608FDF3A89521BB0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_34E2987AFB79CE8C(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_CLASS_2_608FDF3A89521BB0_METHOD_2_34E2987AFB79CE8C_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
