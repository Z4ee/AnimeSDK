#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class DriftComponentData; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D5302483370BD7FF_METHOD_1_E19BD20D85758F6D_OFFSET UNITYSDK_OFFSET(0x142A0100)
#define CLASS_1_D5302483370BD7FF__CTOR_OFFSET UNITYSDK_OFFSET(0x142A0850)

inline static constexpr unsigned int Class_1_D5302483370BD7FF_TypeDefinitionIndex = 68871;

class Class_1_D5302483370BD7FF : public ::System::Object
{
public:
	::RPG::GameCore::DriftComponentData* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x24
	::System::Single Field_1_3; // 0x30
	::UnityEngine::Vector3 Field_1_4; // 0x34
	::UnityEngine::Vector3 Field_1_5; // 0x40
	::UnityEngine::Vector3 Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5302483370BD7FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E19BD20D85758F6D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D5302483370BD7FF_METHOD_1_E19BD20D85758F6D_OFFSET))(this, a1);
	}
};
