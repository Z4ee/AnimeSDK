#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F938359207CCDBD_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_94C923B60D2F85D6___C_METHOD_1_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0x1307FB70)
#define CLASS_1_94C923B60D2F85D6___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x1307FB60)
#define CLASS_1_94C923B60D2F85D6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1307FB10)
#define CLASS_1_94C923B60D2F85D6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1307FB50)

inline static constexpr unsigned int Class_1_94C923B60D2F85D6___c_TypeDefinitionIndex = 68431;

class Class_1_94C923B60D2F85D6___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::Enum_3_5F938359207CCDBD_1>** StaticGet___9__94_0()
	{
		return (::System::Func_2<::System::Int32, ::Enum_3_5F938359207CCDBD_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94C923B60D2F85D6___c_TypeDefinitionIndex)->GetStaticField(0x30460);
	}
	static ::System::Action** StaticGet___9__11_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94C923B60D2F85D6___c_TypeDefinitionIndex)->GetStaticField(0x30468);
	}
	static ::Class_1_94C923B60D2F85D6___c** StaticGet___9()
	{
		return (::Class_1_94C923B60D2F85D6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94C923B60D2F85D6___c_TypeDefinitionIndex)->GetStaticField(0x30470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94C923B60D2F85D6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94C923B60D2F85D6___C__CTOR_OFFSET))(this);
	}

	::Enum_3_5F938359207CCDBD_1 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_5F938359207CCDBD_1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_94C923B60D2F85D6___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}

	::System::Void Method_1_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94C923B60D2F85D6___C_METHOD_1_11D5322717FDFD9D_OFFSET))(this);
	}
};
