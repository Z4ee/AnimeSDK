#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

namespace MoleMole { class UserLocalDataItem; }
template <typename T> class Class_0_16E4307DCC419505_153;
template <typename T> class Class_0_16E4307DCC419505_165;
template <typename T> class Class_1_4BC87A1432B12C4C;

#define CLASS_2_C19E28F48F3E8C80_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x1254ADE0)
#define CLASS_2_C19E28F48F3E8C80_METHOD_2_E639AC66E23A9DAF_OFFSET UNITYSDK_OFFSET(0x1254B0F0)
#define CLASS_2_C19E28F48F3E8C80_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1254ABD0)
#define CLASS_2_C19E28F48F3E8C80__CTOR_OFFSET UNITYSDK_OFFSET(0x1254AD80)

inline static constexpr unsigned int Class_2_C19E28F48F3E8C80_TypeDefinitionIndex = 76673;

class Class_2_C19E28F48F3E8C80 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::UInt32>* Field_2_1; // 0x60
	::MoleMole::UserLocalDataItem* Field_2_4; // 0x68
	::Class_0_16E4307DCC419505_165<::System::UInt32>* Field_2_2; // 0x70
	::Class_0_16E4307DCC419505_153<::System::Boolean>* Field_2_3; // 0x78
	::Class_1_4BC87A1432B12C4C<::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C19E28F48F3E8C80__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C19E28F48F3E8C80_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C19E28F48F3E8C80_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Boolean Method_2_E639AC66E23A9DAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C19E28F48F3E8C80_METHOD_2_E639AC66E23A9DAF_OFFSET))(this);
	}
};
