#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44340B2393166A74;
class Class_1_D17272E82AE804C2_695;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_4D404B9A04A2F30A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5862D0)
#define CLASS_1_4D404B9A04A2F30A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB586300)
#define CLASS_1_4D404B9A04A2F30A___C___ONQUERYSERVERINFO_B__9_0_OFFSET UNITYSDK_OFFSET(0xB586310)

inline static constexpr unsigned int Class_1_4D404B9A04A2F30A___c_TypeDefinitionIndex = 80231;

class Class_1_4D404B9A04A2F30A___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_D17272E82AE804C2_695*, ::Class_1_44340B2393166A74*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Class_1_D17272E82AE804C2_695*, ::Class_1_44340B2393166A74*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D404B9A04A2F30A___c_TypeDefinitionIndex)->GetStaticField(0x5F480);
	}
	static ::Class_1_4D404B9A04A2F30A___c** StaticGet___9()
	{
		return (::Class_1_4D404B9A04A2F30A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D404B9A04A2F30A___c_TypeDefinitionIndex)->GetStaticField(0x5F488);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D404B9A04A2F30A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D404B9A04A2F30A___C__CTOR_OFFSET))(this);
	}

	::Class_1_44340B2393166A74* __OnQueryServerInfo_b__9_0(::Class_1_D17272E82AE804C2_695* a1)
	{
		return ((::Class_1_44340B2393166A74*(*)(::PVOID, ::Class_1_D17272E82AE804C2_695*))((::PBYTE)hIl2Cpp + CLASS_1_4D404B9A04A2F30A___C___ONQUERYSERVERINFO_B__9_0_OFFSET))(this, a1);
	}
};
