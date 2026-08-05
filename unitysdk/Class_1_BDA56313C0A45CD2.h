#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BDA56313C0A45CD2_METHOD_1_DF4005CE854064FB_OFFSET UNITYSDK_OFFSET(0x17A739E0)
#define CLASS_1_BDA56313C0A45CD2__CTOR_OFFSET UNITYSDK_OFFSET(0x17A73940)

inline static constexpr unsigned int Class_1_BDA56313C0A45CD2_TypeDefinitionIndex = 76946;

class Class_1_BDA56313C0A45CD2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x10
	::System::Single Field_1_6; // 0x18
	::MoleMole::Level::RatingType Field_1_7; // 0x1C
	::System::Single Field_1_0; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_BDA56313C0A45CD2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF4005CE854064FB(::System::Single a1, ::MoleMole::Level::RatingType& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Level::RatingType&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_BDA56313C0A45CD2_METHOD_1_DF4005CE854064FB_OFFSET))(this, a1, a2, a3);
	}
};
