#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_504F298B4B2B1EEF.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_748;
namespace System { class String; }

#define STRUCT_2_DEFBC4F1D068893B_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x304470)
#define STRUCT_2_DEFBC4F1D068893B_METHOD_2_1EF0BB4FC8495162_OFFSET UNITYSDK_OFFSET(0x709BF0)
#define STRUCT_2_DEFBC4F1D068893B_METHOD_2_3FA063706A9B5149_OFFSET UNITYSDK_OFFSET(0x709B10)
#define STRUCT_2_DEFBC4F1D068893B_METHOD_2_B979C738815D22CC_OFFSET UNITYSDK_OFFSET(0x709D00)
#define STRUCT_2_DEFBC4F1D068893B_METHOD_2_D180C1C39675A7FD_OFFSET UNITYSDK_OFFSET(0x709D10)
#define STRUCT_2_DEFBC4F1D068893B_METHOD_2_FE46CFDD5AFA32C9_OFFSET UNITYSDK_OFFSET(0x709B90)
#define STRUCT_2_DEFBC4F1D068893B__CTOR_OFFSET UNITYSDK_OFFSET(0x709AC0)

inline static constexpr unsigned int Struct_2_DEFBC4F1D068893B_TypeDefinitionIndex = 47185;

struct alignas(8) Struct_2_DEFBC4F1D068893B
{
	::System::Int32 Field_2_0; // 0x10
	::Class_2_208CC9941471731A_748* Field_2_1; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_DEFBC4F1D068893B__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_504F298B4B2B1EEF get_IconType()
	{
		return ((::Enum_3_504F298B4B2B1EEF(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DEFBC4F1D068893B_GET_ICONTYPE_OFFSET))(this);
	}

	/*
	::Foundation::AssetPath Method_2_3FA063706A9B5149()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DEFBC4F1D068893B_METHOD_2_3FA063706A9B5149_OFFSET))(this);
	}
	*/

	::System::Int32 Method_2_FE46CFDD5AFA32C9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DEFBC4F1D068893B_METHOD_2_FE46CFDD5AFA32C9_OFFSET))(this);
	}

	/*
	::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> Method_2_1EF0BB4FC8495162()
	{
		return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DEFBC4F1D068893B_METHOD_2_1EF0BB4FC8495162_OFFSET))(this);
	}
	*/

	::System::String* Method_2_B979C738815D22CC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DEFBC4F1D068893B_METHOD_2_B979C738815D22CC_OFFSET))(this);
	}

	/*
	::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> Method_2_D180C1C39675A7FD()
	{
		return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DEFBC4F1D068893B_METHOD_2_D180C1C39675A7FD_OFFSET))(this);
	}
	*/
};
