#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_82297B6AFFE49354;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_586CC94A266070EA_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x17C2F1E0)
#define CLASS_1_586CC94A266070EA_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17C2F3E0)
#define CLASS_1_586CC94A266070EA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C2F490)

inline static constexpr unsigned int Class_1_586CC94A266070EA_TypeDefinitionIndex = 34194;

class Class_1_586CC94A266070EA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::Class_1_0E117AC86D8E5BCA*>* Field_1_10; // 0x28
	::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x40
	::System::Single Field_1_9; // 0x48
	::System::Int32 Field_1_4; // 0x4C
	::System::Boolean Field_1_14; // 0x50
	::System::Boolean Field_1_11; // 0x51
	::System::Boolean Field_1_13; // 0x52
	::System::Single Field_1_8; // 0x54
	::System::Single Field_1_16; // 0x58
	::System::Single Field_1_15; // 0x5C
	::System::Single Field_1_12; // 0x60
	::System::Single Field_1_17; // 0x64
	::System::Single Field_1_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_586CC94A266070EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_586CC94A266070EA_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_586CC94A266070EA_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
