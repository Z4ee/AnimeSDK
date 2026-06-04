#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2C3A33FA5415278F_Class_1_A54E6FBADE2841E3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class PropCurveMoveStartMode_Circle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2C3A33FA5415278F_CLASS_2_19B72363F082EFAC_METHOD_2_0D3831AF94FA0C08_OFFSET UNITYSDK_OFFSET(0x141CB340)
#define CLASS_2_2C3A33FA5415278F_CLASS_2_19B72363F082EFAC_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x141CB2A0)
#define CLASS_2_2C3A33FA5415278F_CLASS_2_19B72363F082EFAC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141CB2F0)
#define CLASS_2_2C3A33FA5415278F_CLASS_2_19B72363F082EFAC_METHOD_2_CEED798A87AB1474_OFFSET UNITYSDK_OFFSET(0x141CAAD0)
#define CLASS_2_2C3A33FA5415278F_CLASS_2_19B72363F082EFAC__CTOR_OFFSET UNITYSDK_OFFSET(0x141CB760)

inline static constexpr unsigned int Class_2_2C3A33FA5415278F_Class_2_19B72363F082EFAC_TypeDefinitionIndex = 54507;

class Class_2_2C3A33FA5415278F_Class_2_19B72363F082EFAC : public ::Class_2_2C3A33FA5415278F_Class_1_A54E6FBADE2841E3
{
public:
	::RPG::GameCore::PropCurveMoveStartMode_Circle* Field_2_0; // 0x68
	::System::Single Field_2_1; // 0x70
	::System::Single Field_2_2; // 0x74
	::System::Single Field_2_3; // 0x78
	::System::Single Field_2_4; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_CLASS_2_19B72363F082EFAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CEED798A87AB1474(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveStartMode_Circle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveStartMode_Circle*))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_CLASS_2_19B72363F082EFAC_METHOD_2_CEED798A87AB1474_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_CLASS_2_19B72363F082EFAC_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_CLASS_2_19B72363F082EFAC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0D3831AF94FA0C08(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_CLASS_2_19B72363F082EFAC_METHOD_2_0D3831AF94FA0C08_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
