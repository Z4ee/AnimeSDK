#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_6C2797E3349B53EE;
class Class_1_70CCABA9DB985F52;
class Class_1_827373C1CEDFE355;
class Class_1_E44054C0F1A43C8E;
class Class_3_024B137FE9F1BACE;
class Class_3_E21F6DE9B7FA4D05;
class Class_3_FF2A8DD2F301029E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }

#define CLASS_3_819847F49C75958F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11827E80)
#define CLASS_3_819847F49C75958F_METHOD_3_0A282DBD30957E74_OFFSET UNITYSDK_OFFSET(0x1182B5F0)
#define CLASS_3_819847F49C75958F_METHOD_3_0D5CE3E3924D0BD3_OFFSET UNITYSDK_OFFSET(0x11828FE0)
#define CLASS_3_819847F49C75958F_METHOD_3_65324A1A6069CDD4_1_OFFSET UNITYSDK_OFFSET(0x11828D50)
#define CLASS_3_819847F49C75958F_METHOD_3_65324A1A6069CDD4_OFFSET UNITYSDK_OFFSET(0x11828AC0)
#define CLASS_3_819847F49C75958F_METHOD_3_74AD2DD72ED8B503_OFFSET UNITYSDK_OFFSET(0x11828250)
#define CLASS_3_819847F49C75958F_METHOD_3_A13D9F81794740B9_OFFSET UNITYSDK_OFFSET(0x1182B4F0)
#define CLASS_3_819847F49C75958F_METHOD_3_B2ED2F232F5144AC_OFFSET UNITYSDK_OFFSET(0x11829CA0)
#define CLASS_3_819847F49C75958F_METHOD_3_B382522CC13B676F_OFFSET UNITYSDK_OFFSET(0x1182A6C0)
#define CLASS_3_819847F49C75958F_METHOD_3_D771BE8AB5C2CE52_OFFSET UNITYSDK_OFFSET(0x1182A020)
#define CLASS_3_819847F49C75958F_METHOD_3_D971CA6BF75CCEBD_OFFSET UNITYSDK_OFFSET(0x1182ACE0)
#define CLASS_3_819847F49C75958F_METHOD_3_F80C4BFD8FE4FC63_OFFSET UNITYSDK_OFFSET(0x1182B180)
#define CLASS_3_819847F49C75958F_METHOD_3_FF0BC42E0F670651_OFFSET UNITYSDK_OFFSET(0x1182BE60)
#define CLASS_3_819847F49C75958F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11827EC0)
#define CLASS_3_819847F49C75958F__CTOR_OFFSET UNITYSDK_OFFSET(0x11827D50)
#define CLASS_3_819847F49C75958F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1182C080)

inline static constexpr unsigned int Class_3_819847F49C75958F_TypeDefinitionIndex = 49634;

class Class_3_819847F49C75958F : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FF2A8DD2F301029E*>
{
public:
	::Class_1_827373C1CEDFE355* Field_3_1; // 0x28
	::Class_1_E44054C0F1A43C8E* Field_3_0; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FF2A8DD2F301029E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FF2A8DD2F301029E*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_74AD2DD72ED8B503(::Class_1_6C2797E3349B53EE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C2797E3349B53EE*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_74AD2DD72ED8B503_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0D5CE3E3924D0BD3(::RPG::GameCore::TaskContext* a1, ::Class_3_FF2A8DD2F301029E* a2, ::Class_1_70CCABA9DB985F52* a3, ::Class_3_024B137FE9F1BACE* a4, ::Class_3_024B137FE9F1BACE* a5, ::RPG::GameCore::GameEntity* a6, ::RPG::GameCore::GameEntity* a7, ::RPG::GameCore::GameEntity* a8, ::System::Boolean a9, ::Class_3_E21F6DE9B7FA4D05* a10)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FF2A8DD2F301029E*, ::Class_1_70CCABA9DB985F52*, ::Class_3_024B137FE9F1BACE*, ::Class_3_024B137FE9F1BACE*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::Class_3_E21F6DE9B7FA4D05*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_0D5CE3E3924D0BD3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_3_B382522CC13B676F(::Class_1_70CCABA9DB985F52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_B382522CC13B676F_OFFSET))(this, a1);
	}

	::System::Void Method_3_D771BE8AB5C2CE52(::Class_1_70CCABA9DB985F52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_D771BE8AB5C2CE52_OFFSET))(this, a1);
	}

	::System::Void Method_3_65324A1A6069CDD4(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_70CCABA9DB985F52* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_65324A1A6069CDD4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_65324A1A6069CDD4_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_70CCABA9DB985F52* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_65324A1A6069CDD4_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_D971CA6BF75CCEBD(::Class_3_024B137FE9F1BACE* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_70CCABA9DB985F52* a3, ::Class_3_E21F6DE9B7FA4D05* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_024B137FE9F1BACE*, ::RPG::GameCore::GameEntity*, ::Class_1_70CCABA9DB985F52*, ::Class_3_E21F6DE9B7FA4D05*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_D971CA6BF75CCEBD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_F80C4BFD8FE4FC63(::Class_3_024B137FE9F1BACE* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_70CCABA9DB985F52* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_024B137FE9F1BACE*, ::RPG::GameCore::GameEntity*, ::Class_1_70CCABA9DB985F52*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_F80C4BFD8FE4FC63_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_3_B2ED2F232F5144AC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_FF2A8DD2F301029E* a4, ::Class_1_70CCABA9DB985F52* a5, ::RPG::GameCore::TaskContext* a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_FF2A8DD2F301029E*, ::Class_1_70CCABA9DB985F52*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_B2ED2F232F5144AC_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_0A282DBD30957E74(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::RtAttackData* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtAttackData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_0A282DBD30957E74_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_A13D9F81794740B9(::Class_3_FF2A8DD2F301029E* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Boolean a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::Class_3_FF2A8DD2F301029E*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_A13D9F81794740B9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_FF0BC42E0F670651(::System::Single a1, ::RPG::GameCore::GameEntity* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::Single, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F_METHOD_3_FF0BC42E0F670651_OFFSET))(a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_819847F49C75958F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
