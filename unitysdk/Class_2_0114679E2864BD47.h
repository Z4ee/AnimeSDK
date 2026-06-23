#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorld.h"

class Class_1_5F817449EE3DD0C4;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0114679E2864BD47_METHOD_2_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0x140E2D30)
#define CLASS_2_0114679E2864BD47_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x140E42C0)
#define CLASS_2_0114679E2864BD47_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x140E2F00)
#define CLASS_2_0114679E2864BD47_METHOD_2_236EAF77DB84A69D_OFFSET UNITYSDK_OFFSET(0x140E4110)
#define CLASS_2_0114679E2864BD47_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x140E42D0)
#define CLASS_2_0114679E2864BD47_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x140E42E0)
#define CLASS_2_0114679E2864BD47_METHOD_2_48F4094B62207807_1_OFFSET UNITYSDK_OFFSET(0x140E41E0)
#define CLASS_2_0114679E2864BD47_METHOD_2_48F4094B62207807_OFFSET UNITYSDK_OFFSET(0x140E3B30)
#define CLASS_2_0114679E2864BD47_METHOD_2_4DCA041332B8901E_OFFSET UNITYSDK_OFFSET(0x140E3D10)
#define CLASS_2_0114679E2864BD47_METHOD_2_4DF98D928623DEE3_1_OFFSET UNITYSDK_OFFSET(0x140E41F0)
#define CLASS_2_0114679E2864BD47_METHOD_2_4DF98D928623DEE3_OFFSET UNITYSDK_OFFSET(0x140E3B50)
#define CLASS_2_0114679E2864BD47_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x140E4100)
#define CLASS_2_0114679E2864BD47_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x140E3460)
#define CLASS_2_0114679E2864BD47_METHOD_2_641B06838BDFB06A_1_OFFSET UNITYSDK_OFFSET(0x140E3B40)
#define CLASS_2_0114679E2864BD47_METHOD_2_641B06838BDFB06A_OFFSET UNITYSDK_OFFSET(0x140E3B10)
#define CLASS_2_0114679E2864BD47_METHOD_2_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x140E3630)
#define CLASS_2_0114679E2864BD47_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x140E3D00)
#define CLASS_2_0114679E2864BD47_METHOD_2_90DDCCB37DB08B78_OFFSET UNITYSDK_OFFSET(0x140E32A0)
#define CLASS_2_0114679E2864BD47_METHOD_2_A14CFF02194EC0EB_OFFSET UNITYSDK_OFFSET(0x140E33A0)
#define CLASS_2_0114679E2864BD47_METHOD_2_BECE92CB50D33434_OFFSET UNITYSDK_OFFSET(0x140E3C20)
#define CLASS_2_0114679E2864BD47_METHOD_2_BF2548DE4E89A714_OFFSET UNITYSDK_OFFSET(0x140E3330)
#define CLASS_2_0114679E2864BD47_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x140E3B20)
#define CLASS_2_0114679E2864BD47_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x140E3030)
#define CLASS_2_0114679E2864BD47__CTOR_OFFSET UNITYSDK_OFFSET(0x140E2C40)

inline static constexpr unsigned int Class_2_0114679E2864BD47_TypeDefinitionIndex = 41742;

class Class_2_0114679E2864BD47 : public ::Nap::NapECS::EcsWorld
{
public:
	::MoleMole::HollowChessboard::HollowEntity* Field_2_5; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowEntity*>* Field_2_4; // 0x60
	::System::Action_1<::System::Single>* Field_2_2; // 0x68
	::Class_1_5F817449EE3DD0C4* Field_2_0; // 0x70
	::System::Action_1<::System::Single>* Field_2_3; // 0x78
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_6; // 0x80
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_7; // 0x88
	::System::Single Field_2_1; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_00A4B38C951C5BD5(::Class_1_5F817449EE3DD0C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F817449EE3DD0C4*))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_ONDESTROY_OFFSET))(this);
	}

	::System::Void Method_2_A14CFF02194EC0EB(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_A14CFF02194EC0EB_OFFSET))(this, a1, a2);
	}

	::System::Action_1<::System::Single>* Method_2_641B06838BDFB06A()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_641B06838BDFB06A_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_48F4094B62207807(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_48F4094B62207807_OFFSET))(this, a1);
	}

	::System::Action_1<::System::Single>* Method_2_641B06838BDFB06A_1()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_641B06838BDFB06A_1_OFFSET))(this);
	}

	::System::Void Method_2_4DF98D928623DEE3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_4DF98D928623DEE3_OFFSET))(this, a1);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_2_BF2548DE4E89A714(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_BF2548DE4E89A714_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_7B411317D337F87A_OFFSET))(this);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_5F817449EE3DD0C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F817449EE3DD0C4*))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4DCA041332B8901E(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_4DCA041332B8901E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* Method_2_90DDCCB37DB08B78()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_90DDCCB37DB08B78_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_236EAF77DB84A69D(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_236EAF77DB84A69D_OFFSET))(this, a1);
	}

	::System::Void Method_2_48F4094B62207807_1(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_48F4094B62207807_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4DF98D928623DEE3_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_4DF98D928623DEE3_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_2_BECE92CB50D33434(::System::UInt32 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_BECE92CB50D33434_OFFSET))(this, a1);
	}

	::Class_1_5F817449EE3DD0C4* Method_2_24748FC20F375725()
	{
		return ((::Class_1_5F817449EE3DD0C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0114679E2864BD47_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}
};
