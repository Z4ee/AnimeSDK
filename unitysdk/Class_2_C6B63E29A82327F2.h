#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0D6706375CDAAE8C.h"
#include "unitysdk/Share/EItemType.h"

class Class_0_16E4307DCC419505_22;
class Class_0_16E4307DCC419505_35;
class Class_1_D81DF5412653B7EF;
class Class_2_208CC9941471731A_131;
class Class_2_31FAD6E85054E2C7;
class Class_2_E621E51D351EB960_Class_1_39154B8B2AA98D66_1;
class Class_3_E665773526DA81A8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C6B63E29A82327F2_METHOD_2_0DEE3BE769EAC0EB_OFFSET UNITYSDK_OFFSET(0x12D83200)
#define CLASS_2_C6B63E29A82327F2_METHOD_2_2DEAC7321A00774E_OFFSET UNITYSDK_OFFSET(0x12D830C0)
#define CLASS_2_C6B63E29A82327F2_METHOD_2_667FEF37E856C091_OFFSET UNITYSDK_OFFSET(0x12D83410)
#define CLASS_2_C6B63E29A82327F2_METHOD_2_A9C5E2A333D12CDB_OFFSET UNITYSDK_OFFSET(0x12D83480)
#define CLASS_2_C6B63E29A82327F2_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x12D83540)
#define CLASS_2_C6B63E29A82327F2__CTOR_OFFSET UNITYSDK_OFFSET(0x12D830D0)

inline static constexpr unsigned int Class_2_C6B63E29A82327F2_TypeDefinitionIndex = 77712;

class Class_2_C6B63E29A82327F2 : public ::Class_1_0D6706375CDAAE8C
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_4; // 0x70
	::Class_2_31FAD6E85054E2C7* Field_2_1; // 0x78
	::Class_3_E665773526DA81A8* Field_2_2; // 0x80
	::Class_2_E621E51D351EB960_Class_1_39154B8B2AA98D66_1* Field_2_0; // 0x88
	::System::Int32 Field_2_3; // 0x90

	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_131* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::Class_2_208CC9941471731A_131*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Share::EItemType Method_2_2DEAC7321A00774E()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2_METHOD_2_2DEAC7321A00774E_OFFSET))(this);
	}

	::System::Void Method_2_0DEE3BE769EAC0EB(::Class_0_16E4307DCC419505_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_35*))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2_METHOD_2_0DEE3BE769EAC0EB_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_22* Method_2_667FEF37E856C091()
	{
		return ((::Class_0_16E4307DCC419505_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2_METHOD_2_667FEF37E856C091_OFFSET))(this);
	}

	::System::Void Method_2_A9C5E2A333D12CDB(::System::Collections::Generic::List_1<::Class_1_D81DF5412653B7EF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D81DF5412653B7EF*>*))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2_METHOD_2_A9C5E2A333D12CDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_35*))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}
};
