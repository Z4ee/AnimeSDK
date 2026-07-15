#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1059;
class Class_1_67A6A140E0E4C4AD;
class Class_1_9CAA42EF32347EE5_4;
class Class_2_7447B11B52391E1E;
namespace RPG::GameCore { class BattleInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_D295639E6E543152_METHOD_2_173B4412467E28D4_OFFSET UNITYSDK_OFFSET(0x162D21D0)
#define CLASS_2_D295639E6E543152_METHOD_2_1E0EA1AC7E2D9526_OFFSET UNITYSDK_OFFSET(0x162D26D0)
#define CLASS_2_D295639E6E543152_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x162D20F0)
#define CLASS_2_D295639E6E543152_METHOD_2_76BC5C4B914F2482_OFFSET UNITYSDK_OFFSET(0x162D2620)
#define CLASS_2_D295639E6E543152_METHOD_2_8899A797305214E5_OFFSET UNITYSDK_OFFSET(0x162D2560)
#define CLASS_2_D295639E6E543152_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x162D1B60)
#define CLASS_2_D295639E6E543152_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x162D2150)
#define CLASS_2_D295639E6E543152_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x162D2280)
#define CLASS_2_D295639E6E543152_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x162D19B0)
#define CLASS_2_D295639E6E543152_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x162D1C10)
#define CLASS_2_D295639E6E543152__CTOR_OFFSET UNITYSDK_OFFSET(0x162D2720)
#define CLASS_2_D295639E6E543152__ONBIND_OFFSET UNITYSDK_OFFSET(0x162D1BC0)

inline static constexpr unsigned int Class_2_D295639E6E543152_TypeDefinitionIndex = 68706;

class Class_2_D295639E6E543152 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::UISkillIndex, ::Class_0_16E4307DCC419505_1059*>* Field_2_0; // 0x60
	::Class_2_7447B11B52391E1E* Field_2_1; // 0x68
	::Class_2_7447B11B52391E1E* Field_2_2; // 0x70
	::RPG::GameCore::BattleInstance* Field_2_3; // 0x78
	::Class_1_67A6A140E0E4C4AD* Field_2_4; // 0x80
	::Class_1_67A6A140E0E4C4AD* Field_2_5; // 0x88
	::System::Boolean Field_2_6; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_2_173B4412467E28D4(::Class_1_9CAA42EF32347EE5_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CAA42EF32347EE5_4*))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152_METHOD_2_173B4412467E28D4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>* Method_2_8899A797305214E5(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152_METHOD_2_8899A797305214E5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>* Method_2_76BC5C4B914F2482()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1059*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152_METHOD_2_76BC5C4B914F2482_OFFSET))(this);
	}

	::RPG::Client::UISkillIndex Method_2_1E0EA1AC7E2D9526(::RPG::Client::UISkillIndex a1)
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152_METHOD_2_1E0EA1AC7E2D9526_OFFSET))(this, a1);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D295639E6E543152_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}
};
