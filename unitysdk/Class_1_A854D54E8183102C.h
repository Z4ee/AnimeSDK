#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE3F93B4A579826A;
namespace Google::Protobuf { class ByteString; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_A854D54E8183102C_METHOD_1_29482B97EE0AC85B_OFFSET UNITYSDK_OFFSET(0xC385B70)
#define CLASS_1_A854D54E8183102C_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0xC3861F0)
#define CLASS_1_A854D54E8183102C_METHOD_1_9ADA209B18F353E5_OFFSET UNITYSDK_OFFSET(0xC385D60)
#define CLASS_1_A854D54E8183102C_METHOD_1_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0xC386320)
#define CLASS_1_A854D54E8183102C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3865C0)

inline static constexpr unsigned int Class_1_A854D54E8183102C_TypeDefinitionIndex = 66722;

class Class_1_A854D54E8183102C : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_GBKLKFDBLDH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A854D54E8183102C_TypeDefinitionIndex)->GetStaticField(0x10DB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A854D54E8183102C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_29482B97EE0AC85B(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_A854D54E8183102C_METHOD_1_29482B97EE0AC85B_OFFSET))(this, a1);
	}

	::System::Void Method_1_9ADA209B18F353E5(::System::Collections::Generic::IList_1<::Class_1_BE3F93B4A579826A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_BE3F93B4A579826A*>*))((::PBYTE)hIl2Cpp + CLASS_1_A854D54E8183102C_METHOD_1_9ADA209B18F353E5_OFFSET))(this, a1);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_BE3F93B4A579826A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE3F93B4A579826A*))((::PBYTE)hIl2Cpp + CLASS_1_A854D54E8183102C_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_C6E4AB6C40FAF7DC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A854D54E8183102C_METHOD_1_C6E4AB6C40FAF7DC_OFFSET))();
	}
};
