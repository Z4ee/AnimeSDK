#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C47771FEB67CA8DB_METHOD_1_1251E081592D8DC4_OFFSET UNITYSDK_OFFSET(0x16C4EF80)
#define CLASS_1_C47771FEB67CA8DB_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C4EED0)
#define CLASS_1_C47771FEB67CA8DB_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16C4EE30)
#define CLASS_1_C47771FEB67CA8DB_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16C4EF70)
#define CLASS_1_C47771FEB67CA8DB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16C4EDE0)
#define CLASS_1_C47771FEB67CA8DB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16C4EE20)
#define CLASS_1_C47771FEB67CA8DB_METHOD_1_F624506052E4790C_OFFSET UNITYSDK_OFFSET(0x16C4EE40)
#define CLASS_1_C47771FEB67CA8DB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4EDC0)

inline static constexpr unsigned int Class_1_C47771FEB67CA8DB_TypeDefinitionIndex = 65459;

class Class_1_C47771FEB67CA8DB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_C47771FEB67CA8DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47771FEB67CA8DB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47771FEB67CA8DB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47771FEB67CA8DB_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_F624506052E4790C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C47771FEB67CA8DB_METHOD_1_F624506052E4790C_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47771FEB67CA8DB_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C47771FEB67CA8DB_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_1251E081592D8DC4(::Class_1_1EA8435E138F2E03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_C47771FEB67CA8DB_METHOD_1_1251E081592D8DC4_OFFSET))(this, a1);
	}
};
