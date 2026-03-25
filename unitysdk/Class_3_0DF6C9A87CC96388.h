#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_19E76B515E7B257C;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_Patrol; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0DF6C9A87CC96388_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA446BE0)
#define CLASS_3_0DF6C9A87CC96388_METHOD_3_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xA446F60)
#define CLASS_3_0DF6C9A87CC96388_METHOD_3_7AFDBF811FBF265E_OFFSET UNITYSDK_OFFSET(0xA447240)
#define CLASS_3_0DF6C9A87CC96388_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA446ED0)
#define CLASS_3_0DF6C9A87CC96388_METHOD_3_FEA1EEC3F4BFC189_OFFSET UNITYSDK_OFFSET(0xA446D40)
#define CLASS_3_0DF6C9A87CC96388_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA446C30)
#define CLASS_3_0DF6C9A87CC96388_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA446FB0)
#define CLASS_3_0DF6C9A87CC96388_TICK_OFFSET UNITYSDK_OFFSET(0xA447050)
#define CLASS_3_0DF6C9A87CC96388__CCTOR_OFFSET UNITYSDK_OFFSET(0xA447300)
#define CLASS_3_0DF6C9A87CC96388__CTOR_OFFSET UNITYSDK_OFFSET(0xA446B80)
#define CLASS_3_0DF6C9A87CC96388___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA447310)
#define CLASS_3_0DF6C9A87CC96388___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA447360)

inline static constexpr unsigned int Class_3_0DF6C9A87CC96388_TypeDefinitionIndex = 42241;

class Class_3_0DF6C9A87CC96388 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Patrol*>
{
public:
	static ::System::Single* StaticGet_Field_3_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_0DF6C9A87CC96388_TypeDefinitionIndex)->GetStaticField(0x12D50);
	}
	::Class_2_A0580152EB393340* Field_3_1; // 0x28
	::RPG::GameCore::AdventureAbilityComponent* Field_3_4; // 0x30
	::Class_2_19E76B515E7B257C* Field_3_0; // 0x38
	::System::Single Field_3_2; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Patrol* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Patrol*))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388_METHOD_3_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_FEA1EEC3F4BFC189(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388_METHOD_3_FEA1EEC3F4BFC189_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterMotionFlag Method_3_7AFDBF811FBF265E()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388_METHOD_3_7AFDBF811FBF265E_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
