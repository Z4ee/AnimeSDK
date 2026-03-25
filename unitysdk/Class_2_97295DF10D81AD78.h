#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/Struct_2_76A4522D4905FF64.h"

class Class_2_97295DF10D81AD78_Class_1_12CFD4109BB62456;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_97295DF10D81AD78_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x890D990)
#define CLASS_2_97295DF10D81AD78_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x890D9A0)
#define CLASS_2_97295DF10D81AD78_METHOD_2_3086CC2E2F5D4474_OFFSET UNITYSDK_OFFSET(0x890D4D0)
#define CLASS_2_97295DF10D81AD78_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x890DAC0)
#define CLASS_2_97295DF10D81AD78_METHOD_2_D2967792C8AA78E6_OFFSET UNITYSDK_OFFSET(0x890D1D0)
#define CLASS_2_97295DF10D81AD78_METHOD_2_D78E7E5921B8B1C4_OFFSET UNITYSDK_OFFSET(0x890D5C0)
#define CLASS_2_97295DF10D81AD78_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x890CF30)
#define CLASS_2_97295DF10D81AD78__CTOR_OFFSET UNITYSDK_OFFSET(0x890DA00)
#define CLASS_2_97295DF10D81AD78___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x890DA60)

inline static constexpr unsigned int Class_2_97295DF10D81AD78_TypeDefinitionIndex = 48729;

class Class_2_97295DF10D81AD78 : public ::Class_1_47C4886CB6C61234
{
public:
	::System::Collections::Generic::List_1<::Class_2_97295DF10D81AD78_Class_1_12CFD4109BB62456*>* Field_2_1; // 0x20
	::System::Boolean _NeedLateUpdate_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78__CTOR_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_D2967792C8AA78E6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_METHOD_2_D2967792C8AA78E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_3086CC2E2F5D4474(::Struct_2_76A4522D4905FF64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_76A4522D4905FF64))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_METHOD_2_3086CC2E2F5D4474_OFFSET))(this, a1);
	}

	::System::Void Method_2_D78E7E5921B8B1C4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_METHOD_2_D78E7E5921B8B1C4_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_GET_NEEDLATEUPDATE_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
