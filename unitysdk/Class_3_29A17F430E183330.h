#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }

#define CLASS_3_29A17F430E183330_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1145E120)
#define CLASS_3_29A17F430E183330_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1145E340)
#define CLASS_3_29A17F430E183330_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1145E2C0)
#define CLASS_3_29A17F430E183330_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1145E030)
#define CLASS_3_29A17F430E183330__CCTOR_OFFSET UNITYSDK_OFFSET(0x1145E170)
#define CLASS_3_29A17F430E183330__CTOR_OFFSET UNITYSDK_OFFSET(0x1145E1F0)

inline static constexpr unsigned int Class_3_29A17F430E183330_TypeDefinitionIndex = 38236;

class Class_3_29A17F430E183330 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0x36; // 0x0
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Single>* Field_3_1; // 0x48
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Single>* Field_3_2; // 0x50
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Single>* Field_3_0; // 0x58
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* Field_3_3; // 0x60
	::System::Single Field_3_6; // 0x68
	::System::Single Field_3_5; // 0x6C
	::System::Single Field_3_4; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_29A17F430E183330__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29A17F430E183330__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29A17F430E183330_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29A17F430E183330_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_29A17F430E183330* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_29A17F430E183330*(*)())((::PBYTE)hIl2Cpp + CLASS_3_29A17F430E183330_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29A17F430E183330_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
