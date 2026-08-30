#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_61450AD5FEE1D449_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1DAD5F10)
#define CLASS_1_61450AD5FEE1D449__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD62A0)

inline static constexpr unsigned int Class_1_61450AD5FEE1D449_TypeDefinitionIndex = 13858;

class Class_1_61450AD5FEE1D449 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* FMMELPPDMKI; // 0x10
	::Il2CppArray<::System::UInt32>* KOAGHJCOOGA; // 0x18
	::RPG::Client::TextID FAHDNMHFOKD; // 0x20
	::System::UInt32 GGKPLJJMBBA; // 0x30
	::System::UInt32 GABPGBDNDEH; // 0x34
	::System::Boolean CBCAAENONPB; // 0x38
	::System::UInt32 EPDCFPAADJF; // 0x3C
	::RPG::Client::TextID DCDCCOBHCAP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61450AD5FEE1D449__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_61450AD5FEE1D449*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_61450AD5FEE1D449*&))((::PBYTE)hIl2Cpp + CLASS_1_61450AD5FEE1D449_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
