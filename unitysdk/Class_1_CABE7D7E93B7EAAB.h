#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_147;
class Class_0_16E4307DCC419505_148;
class Class_0_16E4307DCC419505_1531;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CABE7D7E93B7EAAB_METHOD_1_8211B8653EC8D3BE_1_OFFSET UNITYSDK_OFFSET(0xC2FF9D0)
#define CLASS_1_CABE7D7E93B7EAAB_METHOD_1_8211B8653EC8D3BE_OFFSET UNITYSDK_OFFSET(0xC2FF890)
#define CLASS_1_CABE7D7E93B7EAAB__CTOR_OFFSET UNITYSDK_OFFSET(0xC2FF780)

inline static constexpr unsigned int Class_1_CABE7D7E93B7EAAB_TypeDefinitionIndex = 80144;

class Class_1_CABE7D7E93B7EAAB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_147*>* DAIDALOOHGB; // 0x10
	::Class_0_16E4307DCC419505_1531* CEFLLELKFOP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_148*>* GBIKFCJGFEL; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_1531* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1531*))((::PBYTE)hIl2Cpp + CLASS_1_CABE7D7E93B7EAAB__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_148* Method_1_8211B8653EC8D3BE(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_148*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CABE7D7E93B7EAAB_METHOD_1_8211B8653EC8D3BE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_147* Method_1_8211B8653EC8D3BE_1(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_147*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CABE7D7E93B7EAAB_METHOD_1_8211B8653EC8D3BE_1_OFFSET))(this, a1);
	}
};
