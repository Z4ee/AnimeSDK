#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6ABD98018F0D4599;
class Class_3_5139B0F7496B8379;
class Class_3_AE02BC8285203464_1;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_1_C50659C1F7858B0C_METHOD_1_06B247162973D6FD_OFFSET UNITYSDK_OFFSET(0x11C16180)
#define CLASS_1_C50659C1F7858B0C_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET UNITYSDK_OFFSET(0x11C15DD0)
#define CLASS_1_C50659C1F7858B0C_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x11C15E50)
#define CLASS_1_C50659C1F7858B0C__CTOR_OFFSET UNITYSDK_OFFSET(0x11C15D50)

inline static constexpr unsigned int Class_1_C50659C1F7858B0C_TypeDefinitionIndex = 54633;

class Class_1_C50659C1F7858B0C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_6ABD98018F0D4599*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CD7E7AF7EB4E1ED5(::Class_3_AE02BC8285203464_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_1*))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C_METHOD_1_CD7E7AF7EB4E1ED5_OFFSET))(this, a1);
	}

	::System::Void Method_1_06B247162973D6FD(::Class_1_8CC15846339E7FB0<::Class_3_5139B0F7496B8379*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::Class_3_5139B0F7496B8379*>*))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C_METHOD_1_06B247162973D6FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50659C1F7858B0C_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}
};
