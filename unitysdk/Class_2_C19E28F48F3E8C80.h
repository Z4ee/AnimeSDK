#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

namespace MoleMole { class UserLocalDataItem; }
template <typename T> class Class_0_16E4307DCC41950C_12;
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_1_3DF236F531F5694C;

#define CLASS_2_C19E28F48F3E8C80_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x169D91B0)
#define CLASS_2_C19E28F48F3E8C80_METHOD_2_E639AC66E23A9DAF_OFFSET UNITYSDK_OFFSET(0x169D94D0)
#define CLASS_2_C19E28F48F3E8C80_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x169D8F90)
#define CLASS_2_C19E28F48F3E8C80__CTOR_OFFSET UNITYSDK_OFFSET(0x169D9150)

inline static constexpr unsigned int Class_2_C19E28F48F3E8C80_TypeDefinitionIndex = 55222;

class Class_2_C19E28F48F3E8C80 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::UInt32>* Field_2_2; // 0x70
	::Class_1_3DF236F531F5694C<::System::Int32>* Field_2_0; // 0x78
	::Class_0_16E4307DCC41950C_12<::System::Boolean>* Field_2_3; // 0x80
	::MoleMole::UserLocalDataItem* Field_2_4; // 0x88
	::Class_0_16E4307DCC41950C_13<::System::UInt32>* Field_2_1; // 0x90

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
