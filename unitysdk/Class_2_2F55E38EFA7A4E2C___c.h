#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ACD9131A238D8088;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_2F55E38EFA7A4E2C___C_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x1234C0A0)
#define CLASS_2_2F55E38EFA7A4E2C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1234C050)
#define CLASS_2_2F55E38EFA7A4E2C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1234C090)

inline static constexpr unsigned int Class_2_2F55E38EFA7A4E2C___c_TypeDefinitionIndex = 76445;

class Class_2_2F55E38EFA7A4E2C___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_ACD9131A238D8088*>** StaticGet___9__30_0()
	{
		return (::System::Comparison_1<::Class_1_ACD9131A238D8088*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2F55E38EFA7A4E2C___c_TypeDefinitionIndex)->GetStaticField(0x44740);
	}
	static ::Class_2_2F55E38EFA7A4E2C___c** StaticGet___9()
	{
		return (::Class_2_2F55E38EFA7A4E2C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2F55E38EFA7A4E2C___c_TypeDefinitionIndex)->GetStaticField(0x44748);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2F55E38EFA7A4E2C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F55E38EFA7A4E2C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8E8225D5C438C827(::Class_1_ACD9131A238D8088* a1, ::Class_1_ACD9131A238D8088* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_ACD9131A238D8088*, ::Class_1_ACD9131A238D8088*))((::PBYTE)hIl2Cpp + CLASS_2_2F55E38EFA7A4E2C___C_METHOD_1_8E8225D5C438C827_OFFSET))(this, a1, a2);
	}
};
