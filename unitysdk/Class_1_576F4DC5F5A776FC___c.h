#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_576F4DC5F5A776FC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C08BD0)
#define CLASS_1_576F4DC5F5A776FC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C08C00)
#define CLASS_1_576F4DC5F5A776FC___C__SENDINITREQUEST_B__30_0_OFFSET UNITYSDK_OFFSET(0x16C08CF0)
#define CLASS_1_576F4DC5F5A776FC___C___REQUESTSTARTMATCHANDBEGIN_B__16_1_OFFSET UNITYSDK_OFFSET(0x16C08C80)
#define CLASS_1_576F4DC5F5A776FC___C___REQUESTSTARTMATCHANDBEGIN_B__16_3_OFFSET UNITYSDK_OFFSET(0x16C08C10)

inline static constexpr unsigned int Class_1_576F4DC5F5A776FC___c_TypeDefinitionIndex = 80402;

class Class_1_576F4DC5F5A776FC___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Exception*>** StaticGet___9__16_1()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_576F4DC5F5A776FC___c_TypeDefinitionIndex)->GetStaticField(0x67720);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__30_0()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_576F4DC5F5A776FC___c_TypeDefinitionIndex)->GetStaticField(0x67728);
	}
	static ::Class_1_576F4DC5F5A776FC___c** StaticGet___9()
	{
		return (::Class_1_576F4DC5F5A776FC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_576F4DC5F5A776FC___c_TypeDefinitionIndex)->GetStaticField(0x67730);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__16_3()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_576F4DC5F5A776FC___c_TypeDefinitionIndex)->GetStaticField(0x67738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_576F4DC5F5A776FC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_576F4DC5F5A776FC___C__CTOR_OFFSET))(this);
	}

	::System::Void __RequestStartMatchAndBegin_b__16_3(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_576F4DC5F5A776FC___C___REQUESTSTARTMATCHANDBEGIN_B__16_3_OFFSET))(this, a1);
	}

	::System::Void __RequestStartMatchAndBegin_b__16_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_576F4DC5F5A776FC___C___REQUESTSTARTMATCHANDBEGIN_B__16_1_OFFSET))(this, a1);
	}

	::System::Void _SendInitRequest_b__30_0(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_576F4DC5F5A776FC___C__SENDINITREQUEST_B__30_0_OFFSET))(this, a1);
	}
};
