#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_EC15A1019233B32C___C_METHOD_1_7BBF135FC9E2C20B_OFFSET UNITYSDK_OFFSET(0x14134080)
#define CLASS_2_EC15A1019233B32C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14134030)
#define CLASS_2_EC15A1019233B32C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14134070)

inline static constexpr unsigned int Class_2_EC15A1019233B32C___c_TypeDefinitionIndex = 73951;

class Class_2_EC15A1019233B32C___c : public ::System::Object
{
public:
	static ::Class_2_EC15A1019233B32C___c** StaticGet___9()
	{
		return (::Class_2_EC15A1019233B32C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC15A1019233B32C___c_TypeDefinitionIndex)->GetStaticField(0x44310);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__54_15()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC15A1019233B32C___c_TypeDefinitionIndex)->GetStaticField(0x44318);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7BBF135FC9E2C20B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC15A1019233B32C___C_METHOD_1_7BBF135FC9E2C20B_OFFSET))(this);
	}
};
