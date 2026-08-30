#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4A1D8F97E22D5A98;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_64366539469BA2FE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1621B650)
#define CLASS_3_64366539469BA2FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1621B620)

inline static constexpr unsigned int Class_3_64366539469BA2FE_TypeDefinitionIndex = 55052;

class Class_3_64366539469BA2FE : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4A1D8F97E22D5A98*>
{
public:
	::Il2CppArray<::System::String*>* BFNJPDOPJLE; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4A1D8F97E22D5A98* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4A1D8F97E22D5A98*))((::PBYTE)hIl2Cpp + CLASS_3_64366539469BA2FE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64366539469BA2FE_ONTASKBEGIN_OFFSET))(this);
	}
};
