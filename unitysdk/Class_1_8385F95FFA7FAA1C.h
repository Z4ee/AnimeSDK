#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_107;
class Class_1_F684F955DBCEA1AB;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8385F95FFA7FAA1C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47F550)

inline static constexpr unsigned int Class_1_8385F95FFA7FAA1C_TypeDefinitionIndex = 41549;

class Class_1_8385F95FFA7FAA1C : public ::System::Object
{
public:
	::UnityEngine::GameObject* BOFGHEHAMKC; // 0x10
	::Class_1_F684F955DBCEA1AB* IJDAJGKLAKH; // 0x18
	::UnityEngine::Transform* NJGPHAIEOBP; // 0x20
	::Class_0_16E4307DCC419505_107* ODPDOBEGCOE; // 0x28
	::UnityEngine::GameObject* PBPHJKOGPBA; // 0x30
	::UnityEngine::Vector3 MBEHLMNAFKL; // 0x38
	::UnityEngine::Vector3 GFEOBHAAGJL; // 0x44
	::UnityEngine::Vector3 PGJPJLJOGFN; // 0x50
	::System::Boolean IJGHLLIBDKI; // 0x5C
	::UnityEngine::Quaternion GJMALPAMOAC; // 0x60
	::UnityEngine::Vector3 BNDDLHFKMPO; // 0x70
	::UnityEngine::Quaternion IJECOIOPNFN; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8385F95FFA7FAA1C__CTOR_OFFSET))(this);
	}
};
