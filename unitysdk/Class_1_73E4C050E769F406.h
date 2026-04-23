#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2EB1F8F44CF44F1F;
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_73E4C050E769F406_METHOD_1_515532DD37B179A7_OFFSET UNITYSDK_OFFSET(0x12A83780)
#define CLASS_1_73E4C050E769F406_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x12A83A20)
#define CLASS_1_73E4C050E769F406_METHOD_1_EF57318118F8380B_OFFSET UNITYSDK_OFFSET(0x12A837E0)
#define CLASS_1_73E4C050E769F406__CTOR_OFFSET UNITYSDK_OFFSET(0x12A83B00)

inline static constexpr unsigned int Class_1_73E4C050E769F406_TypeDefinitionIndex = 66030;

class Class_1_73E4C050E769F406 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_2EB1F8F44CF44F1F*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73E4C050E769F406__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_515532DD37B179A7(::RPG::Client::UIController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_73E4C050E769F406_METHOD_1_515532DD37B179A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EF57318118F8380B(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_73E4C050E769F406_METHOD_1_EF57318118F8380B_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73E4C050E769F406_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
