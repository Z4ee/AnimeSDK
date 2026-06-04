#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2EB1F8F44CF44F1F;
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_73E4C050E769F406_METHOD_1_515532DD37B179A7_OFFSET UNITYSDK_OFFSET(0xBF32B60)
#define CLASS_1_73E4C050E769F406_METHOD_1_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0xBF32EB0)
#define CLASS_1_73E4C050E769F406_METHOD_1_92F06F6AE7B67C06_OFFSET UNITYSDK_OFFSET(0xBF32BC0)
#define CLASS_1_73E4C050E769F406__CTOR_OFFSET UNITYSDK_OFFSET(0xBF32FB0)

inline static constexpr unsigned int Class_1_73E4C050E769F406_TypeDefinitionIndex = 66963;

class Class_1_73E4C050E769F406 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2EB1F8F44CF44F1F*>* Field_1_0; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73E4C050E769F406__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_515532DD37B179A7(::RPG::Client::UIController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_73E4C050E769F406_METHOD_1_515532DD37B179A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_92F06F6AE7B67C06(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_73E4C050E769F406_METHOD_1_92F06F6AE7B67C06_OFFSET))(this, a1);
	}

	::System::Void Method_1_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73E4C050E769F406_METHOD_1_78C62398E94F0FB1_OFFSET))(this);
	}
};
