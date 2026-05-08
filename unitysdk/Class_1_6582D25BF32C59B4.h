#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E5778BB52E10271;
class Class_1_4F9417780723166C;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6582D25BF32C59B4_METHOD_1_20B9919E34C59D5A_OFFSET UNITYSDK_OFFSET(0x1441C170)
#define CLASS_1_6582D25BF32C59B4_METHOD_1_8A50D13B34758451_OFFSET UNITYSDK_OFFSET(0x1441C6C0)
#define CLASS_1_6582D25BF32C59B4_METHOD_1_CEB42479659441F3_OFFSET UNITYSDK_OFFSET(0x1441C7F0)
#define CLASS_1_6582D25BF32C59B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1441C160)

inline static constexpr unsigned int Class_1_6582D25BF32C59B4_TypeDefinitionIndex = 60916;

class Class_1_6582D25BF32C59B4 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6582D25BF32C59B4__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_20B9919E34C59D5A(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6582D25BF32C59B4_METHOD_1_20B9919E34C59D5A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A50D13B34758451(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6582D25BF32C59B4_METHOD_1_8A50D13B34758451_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEB42479659441F3(::Class_1_4F9417780723166C* a1, ::System::Collections::Generic::List_1<::Class_1_0E5778BB52E10271*>*& a2, ::MoleMole::UIHollowCardOptionsDialogContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F9417780723166C*, ::System::Collections::Generic::List_1<::Class_1_0E5778BB52E10271*>*&, ::MoleMole::UIHollowCardOptionsDialogContext*))((::PBYTE)hIl2Cpp + CLASS_1_6582D25BF32C59B4_METHOD_1_CEB42479659441F3_OFFSET))(this, a1, a2, a3);
	}
};
