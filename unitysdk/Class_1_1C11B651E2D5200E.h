#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_BD898AE9C0E88E25;
class Class_3_1A92845FAFA5EC77;
class Class_3_BE1CF038D8D0B656;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimPuzzleChallengeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_1C11B651E2D5200E_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8F3F2C0)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_0719B0A60118560B_OFFSET UNITYSDK_OFFSET(0x8F408A0)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_1962B67668E90EB2_OFFSET UNITYSDK_OFFSET(0x8F40280)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_2188867ECDE57ABF_OFFSET UNITYSDK_OFFSET(0x8F40F40)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_32302DC0AC2610DA_OFFSET UNITYSDK_OFFSET(0x8F40310)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_48CE838F848F070B_OFFSET UNITYSDK_OFFSET(0x8F40910)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_7D05F2793F533C95_OFFSET UNITYSDK_OFFSET(0x8F40B00)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x8F3F660)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x8F3FCB0)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x8F3F390)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_B45EF8E71E3BABE2_OFFSET UNITYSDK_OFFSET(0x8F40060)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_B97C7726653A0888_1_OFFSET UNITYSDK_OFFSET(0x8F40D20)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_B97C7726653A0888_2_OFFSET UNITYSDK_OFFSET(0x8F409F0)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_B97C7726653A0888_OFFSET UNITYSDK_OFFSET(0x8F41600)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_C1D2E98142A06F7D_OFFSET UNITYSDK_OFFSET(0x8F40E30)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_E48D4A5DF13F41EA_OFFSET UNITYSDK_OFFSET(0x8F41710)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_EA1043E3A2C0B23A_OFFSET UNITYSDK_OFFSET(0x8F40590)
#define CLASS_1_1C11B651E2D5200E_METHOD_1_EF79C60756C35D5F_OFFSET UNITYSDK_OFFSET(0x8F41850)
#define CLASS_1_1C11B651E2D5200E_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x8F3FBE0)
#define CLASS_1_1C11B651E2D5200E__CTOR_OFFSET UNITYSDK_OFFSET(0x8F3F2B0)

inline static constexpr unsigned int Class_1_1C11B651E2D5200E_TypeDefinitionIndex = 70867;

class Class_1_1C11B651E2D5200E : public ::System::Object
{
public:
	::Class_3_1A92845FAFA5EC77* Field_1_6; // 0x10
	::Class_1_24C2E7EF22229C6A* Field_1_5; // 0x18
	::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* Field_1_2; // 0x20
	::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* Field_1_0; // 0x28
	::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* Field_1_1; // 0x30
	::RPG::PoolDictionary_2<::System::UInt32, ::System::Single>* Field_1_3; // 0x38
	::System::Single Field_1_4; // 0x40

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_B45EF8E71E3BABE2(::System::String* a1, ::System::UInt32 a2, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* a3, ::Class_2_BD898AE9C0E88E25* a4, ::Class_3_BE1CF038D8D0B656* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*, ::Class_2_BD898AE9C0E88E25*, ::Class_3_BE1CF038D8D0B656*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_B45EF8E71E3BABE2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_1_EA1043E3A2C0B23A(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_EA1043E3A2C0B23A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93E6B8A6D29521ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_93E6B8A6D29521ED_OFFSET))(this);
	}

	::System::Void Method_1_7D05F2793F533C95(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_7D05F2793F533C95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2188867ECDE57ABF(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_2188867ECDE57ABF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E48D4A5DF13F41EA(::RPG::GameCore::FiveDimPuzzleChallengeRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPuzzleChallengeRow*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_E48D4A5DF13F41EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1D2E98142A06F7D(::RPG::GameCore::FiveDimPuzzleChallengeRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPuzzleChallengeRow*))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_C1D2E98142A06F7D_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimPuzzleChallengeRow* Method_1_0719B0A60118560B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FiveDimPuzzleChallengeRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_0719B0A60118560B_OFFSET))(this, a1);
	}

	::RPG::PoolList_1<::RPG::GameCore::FiveDimPuzzleChallengeRow*>* Method_1_32302DC0AC2610DA()
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::FiveDimPuzzleChallengeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_32302DC0AC2610DA_OFFSET))(this);
	}

	::Class_2_BD898AE9C0E88E25* Method_1_1962B67668E90EB2()
	{
		return ((::Class_2_BD898AE9C0E88E25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C11B651E2D5200E_METHOD_1_1962B67668E90EB2_OFFSET))(this);
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
