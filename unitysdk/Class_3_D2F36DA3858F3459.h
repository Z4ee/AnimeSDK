#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_149C467017BF6C9E.h"
#include "unitysdk/Struct_2_23357730042A2DE8.h"
#include "unitysdk/Struct_2_A840136A4E657746.h"
#include "unitysdk/Struct_2_A840136A4E657746_4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D2F36DA3858F3459_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1549AA60)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x1549AD80)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_5304726C363652C1_OFFSET UNITYSDK_OFFSET(0x1549AE80)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_792AB6C2A2B589B3_OFFSET UNITYSDK_OFFSET(0x1549B250)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_8BC6021020D15A44_OFFSET UNITYSDK_OFFSET(0x1549B030)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_8E58D2EE5710C0F6_OFFSET UNITYSDK_OFFSET(0x1549B440)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1549B900)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_A24A1AC307A571BF_OFFSET UNITYSDK_OFFSET(0x1549B0D0)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_BE118ECFC8E75F8A_OFFSET UNITYSDK_OFFSET(0x1549B1C0)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1549AD00)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_D240830C442C70A4_OFFSET UNITYSDK_OFFSET(0x1549AF30)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_E639AC66E23A9DAF_OFFSET UNITYSDK_OFFSET(0x1549B790)
#define CLASS_3_D2F36DA3858F3459_METHOD_3_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x1549B150)
#define CLASS_3_D2F36DA3858F3459_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1549A740)
#define CLASS_3_D2F36DA3858F3459__CCTOR_OFFSET UNITYSDK_OFFSET(0x1549AAB0)
#define CLASS_3_D2F36DA3858F3459__CTOR_OFFSET UNITYSDK_OFFSET(0x1549AB30)

inline static constexpr unsigned int Class_3_D2F36DA3858F3459_TypeDefinitionIndex = 70053;

class Class_3_D2F36DA3858F3459 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Single Field_3_7; // 0x0
	// static const ::System::Int32 Field_3_10 = 0x73; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_3_5; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_4; // 0x58
	::System::Collections::Generic::List_1<::Struct_2_23357730042A2DE8>* Field_3_8; // 0x60
	::Struct_2_149C467017BF6C9E Field_3_1; // 0x68
	::Struct_2_A840136A4E657746_4 Field_3_3; // 0x74
	::Struct_2_A840136A4E657746 Field_3_0; // 0x80
	::System::Single Field_3_9; // 0x8C
	::System::Boolean Field_3_2; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_D2F36DA3858F3459* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_D2F36DA3858F3459*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_D240830C442C70A4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_D240830C442C70A4_OFFSET))(this);
	}

	::System::Single Method_3_A24A1AC307A571BF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_A24A1AC307A571BF_OFFSET))(this);
	}

	::System::Int32 Method_3_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_3_BE118ECFC8E75F8A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_BE118ECFC8E75F8A_OFFSET))(this);
	}

	::System::Single Method_3_8BC6021020D15A44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_8BC6021020D15A44_OFFSET))(this);
	}

	::Class_3_D2F36DA3858F3459* Method_3_792AB6C2A2B589B3()
	{
		return ((::Class_3_D2F36DA3858F3459*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_792AB6C2A2B589B3_OFFSET))(this);
	}

	::System::Void Method_3_8E58D2EE5710C0F6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_8E58D2EE5710C0F6_OFFSET))(this, a1);
	}

	::System::Single Method_3_5304726C363652C1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_5304726C363652C1_OFFSET))(this);
	}

	::System::Boolean Method_3_E639AC66E23A9DAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_E639AC66E23A9DAF_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D2F36DA3858F3459_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
