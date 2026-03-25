#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_06BD520BB50B7472___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1059E130)
#define CLASS_2_06BD520BB50B7472___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1059E170)
#define CLASS_2_06BD520BB50B7472___C___ONLANGUAGECHANGED_B__22_0_OFFSET UNITYSDK_OFFSET(0x1059E180)
#define CLASS_2_06BD520BB50B7472___C___ONLOGINFAILED_B__24_0_OFFSET UNITYSDK_OFFSET(0x1059E230)

inline static constexpr unsigned int Class_2_06BD520BB50B7472___c_TypeDefinitionIndex = 49537;

class Class_2_06BD520BB50B7472___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__24_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_06BD520BB50B7472___c_TypeDefinitionIndex)->GetStaticField(0x1A200);
	}
	static ::Class_2_06BD520BB50B7472___c** StaticGet___9()
	{
		return (::Class_2_06BD520BB50B7472___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_06BD520BB50B7472___c_TypeDefinitionIndex)->GetStaticField(0x1A208);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__22_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_06BD520BB50B7472___c_TypeDefinitionIndex)->GetStaticField(0x1A210);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnLanguageChanged_b__22_0(::System::Boolean success)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472___C___ONLANGUAGECHANGED_B__22_0_OFFSET))(this, success);
	}

	::System::Void __OnLoginFailed_b__24_0(::System::Boolean isOk)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_06BD520BB50B7472___C___ONLOGINFAILED_B__24_0_OFFSET))(this, isOk);
	}
};
