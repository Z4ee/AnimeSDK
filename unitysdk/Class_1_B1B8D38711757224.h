#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B553C21756B27967;
class Class_1_C50F5982E5600913;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B1B8D38711757224__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16288680)
#define CLASS_1_B1B8D38711757224__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16288D40)
#define CLASS_1_B1B8D38711757224__CTOR_3_OFFSET UNITYSDK_OFFSET(0x16288E00)
#define CLASS_1_B1B8D38711757224__CTOR_OFFSET UNITYSDK_OFFSET(0x16288670)

inline static constexpr unsigned int Class_1_B1B8D38711757224_TypeDefinitionIndex = 35593;

class Class_1_B1B8D38711757224 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* PFOJIHKJACM; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* IDLHCIHGLFI; // 0x18
	::System::String* HEFLHPGKLCI; // 0x20
	::System::String* EBMNJMIKNPP; // 0x28
	::System::String* PEGNLFICABO; // 0x30
	::System::Boolean OCLBMMNNMFC; // 0x38
	::System::Boolean LELKJHMIKFK; // 0x39
	::System::UInt32 HDCIIEFCMFA; // 0x3C
	::System::UInt32 GMCAHOPDHLI; // 0x40
	::System::Int32 CADHBHHCKPO; // 0x44
	::System::UInt32 EECIJBLGLNG; // 0x48
	::System::UInt32 JDGGFABIPDF; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8D38711757224__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C50F5982E5600913* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8D38711757224__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_1_B1B8D38711757224* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1B8D38711757224*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8D38711757224__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void _ctor_3(::Class_1_B553C21756B27967* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B553C21756B27967*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8D38711757224__CTOR_3_OFFSET))(this, a1);
	}
};
