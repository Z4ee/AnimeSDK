#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_87411F35FE812764.h"
#include "unitysdk/Struct_2_EADB70559B2B5513.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_656901EE0203DCC0_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF542CE0)
#define CLASS_3_656901EE0203DCC0_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xF542FF0)
#define CLASS_3_656901EE0203DCC0_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xF542F70)
#define CLASS_3_656901EE0203DCC0_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF542890)
#define CLASS_3_656901EE0203DCC0__CCTOR_OFFSET UNITYSDK_OFFSET(0xF542D30)
#define CLASS_3_656901EE0203DCC0__CTOR_OFFSET UNITYSDK_OFFSET(0xF542DB0)

inline static constexpr unsigned int Class_3_656901EE0203DCC0_TypeDefinitionIndex = 43290;

class Class_3_656901EE0203DCC0 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0xC6; // 0x0
	::System::Collections::Generic::Dictionary_2<::Struct_2_EADB70559B2B5513, ::Struct_2_87411F35FE812764>* Field_3_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::Struct_2_EADB70559B2B5513, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_3_2; // 0x50
	::System::Collections::Generic::Dictionary_2<::Struct_2_EADB70559B2B5513, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_3_1; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_656901EE0203DCC0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_656901EE0203DCC0__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_656901EE0203DCC0_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_656901EE0203DCC0_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_656901EE0203DCC0* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_656901EE0203DCC0*(*)())((::PBYTE)hIl2Cpp + CLASS_3_656901EE0203DCC0_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_656901EE0203DCC0_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
