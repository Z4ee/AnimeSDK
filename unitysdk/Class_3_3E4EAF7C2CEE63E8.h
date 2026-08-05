#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_3E4EAF7C2CEE63E8_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12C68800)
#define CLASS_3_3E4EAF7C2CEE63E8_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12C68960)
#define CLASS_3_3E4EAF7C2CEE63E8_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x12C688E0)
#define CLASS_3_3E4EAF7C2CEE63E8_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12C68770)
#define CLASS_3_3E4EAF7C2CEE63E8__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C68850)
#define CLASS_3_3E4EAF7C2CEE63E8__CTOR_OFFSET UNITYSDK_OFFSET(0x12C688D0)

inline static constexpr unsigned int Class_3_3E4EAF7C2CEE63E8_TypeDefinitionIndex = 81375;

class Class_3_3E4EAF7C2CEE63E8 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0x45; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_7; // 0x48
	::System::Boolean Field_3_6; // 0x50
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
