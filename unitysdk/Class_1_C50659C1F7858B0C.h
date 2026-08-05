#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6ABD98018F0D4599;
class Class_3_5139B0F7496B8379_7;
class Class_3_AE02BC8285203464_36;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_1_C50659C1F7858B0C_METHOD_1_06B247162973D6FD_OFFSET UNITYSDK_OFFSET(0x14BA4F60)
#define CLASS_1_C50659C1F7858B0C_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET UNITYSDK_OFFSET(0x14BA4BA0)
#define CLASS_1_C50659C1F7858B0C_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x14BA4C20)
#define CLASS_1_C50659C1F7858B0C__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA4B20)

inline static constexpr unsigned int Class_1_C50659C1F7858B0C_TypeDefinitionIndex = 57606;

class Class_1_C50659C1F7858B0C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_6ABD98018F0D4599*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CD7E7AF7EB4E1ED5(::Class_3_AE02BC8285203464_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_36*))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_1_06B247162973D6FD(::Class_1_27F786FF2A30778C<::Class_3_5139B0F7496B8379_7*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27F786FF2A30778C<::Class_3_5139B0F7496B8379_7*>*))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C_METHOD_1_06B247162973D6FD_OFFSET))(this, a1);
	}
};
