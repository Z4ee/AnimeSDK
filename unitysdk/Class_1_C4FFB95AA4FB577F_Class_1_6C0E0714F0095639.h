#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PassTagID.h"

class Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5;
class Class_1_C4FFB95AA4FB577F_Class_2_99B26405A94B246A;
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_6C0E0714F0095639_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C5CAA0)
#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_6C0E0714F0095639_METHOD_1_71D214D117B5E0AB_OFFSET UNITYSDK_OFFSET(0x8C63BD0)
#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_6C0E0714F0095639_METHOD_1_C34B4C47377170EE_OFFSET UNITYSDK_OFFSET(0x8C63E40)
#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_6C0E0714F0095639__CTOR_OFFSET UNITYSDK_OFFSET(0x8C5CEF0)

inline static constexpr unsigned int Class_1_C4FFB95AA4FB577F_Class_1_6C0E0714F0095639_TypeDefinitionIndex = 48781;

class Class_1_C4FFB95AA4FB577F_Class_1_6C0E0714F0095639 : public ::System::Object
{
public:
	::Class_1_C4FFB95AA4FB577F_Class_2_99B26405A94B246A* Field_1_6; // 0x10
	::UnityEngine::PassTagID Field_1_9; // 0x18
	::UnityEngine::Material* Field_1_8; // 0x28
	::RPG::Client::Stage* Field_1_3; // 0x30
	::System::String* Field_1_4; // 0x38
	::RPG::Client::OpenWorld::StreamingItemData* Field_1_5; // 0x40
	::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5* Field_1_2; // 0x48
	::System::Boolean Field_1_7; // 0x50
	::System::UInt32 Field_1_0; // 0x54
	::System::UInt32 Field_1_1; // 0x58

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5* a3, ::System::String* a4, ::RPG::Client::Stage* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_C4FFB95AA4FB577F_Class_1_B52E7EEAD91759F5*, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_6C0E0714F0095639__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_6C0E0714F0095639_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_71D214D117B5E0AB(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_6C0E0714F0095639_METHOD_1_71D214D117B5E0AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C34B4C47377170EE(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_6C0E0714F0095639_METHOD_1_C34B4C47377170EE_OFFSET))(this, a1, a2);
	}
};
