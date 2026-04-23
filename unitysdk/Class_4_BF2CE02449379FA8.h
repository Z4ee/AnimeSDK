#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_301046E588A5ED6C.h"

class Class_1_3919EFEDE4A62579;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_4_BF2CE02449379FA8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E2A1D0)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x9E2A220)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_0BC5386E06CF8A2C_OFFSET UNITYSDK_OFFSET(0x9E2A290)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x9E2A370)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_1FB03302975E8E7C_OFFSET UNITYSDK_OFFSET(0x9E2A4E0)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_81DF0D29B17D9CF4_OFFSET UNITYSDK_OFFSET(0x9E2A4D0)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_D482406D6CA3D371_OFFSET UNITYSDK_OFFSET(0x9E2A460)
#define CLASS_4_BF2CE02449379FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x9E2A1C0)
#define CLASS_4_BF2CE02449379FA8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E2A4C0)

inline static constexpr unsigned int Class_4_BF2CE02449379FA8_TypeDefinitionIndex = 72377;

class Class_4_BF2CE02449379FA8 : public ::Class_3_301046E588A5ED6C
{
public:
	::Class_1_3919EFEDE4A62579* Field_4_1; // 0xE8
	::System::Int32 Field_4_0; // 0xF0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_4_097468641FDED14E(::Class_1_3919EFEDE4A62579* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3919EFEDE4A62579*))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_4_0BC5386E06CF8A2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_0BC5386E06CF8A2C_OFFSET))(this);
	}

	::System::Void Method_4_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_17BD30EFE8176014_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* Method_4_D482406D6CA3D371()
	{
		return ((::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_D482406D6CA3D371_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_4_81DF0D29B17D9CF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_81DF0D29B17D9CF4_OFFSET))(this);
	}

	::System::Void Method_4_1FB03302975E8E7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_1FB03302975E8E7C_OFFSET))(this);
	}
};
