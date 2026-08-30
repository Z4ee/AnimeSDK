#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CC4789213986EBB7;
class Class_1_E2FB7E5A9E3705C7_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_941ED7C919523397_GET_DISPLAYS_OFFSET UNITYSDK_OFFSET(0xBA3B330)
#define CLASS_1_941ED7C919523397_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0xBA3B3E0)
#define CLASS_1_941ED7C919523397__CTOR_OFFSET UNITYSDK_OFFSET(0xBA3B340)

inline static constexpr unsigned int Class_1_941ED7C919523397_TypeDefinitionIndex = 63985;

class Class_1_941ED7C919523397 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E2FB7E5A9E3705C7_1*>* _Displays_k__BackingField; // 0x10
	::Class_1_CC4789213986EBB7* OEPBFOINIOO; // 0x18

	::System::Void _ctor(::Class_1_CC4789213986EBB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC4789213986EBB7*))((::PBYTE)hIl2Cpp + CLASS_1_941ED7C919523397__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E2FB7E5A9E3705C7_1*>* get_Displays()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E2FB7E5A9E3705C7_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_941ED7C919523397_GET_DISPLAYS_OFFSET))(this);
	}

	::Class_1_E2FB7E5A9E3705C7_1* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_E2FB7E5A9E3705C7_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_941ED7C919523397_METHOD_1_CA99028638214CFF_OFFSET))(this, a1);
	}
};
