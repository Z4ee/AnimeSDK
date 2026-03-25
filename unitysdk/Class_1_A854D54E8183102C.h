#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_33CC5447741F7959;
namespace Google::Protobuf { class ByteString; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_A854D54E8183102C_METHOD_1_29482B97EE0AC85B_OFFSET UNITYSDK_OFFSET(0x11756460)
#define CLASS_1_A854D54E8183102C_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x11756950)
#define CLASS_1_A854D54E8183102C_METHOD_1_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0x11756A80)
#define CLASS_1_A854D54E8183102C_METHOD_1_DF979E81E479E9C4_OFFSET UNITYSDK_OFFSET(0x11756650)
#define CLASS_1_A854D54E8183102C__CTOR_OFFSET UNITYSDK_OFFSET(0x11756D20)

inline static constexpr unsigned int Class_1_A854D54E8183102C_TypeDefinitionIndex = 54284;

class Class_1_A854D54E8183102C : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A854D54E8183102C_TypeDefinitionIndex)->GetStaticField(0x118B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A854D54E8183102C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_29482B97EE0AC85B(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_A854D54E8183102C_METHOD_1_29482B97EE0AC85B_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF979E81E479E9C4(::System::Collections::Generic::IList_1<::Class_1_33CC5447741F7959*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_33CC5447741F7959*>*))((::PBYTE)hIl2Cpp + CLASS_1_A854D54E8183102C_METHOD_1_DF979E81E479E9C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_33CC5447741F7959* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_33CC5447741F7959*))((::PBYTE)hIl2Cpp + CLASS_1_A854D54E8183102C_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_C6E4AB6C40FAF7DC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A854D54E8183102C_METHOD_1_C6E4AB6C40FAF7DC_OFFSET))();
	}
};
