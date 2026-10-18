#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1059;
class Class_0_16E4307DCC419505_1287;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0CEB549505853DBA_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x15A831E0)
#define CLASS_1_0CEB549505853DBA_METHOD_1_A420AEC4D83C2365_OFFSET UNITYSDK_OFFSET(0x15A833C0)
#define CLASS_1_0CEB549505853DBA_METHOD_1_D1B1E19AC459D83C_OFFSET UNITYSDK_OFFSET(0x15A83290)
#define CLASS_1_0CEB549505853DBA_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x15A83320)
#define CLASS_1_0CEB549505853DBA__CTOR_OFFSET UNITYSDK_OFFSET(0x15A836B0)

inline static constexpr unsigned int Class_1_0CEB549505853DBA_TypeDefinitionIndex = 73368;

class Class_1_0CEB549505853DBA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1287*>* BHNIHOCEACC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CEB549505853DBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_1287* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1287*))((::PBYTE)hIl2Cpp + CLASS_1_0CEB549505853DBA_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1B1E19AC459D83C(::Class_0_16E4307DCC419505_1287* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1287*))((::PBYTE)hIl2Cpp + CLASS_1_0CEB549505853DBA_METHOD_1_D1B1E19AC459D83C_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CEB549505853DBA_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::String* Method_1_A420AEC4D83C2365(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_1059* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_1059*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_0CEB549505853DBA_METHOD_1_A420AEC4D83C2365_OFFSET))(this, a1, a2, a3, a4);
	}
};
