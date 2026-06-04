#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_69CD1289148E652B_METHOD_1_8B7CCF33805E1F05_OFFSET UNITYSDK_OFFSET(0x142149F0)
#define CLASS_1_69CD1289148E652B__CTOR_OFFSET UNITYSDK_OFFSET(0x142221E0)

inline static constexpr unsigned int Class_1_69CD1289148E652B_TypeDefinitionIndex = 56974;

class Class_1_69CD1289148E652B : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::RPG::Client::WorldShiftingReason Field_1_2; // 0x24
	::UnityEngine::Quaternion Field_1_3; // 0x28
	::UnityEngine::Quaternion Field_1_4; // 0x38
	::UnityEngine::Vector3 Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69CD1289148E652B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8B7CCF33805E1F05(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Quaternion& a4, ::RPG::Client::WorldShiftingReason& a5, ::System::Object*& a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::RPG::Client::WorldShiftingReason&, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_69CD1289148E652B_METHOD_1_8B7CCF33805E1F05_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
