#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_273D4925251D8837;
class Class_1_62855548231394C2;
class Class_2_465A9E6CC2B0EF21;
class Class_3_E7D29F43FB80184D;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_21F026A2FEE03736_GET_CURRENTAICONTROLLER_OFFSET UNITYSDK_OFFSET(0x1AF50DE0)
#define CLASS_1_21F026A2FEE03736_GET_CURRENTAIUID_OFFSET UNITYSDK_OFFSET(0x1AF50E00)
#define CLASS_1_21F026A2FEE03736_METHOD_1_15B3CE02624778D4_OFFSET UNITYSDK_OFFSET(0x1AF50550)
#define CLASS_1_21F026A2FEE03736_METHOD_1_5B74400343D0B5E1_OFFSET UNITYSDK_OFFSET(0x1AF50AD0)
#define CLASS_1_21F026A2FEE03736_METHOD_1_602564279411879E_OFFSET UNITYSDK_OFFSET(0x1AF50BE0)
#define CLASS_1_21F026A2FEE03736_METHOD_1_A2A821E167F71F94_OFFSET UNITYSDK_OFFSET(0x1AF50850)
#define CLASS_1_21F026A2FEE03736_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1AF504A0)
#define CLASS_1_21F026A2FEE03736_SET_CURRENTAICONTROLLER_OFFSET UNITYSDK_OFFSET(0x1AF50DF0)
#define CLASS_1_21F026A2FEE03736_SET_CURRENTAIUID_OFFSET UNITYSDK_OFFSET(0x1AF50E10)
#define CLASS_1_21F026A2FEE03736__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF503E0)

inline static constexpr unsigned int Class_1_21F026A2FEE03736_TypeDefinitionIndex = 78626;

class Class_1_21F026A2FEE03736 : public ::System::Object
{
public:
	::Class_1_273D4925251D8837* _CurrentAIController_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* OHKFMKFGHNI; // 0x18
	::Class_3_E7D29F43FB80184D* HOADGOKCPDG; // 0x20
	::Class_1_62855548231394C2* PDOOIGCLKIB; // 0x28
	::System::UInt32 _CurrentAIUid_k__BackingField; // 0x30

	::System::Void _ctor(::Class_3_E7D29F43FB80184D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*))((::PBYTE)hIl2Cpp + CLASS_1_21F026A2FEE03736__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F026A2FEE03736_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_15B3CE02624778D4(::Class_2_465A9E6CC2B0EF21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*))((::PBYTE)hIl2Cpp + CLASS_1_21F026A2FEE03736_METHOD_1_15B3CE02624778D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_A2A821E167F71F94(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21F026A2FEE03736_METHOD_1_A2A821E167F71F94_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B74400343D0B5E1(::RPG::GameCore::GameEntity* a1, ::Class_2_465A9E6CC2B0EF21* a2, ::System::String* a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_465A9E6CC2B0EF21*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21F026A2FEE03736_METHOD_1_5B74400343D0B5E1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_602564279411879E(::Class_2_465A9E6CC2B0EF21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_465A9E6CC2B0EF21*))((::PBYTE)hIl2Cpp + CLASS_1_21F026A2FEE03736_METHOD_1_602564279411879E_OFFSET))(this, a1);
	}

	::Class_1_273D4925251D8837* get_CurrentAIController()
	{
		return ((::Class_1_273D4925251D8837*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F026A2FEE03736_GET_CURRENTAICONTROLLER_OFFSET))(this);
	}

	::System::Void set_CurrentAIController(::Class_1_273D4925251D8837* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_273D4925251D8837*))((::PBYTE)hIl2Cpp + CLASS_1_21F026A2FEE03736_SET_CURRENTAICONTROLLER_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurrentAIUid()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F026A2FEE03736_GET_CURRENTAIUID_OFFSET))(this);
	}

	::System::Void set_CurrentAIUid(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21F026A2FEE03736_SET_CURRENTAIUID_OFFSET))(this, a1);
	}
};
