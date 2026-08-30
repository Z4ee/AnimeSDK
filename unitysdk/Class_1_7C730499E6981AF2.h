#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class CharacterInputData; }

#define CLASS_1_7C730499E6981AF2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1306AAB0)
#define CLASS_1_7C730499E6981AF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1306AB10)

inline static constexpr unsigned int Class_1_7C730499E6981AF2_TypeDefinitionIndex = 57267;

class Class_1_7C730499E6981AF2 : public ::System::Object
{
public:
	::RPG::GameCore::CharacterInputData* IEALNDAHMBG; // 0x10
	::UnityEngine::Vector3 GABNHNIMFIB; // 0x18
	::UnityEngine::RaycastHit NAFAJIMJFEL; // 0x24
	::System::Boolean KNIDMFAAIFN; // 0x54
	::System::Boolean LCEIFCIKKAN; // 0x55
	::System::Boolean OPOKHGOBMDI; // 0x56
	::UnityEngine::Vector3 OAKCBDDKNKL; // 0x58
	::UnityEngine::Quaternion HGLBGLANIIO; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C730499E6981AF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C730499E6981AF2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
