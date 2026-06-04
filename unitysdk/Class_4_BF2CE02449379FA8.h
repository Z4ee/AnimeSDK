#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_301046E588A5ED6C.h"

class Class_1_0D98CBE9A89A1626;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_4_BF2CE02449379FA8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143C3B80)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x143C3BD0)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_1DDD10252C795DC3_OFFSET UNITYSDK_OFFSET(0x143C41A0)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x143C3C40)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_41F5D9C0F0A306F5_OFFSET UNITYSDK_OFFSET(0x143C3EA0)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_932BC234D35144E8_OFFSET UNITYSDK_OFFSET(0x143C4190)
#define CLASS_4_BF2CE02449379FA8_METHOD_4_D482406D6CA3D371_OFFSET UNITYSDK_OFFSET(0x143C4120)
#define CLASS_4_BF2CE02449379FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x143C3B70)
#define CLASS_4_BF2CE02449379FA8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143C4180)

inline static constexpr unsigned int Class_4_BF2CE02449379FA8_TypeDefinitionIndex = 73399;

class Class_4_BF2CE02449379FA8 : public ::Class_3_301046E588A5ED6C
{
public:
	::Class_1_0D98CBE9A89A1626* Field_4_0; // 0xE8
	::System::Int32 Field_4_1; // 0xF0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_4_097468641FDED14E(::Class_1_0D98CBE9A89A1626* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D98CBE9A89A1626*))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_4_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_4_41F5D9C0F0A306F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_41F5D9C0F0A306F5_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* Method_4_D482406D6CA3D371()
	{
		return ((::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_D482406D6CA3D371_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_4_932BC234D35144E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_932BC234D35144E8_OFFSET))(this);
	}

	::System::Void Method_4_1DDD10252C795DC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BF2CE02449379FA8_METHOD_4_1DDD10252C795DC3_OFFSET))(this);
	}
};
