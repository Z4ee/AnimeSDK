#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_16;
class Class_1_945ACFB1FEBC7A2C_20;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F9996FBAC484C236_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x16184FF0)
#define CLASS_1_F9996FBAC484C236_METHOD_1_70C46DA5B4B87346_1_OFFSET UNITYSDK_OFFSET(0x16184E00)
#define CLASS_1_F9996FBAC484C236_METHOD_1_70C46DA5B4B87346_OFFSET UNITYSDK_OFFSET(0x16184B70)
#define CLASS_1_F9996FBAC484C236_METHOD_1_BC10E4695016E354_OFFSET UNITYSDK_OFFSET(0x16184D60)
#define CLASS_1_F9996FBAC484C236__CTOR_OFFSET UNITYSDK_OFFSET(0x16184DF0)

inline static constexpr unsigned int Class_1_F9996FBAC484C236_TypeDefinitionIndex = 55739;

class Class_1_F9996FBAC484C236 : public ::System::Object
{
public:
	// static const ::System::String* AEABFPFMGNP; // 0x0
	// static const ::System::String* FAMLNMBECBH; // 0x0
	// static const ::System::String* HPIEGMBLCII; // 0x0
	// static const ::System::String* OMONEPMDEDN; // 0x0
	// static const ::System::String* KKECJAAPEFL; // 0x0
	// static const ::System::String* MAMJKNMIHJG; // 0x0
	// static const ::System::String* MLFCBPOGMMB; // 0x0
	// static const ::System::String* HBMKEGDABJJ; // 0x0
	::System::UInt32 DIABMCKDNEM; // 0x10
	::System::UInt32 ONJFHCJFPND; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9996FBAC484C236__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_20*>* Method_1_70C46DA5B4B87346()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_20*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9996FBAC484C236_METHOD_1_70C46DA5B4B87346_OFFSET))(this);
	}

	static ::Class_1_F9996FBAC484C236* Method_1_BC10E4695016E354(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_F9996FBAC484C236*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F9996FBAC484C236_METHOD_1_BC10E4695016E354_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_16*>* Method_1_70C46DA5B4B87346_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9996FBAC484C236_METHOD_1_70C46DA5B4B87346_1_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9996FBAC484C236_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}
};
