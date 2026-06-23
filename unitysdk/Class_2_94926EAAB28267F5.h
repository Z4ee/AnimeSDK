#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

class Class_1_8289F2785D9AA990;
class Class_3_BC378AF92CB85E1D;
class Class_3_CF6254B260CF5CF4;
namespace MoleMole::Config { class ConfigLockTarget; }

#define CLASS_2_94926EAAB28267F5_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x12D5C090)
#define CLASS_2_94926EAAB28267F5_METHOD_2_3CDB5DB8BD0AC758_OFFSET UNITYSDK_OFFSET(0x12D5BEF0)
#define CLASS_2_94926EAAB28267F5_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x12D5BD80)
#define CLASS_2_94926EAAB28267F5_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x12D5BFC0)
#define CLASS_2_94926EAAB28267F5__CTOR_OFFSET UNITYSDK_OFFSET(0x12D5BE80)

inline static constexpr unsigned int Class_2_94926EAAB28267F5_TypeDefinitionIndex = 41339;

class Class_2_94926EAAB28267F5 : public ::Class_1_8377BAB19A574A40
{
public:
	::Class_3_CF6254B260CF5CF4* Field_2_2; // 0x80
	::Class_1_8289F2785D9AA990* Field_2_4; // 0x88
	::MoleMole::Config::ConfigLockTarget* Field_2_0; // 0x90
	::Class_3_BC378AF92CB85E1D* Field_2_1; // 0x98
	::System::Int32 Field_2_3; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94926EAAB28267F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94926EAAB28267F5_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_3CDB5DB8BD0AC758(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94926EAAB28267F5_METHOD_2_3CDB5DB8BD0AC758_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94926EAAB28267F5_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94926EAAB28267F5_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
