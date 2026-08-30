#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE8A1C72010227C5;
class Class_1_F41B9D33ACD5925F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2839EDE8633A54DD_1_GET_RECORDS_OFFSET UNITYSDK_OFFSET(0x16E39820)
#define CLASS_1_2839EDE8633A54DD_1_METHOD_1_CA99028638214CFF_OFFSET UNITYSDK_OFFSET(0x16E398B0)
#define CLASS_1_2839EDE8633A54DD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16E39830)

inline static constexpr unsigned int Class_1_2839EDE8633A54DD_1_TypeDefinitionIndex = 63990;

class Class_1_2839EDE8633A54DD_1 : public ::System::Object
{
public:
	::Class_1_F41B9D33ACD5925F* DACMBPLECJN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BE8A1C72010227C5*>* _Records_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_F41B9D33ACD5925F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F41B9D33ACD5925F*))((::PBYTE)hIl2Cpp + CLASS_1_2839EDE8633A54DD_1__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BE8A1C72010227C5*>* get_Records()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BE8A1C72010227C5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2839EDE8633A54DD_1_GET_RECORDS_OFFSET))(this);
	}

	::Class_1_BE8A1C72010227C5* Method_1_CA99028638214CFF(::System::UInt32 a1)
	{
		return ((::Class_1_BE8A1C72010227C5*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2839EDE8633A54DD_1_METHOD_1_CA99028638214CFF_OFFSET))(this, a1);
	}
};
