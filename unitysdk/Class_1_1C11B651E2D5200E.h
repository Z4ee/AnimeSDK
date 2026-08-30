#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_0748E0E1B406181B;
class Class_3_1E4F9B0ED3BF21DE;
class Class_3_BE1CF038D8D0B656;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimPuzzleChallengeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_1C11B651E2D5200E_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBDC3800)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xBDC38D0)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_0CCBF0A6E310A54A_OFFSET UNITYSDK_OFFSET(0xBDC5140)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_1962B67668E90EB2_OFFSET UNITYSDK_OFFSET(0xBDC4740)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_2188867ECDE57ABF_OFFSET UNITYSDK_OFFSET(0xBDC5540)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_2FDE0CE02EC294DE_OFFSET UNITYSDK_OFFSET(0xBDC3BC0)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_48CE838F848F070B_OFFSET UNITYSDK_OFFSET(0xBDC4F50)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_6509C50ECB677E62_OFFSET UNITYSDK_OFFSET(0xBDC4EE0)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_7D18AE8B2B4773D6_OFFSET UNITYSDK_OFFSET(0xBDC5E00)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_B45EF8E71E3BABE2_OFFSET UNITYSDK_OFFSET(0xBDC44C0)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_B97C7726653A0888_1_OFFSET UNITYSDK_OFFSET(0xBDC5350)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_B97C7726653A0888_2_OFFSET UNITYSDK_OFFSET(0xBDC5030)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_B97C7726653A0888_OFFSET UNITYSDK_OFFSET(0xBDC5CF0)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_DEADD6C32B461D62_OFFSET UNITYSDK_OFFSET(0xBDC4820)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_E0EBD7F0CA8E23F3_OFFSET UNITYSDK_OFFSET(0xBDC5460)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xBDC4120)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_EA1043E3A2C0B23A_OFFSET UNITYSDK_OFFSET(0xBDC4BE0)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_EF79C60756C35D5F_OFFSET UNITYSDK_OFFSET(0xBDC5F10)
#define CLASS_1_1C11B651E2D5200E_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBDC4040)
#define CLASS_1_1C11B651E2D5200E__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC37F0)

inline static constexpr unsigned int Class_1_1C11B651E2D5200E_TypeDefinitionIndex = 76690;

class Class_1_1C11B651E2D5200E : public ::System::Object
{
public:
	::Class_1_B4357A1C72BABC6B* FKINCGODJEP; // 0x10
	::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* CGPHKJOECHD; // 0x18
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x20
	::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* EJPCMDDGABL; // 0x28
	::RPG::PoolDictionary_2<::System::UInt32, ::System::Single>* BFGNCNDCJKK; // 0x30
	::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* IDPAOBIODJF; // 0x38
	::System::Single JKHJLIIFCEM; // 0x40

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_B45EF8E71E3BABE2(::System::String* a1, ::System::UInt32 a2, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* a3, ::Class_2_0748E0E1B406181B* a4, ::Class_3_BE1CF038D8D0B656* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*, ::Class_2_0748E0E1B406181B*, ::Class_3_BE1CF038D8D0B656*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_B45EF8E71E3BABE2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_EA1043E3A2C0B23A(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_EA1043E3A2C0B23A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2FDE0CE02EC294DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_2FDE0CE02EC294DE_OFFSET))(this);
	}

	::System::Void Method_1_0CCBF0A6E310A54A(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_0CCBF0A6E310A54A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2188867ECDE57ABF(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_2188867ECDE57ABF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D18AE8B2B4773D6(::RPG::GameCore::FiveDimPuzzleChallengeRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPuzzleChallengeRow*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_7D18AE8B2B4773D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_E0EBD7F0CA8E23F3(::RPG::GameCore::FiveDimPuzzleChallengeRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPuzzleChallengeRow*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_E0EBD7F0CA8E23F3_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimPuzzleChallengeRow* Method_1_6509C50ECB677E62(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FiveDimPuzzleChallengeRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_6509C50ECB677E62_OFFSET))(this, a1);
	}

	::RPG::PoolList_1<::RPG::GameCore::FiveDimPuzzleChallengeRow*>* Method_1_DEADD6C32B461D62()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::FiveDimPuzzleChallengeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_DEADD6C32B461D62_OFFSET))(this);
	}

	::Class_2_0748E0E1B406181B* Method_1_1962B67668E90EB2()
	{
		return ((::Class_2_0748E0E1B406181B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_1962B67668E90EB2_OFFSET))(this);
	}

	::System::Int16 Method_1_B97C7726653A0888()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_B97C7726653A0888_OFFSET))(this);
	}

	::System::Int16 Method_1_B97C7726653A0888_1()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_B97C7726653A0888_1_OFFSET))(this);
	}

	::System::Int16 Method_1_48CE838F848F070B()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_48CE838F848F070B_OFFSET))(this);
	}

	::System::Int16 Method_1_B97C7726653A0888_2()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_B97C7726653A0888_2_OFFSET))(this);
	}

	::System::Single Method_1_EF79C60756C35D5F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_EF79C60756C35D5F_OFFSET))(this);
	}
};
