#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_877AA22B04AFB81F_2;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_ACD9131A238D8088___C_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x1765A980)
#define CLASS_1_ACD9131A238D8088___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1765A930)
#define CLASS_1_ACD9131A238D8088___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1765A970)

inline static constexpr unsigned int Class_1_ACD9131A238D8088___c_TypeDefinitionIndex = 72097;

class Class_1_ACD9131A238D8088___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_877AA22B04AFB81F_2*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::Class_1_877AA22B04AFB81F_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ACD9131A238D8088___c_TypeDefinitionIndex)->GetStaticField(0x41490);
	}
	static ::Class_1_ACD9131A238D8088___c** StaticGet___9()
	{
		return (::Class_1_ACD9131A238D8088___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ACD9131A238D8088___c_TypeDefinitionIndex)->GetStaticField(0x41498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ACD9131A238D8088___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACD9131A238D8088___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8E8225D5C438C827(::Class_1_877AA22B04AFB81F_2* a1, ::Class_1_877AA22B04AFB81F_2* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_877AA22B04AFB81F_2*, ::Class_1_877AA22B04AFB81F_2*))((::PBYTE)hIl2Cpp + CLASS_1_ACD9131A238D8088___C_METHOD_1_8E8225D5C438C827_OFFSET))(this, a1, a2);
	}
};
