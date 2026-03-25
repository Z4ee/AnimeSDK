#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionToType.h"
#include "unitysdk/RPG/GameCore/StateTreeTransitionTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_0597192E98B9E538;
class Class_1_8A3C2FE068793E61;
class Class_1_B3B75743231343E7;
namespace RPG::GameCore { class StateTreeTransitionConfig; }
namespace System { class String; }

#define CLASS_1_EC119E9B713C3132_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165AE730)
#define CLASS_1_EC119E9B713C3132_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x165E9CA0)
#define CLASS_1_EC119E9B713C3132_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x165E9C80)
#define CLASS_1_EC119E9B713C3132_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x165E9990)
#define CLASS_1_EC119E9B713C3132_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x165E9CB0)
#define CLASS_1_EC119E9B713C3132_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x165E9AC0)
#define CLASS_1_EC119E9B713C3132_METHOD_1_58281F8DD6185AEB_OFFSET UNITYSDK_OFFSET(0x165E9C60)
#define CLASS_1_EC119E9B713C3132_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x165E9870)
#define CLASS_1_EC119E9B713C3132_METHOD_1_D8E3D6C72BC9AE7A_OFFSET UNITYSDK_OFFSET(0x165E9C40)
#define CLASS_1_EC119E9B713C3132_METHOD_1_E86FC7A4043E5205_OFFSET UNITYSDK_OFFSET(0x165E99F0)
#define CLASS_1_EC119E9B713C3132_METHOD_1_FC9926C19FB6003D_OFFSET UNITYSDK_OFFSET(0x165E98E0)
#define CLASS_1_EC119E9B713C3132__CTOR_OFFSET UNITYSDK_OFFSET(0x165AEA60)

inline static constexpr unsigned int Class_1_EC119E9B713C3132_TypeDefinitionIndex = 28746;

class Class_1_EC119E9B713C3132 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::RPG::GameCore::StateTreeTransitionConfig* Field_1_2; // 0x18
	::Class_1_B3B75743231343E7* Field_1_1; // 0x20
	::Class_1_8A3C2FE068793E61* Field_1_3; // 0x28
	::Class_1_0597192E98B9E538* Field_1_4; // 0x30
	::System::Single Field_1_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::StateTreeTransitionConfig* a1, ::Class_1_8A3C2FE068793E61* a2, ::Class_1_B3B75743231343E7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeTransitionConfig*, ::Class_1_8A3C2FE068793E61*, ::Class_1_B3B75743231343E7*))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_FC9926C19FB6003D(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_FC9926C19FB6003D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_E86FC7A4043E5205(::RPG::Client::LittleGameShare::TaskState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TaskState))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_E86FC7A4043E5205_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::RPG::GameCore::StateTreeTransitionTriggerType Method_1_D8E3D6C72BC9AE7A()
	{
		return ((::RPG::GameCore::StateTreeTransitionTriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_D8E3D6C72BC9AE7A_OFFSET))(this);
	}

	::RPG::GameCore::StateTreeTransitionToType Method_1_58281F8DD6185AEB()
	{
		return ((::RPG::GameCore::StateTreeTransitionToType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_58281F8DD6185AEB_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::Class_1_B3B75743231343E7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B3B75743231343E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC119E9B713C3132_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
