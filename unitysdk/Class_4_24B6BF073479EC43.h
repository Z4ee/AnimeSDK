#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_24B6BF073479EC43_METHOD_4_1993A0891E67C2A9_OFFSET UNITYSDK_OFFSET(0x119E9160)
#define CLASS_4_24B6BF073479EC43_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x119E94E0)
#define CLASS_4_24B6BF073479EC43_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x119E8910)
#define CLASS_4_24B6BF073479EC43_METHOD_4_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x119E8640)
#define CLASS_4_24B6BF073479EC43_METHOD_4_9C36AFA140789703_OFFSET UNITYSDK_OFFSET(0x119E84F0)
#define CLASS_4_24B6BF073479EC43_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x119E90D0)
#define CLASS_4_24B6BF073479EC43_METHOD_4_FB81EBE81ABB70A0_OFFSET UNITYSDK_OFFSET(0x119E8980)
#define CLASS_4_24B6BF073479EC43__CTOR_OFFSET UNITYSDK_OFFSET(0x119E8E10)

inline static constexpr unsigned int Class_4_24B6BF073479EC43_TypeDefinitionIndex = 66329;

class Class_4_24B6BF073479EC43 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_4_0; // 0x28
	::Class_3_B537A0AA78803363* Field_4_4; // 0x30
	::Class_3_B537A0AA78803363* Field_4_5; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0x40
	::Class_3_B537A0AA78803363* Field_4_6; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_2; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9C36AFA140789703(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_9C36AFA140789703_OFFSET))(this, a1);
	}

	::System::Void Method_4_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_1993A0891E67C2A9(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_1993A0891E67C2A9_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_4_FB81EBE81ABB70A0(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_FB81EBE81ABB70A0_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_24B6BF073479EC43_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
