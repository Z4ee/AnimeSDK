#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0348183E3473943B.h"
#include "unitysdk/Struct_2_070A00258D76D4E3.h"
#include "unitysdk/System/Object.h"

class Class_1_0272D5A0C4F089B0;
class Class_1_70B630442ADDBF4A;
class Class_2_AEE59ED8DADEC1A1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D2DA75CD29265F7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A579390)

inline static constexpr unsigned int Class_1_D2DA75CD29265F7F_TypeDefinitionIndex = 35715;

class Class_1_D2DA75CD29265F7F : public ::System::Object
{
public:
	::Class_2_AEE59ED8DADEC1A1* GGKGFABFGFE; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_070A00258D76D4E3, ::System::Single>* MGPAKNPNDHM; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* ILAJDCLHMPO; // 0x20
	::System::Collections::Generic::Dictionary_2<::Struct_2_0348183E3473943B, ::Class_1_70B630442ADDBF4A*>* AGBOAMJIAFF; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* LIEBHGLIACD; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* BOJCNPKDMFP; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* PLMLJOFCIOI; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*>* DODCHEKENHN; // 0x48
	::System::Collections::Generic::Dictionary_2<::Struct_2_0348183E3473943B, ::System::Single>* DAFKIIOJHKG; // 0x50
	::Class_1_0272D5A0C4F089B0* NCJDFFKKIMM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2DA75CD29265F7F__CTOR_OFFSET))(this);
	}
};
