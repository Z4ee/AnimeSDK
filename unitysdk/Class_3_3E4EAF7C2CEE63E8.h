#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_3E4EAF7C2CEE63E8_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14024E80)
#define CLASS_3_3E4EAF7C2CEE63E8_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14024FE0)
#define CLASS_3_3E4EAF7C2CEE63E8_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14024F60)
#define CLASS_3_3E4EAF7C2CEE63E8_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14024DF0)
#define CLASS_3_3E4EAF7C2CEE63E8__CCTOR_OFFSET UNITYSDK_OFFSET(0x14024ED0)
#define CLASS_3_3E4EAF7C2CEE63E8__CTOR_OFFSET UNITYSDK_OFFSET(0x14024F50)

inline static constexpr unsigned int Class_3_3E4EAF7C2CEE63E8_TypeDefinitionIndex = 70029;

class Class_3_3E4EAF7C2CEE63E8 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0x42; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_1; // 0x48
	::System::Boolean Field_3_2; // 0x50
	::System::Boolean Field_3_0; // 0x51

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3E4EAF7C2CEE63E8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E4EAF7C2CEE63E8__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E4EAF7C2CEE63E8_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E4EAF7C2CEE63E8_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_3E4EAF7C2CEE63E8* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_3E4EAF7C2CEE63E8*(*)())((::PBYTE)hIl2Cpp + CLASS_3_3E4EAF7C2CEE63E8_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E4EAF7C2CEE63E8_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
