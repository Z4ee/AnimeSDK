#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C58549E83E2A95B6;
class Class_1_F1C57540A2293C7F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_9BA88018AC303C05_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF4AD80)
#define CLASS_1_9BA88018AC303C05_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xAF4ADE0)
#define CLASS_1_9BA88018AC303C05_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xAF4A000)
#define CLASS_1_9BA88018AC303C05_METHOD_1_A576F328C56C105D_OFFSET UNITYSDK_OFFSET(0xAF4A0E0)
#define CLASS_1_9BA88018AC303C05_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xAF49FB0)
#define CLASS_1_9BA88018AC303C05_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xAF4ADF0)
#define CLASS_1_9BA88018AC303C05__CTOR_OFFSET UNITYSDK_OFFSET(0xAF49F60)

inline static constexpr unsigned int Class_1_9BA88018AC303C05_TypeDefinitionIndex = 53290;

class Class_1_9BA88018AC303C05 : public ::System::Object
{
public:
	::RPG::GameCore::TransformComponent* Field_1_0; // 0x10
	::Il2CppArray<::System::Single>* Field_1_1; // 0x18
	::Class_1_C58549E83E2A95B6* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::Il2CppArray<::System::Single>* Field_1_4; // 0x30
	::Class_1_F1C57540A2293C7F* Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x44
	::System::Boolean _IsActive_k__BackingField; // 0x45
	::UnityEngine::Vector3 Field_1_9; // 0x48
	::System::Single Field_1_10; // 0x54
	::UnityEngine::Vector3 Field_1_11; // 0x58

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05__CTOR_OFFSET))(this, a1);
	}

	::Class_1_F1C57540A2293C7F* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F1C57540A2293C7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_A576F328C56C105D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_METHOD_1_A576F328C56C105D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_SET_ISACTIVE_OFFSET))(this, a1);
	}
};
