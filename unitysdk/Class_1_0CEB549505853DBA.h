#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1116;
class Class_0_16E4307DCC419505_904;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0CEB549505853DBA_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x183DBC70)
#define CLASS_1_0CEB549505853DBA_METHOD_1_A420AEC4D83C2365_OFFSET UNITYSDK_OFFSET(0x183DBE50)
#define CLASS_1_0CEB549505853DBA_METHOD_1_D1B1E19AC459D83C_OFFSET UNITYSDK_OFFSET(0x183DBD20)
#define CLASS_1_0CEB549505853DBA_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x183DBDB0)
#define CLASS_1_0CEB549505853DBA__CTOR_OFFSET UNITYSDK_OFFSET(0x183DC140)

inline static constexpr unsigned int Class_1_0CEB549505853DBA_TypeDefinitionIndex = 70014;

class Class_1_0CEB549505853DBA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1116*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CEB549505853DBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_1116* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1116*))((::PBYTE)hIl2Cpp + CLASS_1_0CEB549505853DBA_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1B1E19AC459D83C(::Class_0_16E4307DCC419505_1116* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1116*))((::PBYTE)hIl2Cpp + CLASS_1_0CEB549505853DBA_METHOD_1_D1B1E19AC459D83C_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CEB549505853DBA_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::String* Method_1_A420AEC4D83C2365(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_904* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_904*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_0CEB549505853DBA_METHOD_1_A420AEC4D83C2365_OFFSET))(this, a1, a2, a3, a4);
	}
};
