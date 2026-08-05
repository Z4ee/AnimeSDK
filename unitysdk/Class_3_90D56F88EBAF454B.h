#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_2A31B907A2725B54;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_90D56F88EBAF454B_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13D00C20)
#define CLASS_3_90D56F88EBAF454B_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x13D00D00)
#define CLASS_3_90D56F88EBAF454B_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13D00E80)
#define CLASS_3_90D56F88EBAF454B_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13D00E00)
#define CLASS_3_90D56F88EBAF454B_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13D00BD0)
#define CLASS_3_90D56F88EBAF454B__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D00C70)
#define CLASS_3_90D56F88EBAF454B__CTOR_OFFSET UNITYSDK_OFFSET(0x13D00CF0)

inline static constexpr unsigned int Class_3_90D56F88EBAF454B_TypeDefinitionIndex = 53609;

class Class_3_90D56F88EBAF454B : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0xC4; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_2A31B907A2725B54*>* Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_90D56F88EBAF454B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90D56F88EBAF454B__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90D56F88EBAF454B_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90D56F88EBAF454B_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90D56F88EBAF454B_METHOD_3_0865E94460F11643_OFFSET))(this);
	}

	static ::Class_3_90D56F88EBAF454B* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_90D56F88EBAF454B*(*)())((::PBYTE)hIl2Cpp + CLASS_3_90D56F88EBAF454B_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90D56F88EBAF454B_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
