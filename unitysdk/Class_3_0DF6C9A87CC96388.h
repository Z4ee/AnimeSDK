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

#define CLASS_3_0DF6C9A87CC96388_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144D9EF0)
#define CLASS_3_0DF6C9A87CC96388_METHOD_3_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0x144DA290)
#define CLASS_3_0DF6C9A87CC96388_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x144DA200)
#define CLASS_3_0DF6C9A87CC96388_METHOD_3_E460F04F840ABD8A_OFFSET UNITYSDK_OFFSET(0x144DA570)
#define CLASS_3_0DF6C9A87CC96388_METHOD_3_FEA1EEC3F4BFC189_OFFSET UNITYSDK_OFFSET(0x144DA050)
#define CLASS_3_0DF6C9A87CC96388_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144D9F40)
#define CLASS_3_0DF6C9A87CC96388_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x144DA2E0)
#define CLASS_3_0DF6C9A87CC96388_TICK_OFFSET UNITYSDK_OFFSET(0x144DA380)
#define CLASS_3_0DF6C9A87CC96388__CCTOR_OFFSET UNITYSDK_OFFSET(0x144DA640)
#define CLASS_3_0DF6C9A87CC96388__CTOR_OFFSET UNITYSDK_OFFSET(0x144D9E90)
#define CLASS_3_0DF6C9A87CC96388___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144DA650)
#define CLASS_3_0DF6C9A87CC96388___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x144DA6A0)

inline static constexpr unsigned int Class_3_0DF6C9A87CC96388_TypeDefinitionIndex = 48825;

class Class_3_0DF6C9A87CC96388 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Patrol*>
{
public:
	static ::System::Single* StaticGet_Field_3_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_0DF6C9A87CC96388_TypeDefinitionIndex)->GetStaticField(0xD220);
	}
	::Class_2_A0580152EB393340* Field_3_1; // 0x28
	::Class_2_19E76B515E7B257C* Field_3_2; // 0x30
	::RPG::GameCore::AdventureAbilityComponent* Field_3_3; // 0x38
	::System::Single Field_3_4; // 0x40

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

	::RPG::GameCore::CharacterMotionFlag Method_3_E460F04F840ABD8A()
	{
		return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388_METHOD_3_E460F04F840ABD8A_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0DF6C9A87CC96388___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
