#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C58549E83E2A95B6;
class Class_1_C891149273D7CFB5;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_9BA88018AC303C05_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC298D00)
#define CLASS_1_9BA88018AC303C05_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC298D60)
#define CLASS_1_9BA88018AC303C05_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC297E10)
#define CLASS_1_9BA88018AC303C05_METHOD_1_A536C0A3C82A1588_OFFSET UNITYSDK_OFFSET(0xC297EA0)
#define CLASS_1_9BA88018AC303C05_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xC297DC0)
#define CLASS_1_9BA88018AC303C05_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC298D70)
#define CLASS_1_9BA88018AC303C05__CTOR_OFFSET UNITYSDK_OFFSET(0xC297D70)

inline static constexpr unsigned int Class_1_9BA88018AC303C05_TypeDefinitionIndex = 57059;

class Class_1_9BA88018AC303C05 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* NKFFPBJJBCE; // 0x10
	::Class_1_C58549E83E2A95B6* PBOBGOFNGMH; // 0x18
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x20
	::Il2CppArray<::System::Single>* FKKOAHGDFID; // 0x28
	::Class_1_C891149273D7CFB5* NMDGJILDMLO; // 0x30
	::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x38
	::System::Boolean _IsActive_k__BackingField; // 0x40
	::System::Boolean HDJOGGDMCIO; // 0x41
	::System::Single HBCJEGADKGF; // 0x44
	::UnityEngine::Vector3 GHHCEKAKAAO; // 0x48
	::System::Single JMKACDADNGI; // 0x54
	::UnityEngine::Vector3 OIMMGKNHKOA; // 0x58

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05__CTOR_OFFSET))(this, a1);
	}

	::Class_1_C891149273D7CFB5* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_C891149273D7CFB5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_A536C0A3C82A1588(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_METHOD_1_A536C0A3C82A1588_OFFSET))(this, a1);
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
