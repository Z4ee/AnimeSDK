#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E5778BB52E10271;
class Class_1_4F9417780723166C;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82F29F816FBCC2C8_METHOD_1_20B9919E34C59D5A_OFFSET UNITYSDK_OFFSET(0x165B63C0)
#define CLASS_1_82F29F816FBCC2C8_METHOD_1_8A50D13B34758451_OFFSET UNITYSDK_OFFSET(0x165B7000)
#define CLASS_1_82F29F816FBCC2C8_METHOD_1_9D9DF1E30DDAE579_OFFSET UNITYSDK_OFFSET(0x165B6920)
#define CLASS_1_82F29F816FBCC2C8__CTOR_OFFSET UNITYSDK_OFFSET(0x165B63B0)

inline static constexpr unsigned int Class_1_82F29F816FBCC2C8_TypeDefinitionIndex = 67287;

class Class_1_82F29F816FBCC2C8 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82F29F816FBCC2C8__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_20B9919E34C59D5A(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_82F29F816FBCC2C8_METHOD_1_20B9919E34C59D5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9DF1E30DDAE579(::Class_1_4F9417780723166C* a1, ::System::Collections::Generic::List_1<::Class_1_0E5778BB52E10271*>*& a2, ::MoleMole::UIHollowCardOptionsDialogContext* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F9417780723166C*, ::System::Collections::Generic::List_1<::Class_1_0E5778BB52E10271*>*&, ::MoleMole::UIHollowCardOptionsDialogContext*))((::PBYTE)hIl2Cpp + CLASS_1_82F29F816FBCC2C8_METHOD_1_9D9DF1E30DDAE579_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8A50D13B34758451(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_82F29F816FBCC2C8_METHOD_1_8A50D13B34758451_OFFSET))(this, a1);
	}
};
