#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_2A73EE3831056054_CLEAR_OFFSET UNITYSDK_OFFSET(0x10629A90)
#define CLASS_1_2A73EE3831056054_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10629B40)
#define CLASS_1_2A73EE3831056054_METHOD_1_52804E4B82A420D0_OFFSET UNITYSDK_OFFSET(0x10629AE0)
#define CLASS_1_2A73EE3831056054_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10629A80)
#define CLASS_1_2A73EE3831056054__CTOR_OFFSET UNITYSDK_OFFSET(0x10629BA0)

inline static constexpr unsigned int Class_1_2A73EE3831056054_TypeDefinitionIndex = 46620;

class Class_1_2A73EE3831056054 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A73EE3831056054__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A73EE3831056054_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A73EE3831056054_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_52804E4B82A420D0(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2A73EE3831056054_METHOD_1_52804E4B82A420D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A73EE3831056054_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}
};
