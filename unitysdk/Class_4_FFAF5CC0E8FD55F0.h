#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Enum_3_FE72B9AC849E8D70_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_57572BE5B21BFA95.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x181240A0)
#define CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x181225B0)
#define CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_2A5FB658939B8147_OFFSET UNITYSDK_OFFSET(0x18124030)
#define CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x181228D0)
#define CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_454A9AEF874BD91C_OFFSET UNITYSDK_OFFSET(0x18123F60)
#define CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_A1FD9D0D444C792B_OFFSET UNITYSDK_OFFSET(0x181223D0)
#define CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_BFD9C6B0B8BAEFA7_OFFSET UNITYSDK_OFFSET(0x18122940)
#define CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x181240B0)
#define CLASS_4_FFAF5CC0E8FD55F0__CTOR_OFFSET UNITYSDK_OFFSET(0x18123CE0)

inline static constexpr unsigned int Class_4_FFAF5CC0E8FD55F0_TypeDefinitionIndex = 48335;

class Class_4_FFAF5CC0E8FD55F0 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_7; // 0x28
	::Class_4_2FF7D360A2F3EC48<::MoleMole::Config::Spline_WayPoint>* Field_4_1; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_11; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_4; // 0x40
	::Class_3_B537A0AA78803363* Field_4_10; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x50
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_5; // 0x58
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFAF5CC0E8FD55F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_A1FD9D0D444C792B(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_A1FD9D0D444C792B_OFFSET))(this, a1);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_454A9AEF874BD91C(::Struct_2_29439DBE2B63DCF3 a1, ::Struct_2_57572BE5B21BFA95 a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::Struct_2_57572BE5B21BFA95))((::PBYTE)hIl2Cpp + CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_454A9AEF874BD91C_OFFSET))(this, a1, a2);
	}

	::System::Single Method_4_2A5FB658939B8147(::Enum_3_FE72B9AC849E8D70_1 a1)
	{
		return ((::System::Single(*)(::PVOID, ::Enum_3_FE72B9AC849E8D70_1))((::PBYTE)hIl2Cpp + CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_2A5FB658939B8147_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_4_BFD9C6B0B8BAEFA7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_FFAF5CC0E8FD55F0_METHOD_4_BFD9C6B0B8BAEFA7_OFFSET))(this, a1);
	}
};
