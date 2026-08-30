#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PassTagID.h"

class Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA;
class Class_1_C15D42F68202F156_Class_2_99B26405A94B246A;
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_1_C15D42F68202F156_CLASS_1_14ADBF370EE33914_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1569E860)
#define CLASS_1_C15D42F68202F156_CLASS_1_14ADBF370EE33914_METHOD_1_71D214D117B5E0AB_OFFSET UNITYSDK_OFFSET(0x156A41E0)
#define CLASS_1_C15D42F68202F156_CLASS_1_14ADBF370EE33914_METHOD_1_C34B4C47377170EE_OFFSET UNITYSDK_OFFSET(0x156A4450)
#define CLASS_1_C15D42F68202F156_CLASS_1_14ADBF370EE33914__CTOR_OFFSET UNITYSDK_OFFSET(0x1569EFB0)

inline static constexpr unsigned int Class_1_C15D42F68202F156_Class_1_14ADBF370EE33914_TypeDefinitionIndex = 60352;

class Class_1_C15D42F68202F156_Class_1_14ADBF370EE33914 : public ::System::Object
{
public:
	::UnityEngine::Material* IMOHCDHKBAJ; // 0x10
	::System::String* BDACPPLKLGL; // 0x18
	::Class_1_C15D42F68202F156_Class_2_99B26405A94B246A* POOGHHFHIAN; // 0x20
	::RPG::Client::OpenWorld::StreamingItemData* BGFPGNDIOII; // 0x28
	::UnityEngine::PassTagID NMJHGJGNJEH; // 0x30
	::RPG::Client::Stage* PPANBKDPFFK; // 0x40
	::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA* MIPCILCJBMP; // 0x48
	::System::Boolean ALDHKBIELOG; // 0x50
	::System::UInt32 FMLGGKAFMKC; // 0x54
	::System::UInt32 CMNOEFFFNPE; // 0x58

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA* a3, ::System::String* a4, ::RPG::Client::Stage* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_C15D42F68202F156_Class_1_ED591F162BC733AA*, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_CLASS_1_14ADBF370EE33914__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_CLASS_1_14ADBF370EE33914_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_71D214D117B5E0AB(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_CLASS_1_14ADBF370EE33914_METHOD_1_71D214D117B5E0AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C34B4C47377170EE(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_1_C15D42F68202F156_CLASS_1_14ADBF370EE33914_METHOD_1_C34B4C47377170EE_OFFSET))(this, a1, a2);
	}
};
