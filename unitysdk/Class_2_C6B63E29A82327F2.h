#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0D6706375CDAAE8C.h"
#include "unitysdk/Share/EItemType.h"

class Class_0_16E4307DCC419505_21;
class Class_0_16E4307DCC419505_34;
class Class_1_D81DF5412653B7EF;
class Class_2_208CC9941471731A_477;
class Class_2_31FAD6E85054E2C7;
class Class_2_AB2EF02AB0EB9012_Class_1_39154B8B2AA98D66;
class Class_3_2C6CCFCBF8D85EF4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C6B63E29A82327F2_METHOD_2_0DEE3BE769EAC0EB_OFFSET UNITYSDK_OFFSET(0x1C3D5350)
#define CLASS_2_C6B63E29A82327F2_METHOD_2_2DEAC7321A00774E_OFFSET UNITYSDK_OFFSET(0x1C3D5210)
#define CLASS_2_C6B63E29A82327F2_METHOD_2_7D8F3A9F53FC208A_OFFSET UNITYSDK_OFFSET(0x1C3D5560)
#define CLASS_2_C6B63E29A82327F2_METHOD_2_A9C5E2A333D12CDB_OFFSET UNITYSDK_OFFSET(0x1C3D55D0)
#define CLASS_2_C6B63E29A82327F2_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x1C3D5690)
#define CLASS_2_C6B63E29A82327F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D5220)

inline static constexpr unsigned int Class_2_C6B63E29A82327F2_TypeDefinitionIndex = 73599;

class Class_2_C6B63E29A82327F2 : public ::Class_1_0D6706375CDAAE8C
{
public:
	::Class_2_31FAD6E85054E2C7* Field_2_7; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_4; // 0x78
	::Class_2_AB2EF02AB0EB9012_Class_1_39154B8B2AA98D66* Field_2_0; // 0x80
	::Class_3_2C6CCFCBF8D85EF4* Field_2_6; // 0x88
	::System::Int32 Field_2_5; // 0x90

	::System::Void _ctor(::System::UInt64 a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_477* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::Class_2_208CC9941471731A_477*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Share::EItemType Method_2_2DEAC7321A00774E()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2_METHOD_2_2DEAC7321A00774E_OFFSET))(this);
	}

	::System::Void Method_2_0DEE3BE769EAC0EB(::Class_0_16E4307DCC419505_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_34*))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2_METHOD_2_0DEE3BE769EAC0EB_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_21* Method_2_7D8F3A9F53FC208A()
	{
		return ((::Class_0_16E4307DCC419505_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2_METHOD_2_7D8F3A9F53FC208A_OFFSET))(this);
	}

	::System::Void Method_2_A9C5E2A333D12CDB(::System::Collections::Generic::List_1<::Class_1_D81DF5412653B7EF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_D81DF5412653B7EF*>*))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2_METHOD_2_A9C5E2A333D12CDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_34*))((::PBYTE)hIl2Cpp + CLASS_2_C6B63E29A82327F2_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}
};
