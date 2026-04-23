#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_15;
class Class_1_945ACFB1FEBC7A2C_17;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F9996FBAC484C236_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x98BB510)
#define CLASS_1_F9996FBAC484C236_METHOD_1_8248FF6FFE3E258C_1_OFFSET UNITYSDK_OFFSET(0x98BB3C0)
#define CLASS_1_F9996FBAC484C236_METHOD_1_8248FF6FFE3E258C_OFFSET UNITYSDK_OFFSET(0x98BB1D0)
#define CLASS_1_F9996FBAC484C236_METHOD_1_BC10E4695016E354_OFFSET UNITYSDK_OFFSET(0x98BB320)
#define CLASS_1_F9996FBAC484C236__CTOR_OFFSET UNITYSDK_OFFSET(0x98BB3B0)

inline static constexpr unsigned int Class_1_F9996FBAC484C236_TypeDefinitionIndex = 51210;

class Class_1_F9996FBAC484C236 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	::System::UInt32 Field_1_3; // 0x10
	::System::UInt32 Field_1_2; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9996FBAC484C236__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_17*>* Method_1_8248FF6FFE3E258C()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9996FBAC484C236_METHOD_1_8248FF6FFE3E258C_OFFSET))(this);
	}

	static ::Class_1_F9996FBAC484C236* Method_1_BC10E4695016E354(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_F9996FBAC484C236*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F9996FBAC484C236_METHOD_1_BC10E4695016E354_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_15*>* Method_1_8248FF6FFE3E258C_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9996FBAC484C236_METHOD_1_8248FF6FFE3E258C_1_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9996FBAC484C236_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}
};
