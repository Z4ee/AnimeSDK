#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_230F5EDDB35DAEBA;
class Class_2_D55679E3C796A7AF;
class Class_3_CD59F26A5F0E803D;
namespace System { class String; }

#define CLASS_1_18A07E5ABF4F7C58_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17AA96C0)
#define CLASS_1_18A07E5ABF4F7C58_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17AA95B0)
#define CLASS_1_18A07E5ABF4F7C58_METHOD_1_5AC715804517063C_OFFSET UNITYSDK_OFFSET(0x17AAA1C0)
#define CLASS_1_18A07E5ABF4F7C58_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x17AAA8E0)
#define CLASS_1_18A07E5ABF4F7C58_METHOD_1_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x17AA9710)
#define CLASS_1_18A07E5ABF4F7C58_METHOD_1_BF997E29913E9678_OFFSET UNITYSDK_OFFSET(0x17AAA9E0)
#define CLASS_1_18A07E5ABF4F7C58_METHOD_1_F31751E85D234B4D_OFFSET UNITYSDK_OFFSET(0x17AAA960)
#define CLASS_1_18A07E5ABF4F7C58_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x17AAA100)
#define CLASS_1_18A07E5ABF4F7C58__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA95A0)

inline static constexpr unsigned int Class_1_18A07E5ABF4F7C58_TypeDefinitionIndex = 75514;

class Class_1_18A07E5ABF4F7C58 : public ::System::Object
{
public:
	// static const ::System::String* JJNNDIOADFH; // 0x0
	// static const ::System::Single DIHJHNPECGC; // 0x0
	// static const ::System::String* OCFEGONKEIH; // 0x0
	// static const ::System::String* HHDEFKDPJML; // 0x0
	::Class_3_CD59F26A5F0E803D* PDENFEFCAGN; // 0x10
	::Class_2_D55679E3C796A7AF* EEFMDEHLLFI; // 0x18
	::System::Boolean EFEAMKEFOBL; // 0x20

	::System::Void _ctor(::Class_2_D55679E3C796A7AF* a1, ::Class_3_CD59F26A5F0E803D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D55679E3C796A7AF*, ::Class_3_CD59F26A5F0E803D*))((::PBYTE)hIl2Cpp + CLASS_1_18A07E5ABF4F7C58__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18A07E5ABF4F7C58_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18A07E5ABF4F7C58_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18A07E5ABF4F7C58_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_18A07E5ABF4F7C58_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_F31751E85D234B4D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_18A07E5ABF4F7C58_METHOD_1_F31751E85D234B4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AC715804517063C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18A07E5ABF4F7C58_METHOD_1_5AC715804517063C_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18A07E5ABF4F7C58_METHOD_1_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_1_BF997E29913E9678(::Class_2_230F5EDDB35DAEBA* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_230F5EDDB35DAEBA*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_18A07E5ABF4F7C58_METHOD_1_BF997E29913E9678_OFFSET))(this, a1, a2, a3);
	}
};
