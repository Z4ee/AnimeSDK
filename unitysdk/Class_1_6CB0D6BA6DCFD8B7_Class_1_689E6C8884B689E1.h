#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/Enum_3_417F689ECA777088.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_15D62275ABED373C;
class Class_1_3B6FD32A4C03F1FC;
class Class_1_FD730686FDC51CE6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_689E6C8884B689E1__CTOR_OFFSET UNITYSDK_OFFSET(0x139576C0)

inline static constexpr unsigned int Class_1_6CB0D6BA6DCFD8B7_Class_1_689E6C8884B689E1_TypeDefinitionIndex = 56198;

class Class_1_6CB0D6BA6DCFD8B7_Class_1_689E6C8884B689E1 : public ::System::Object
{
public:
	::System::ValueTuple_2<::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>*> Field_1_6; // 0x10
	::Class_1_15D62275ABED373C* Field_1_3; // 0x20
	::System::ValueTuple_2<::Class_1_FD730686FDC51CE6*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*> Field_1_7; // 0x28
	::System::String* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::Class_1_3B6FD32A4C03F1FC*>* Field_1_4; // 0x40
	::System::Int32 Field_1_1; // 0x48
	::Enum_3_417F689ECA777088 Field_1_0; // 0x4C
	::System::Int32 Field_1_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_689E6C8884B689E1__CTOR_OFFSET))(this);
	}
};
