#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_101;
namespace System { class String; }

#define CLASS_1_6E6FEE1E26FFD7A8__CTOR_OFFSET UNITYSDK_OFFSET(0x18DACFE0)

inline static constexpr unsigned int Class_1_6E6FEE1E26FFD7A8_TypeDefinitionIndex = 40268;

class Class_1_6E6FEE1E26FFD7A8 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::Class_1_43BD383C98B4C0C5_101*>* Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x2C
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x40
	::UnityEngine::Vector3 Field_1_7; // 0x44
	::UnityEngine::Quaternion Field_1_8; // 0x50
	::System::Int32 Field_1_9; // 0x60
	::RPG::GameCore::FixPoint Field_1_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E6FEE1E26FFD7A8__CTOR_OFFSET))(this);
	}
};
