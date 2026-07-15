#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C85C4DAB350DD5FC_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_0950A81C001CB7BF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186D85B0)
#define CLASS_1_0950A81C001CB7BF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186D85F0)
#define CLASS_1_0950A81C001CB7BF___C__GETRECOMMENDDECK_B__1_0_OFFSET UNITYSDK_OFFSET(0x186D8600)
#define CLASS_1_0950A81C001CB7BF___C___GETMASTERCARDPRESET_B__2_0_OFFSET UNITYSDK_OFFSET(0x186D8620)

inline static constexpr unsigned int Class_1_0950A81C001CB7BF___c_TypeDefinitionIndex = 76155;

class Class_1_0950A81C001CB7BF___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_C85C4DAB350DD5FC_2*, ::System::UInt32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_1_C85C4DAB350DD5FC_2*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0950A81C001CB7BF___c_TypeDefinitionIndex)->GetStaticField(0x65600);
	}
	static ::Class_1_0950A81C001CB7BF___c** StaticGet___9()
	{
		return (::Class_1_0950A81C001CB7BF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0950A81C001CB7BF___c_TypeDefinitionIndex)->GetStaticField(0x65608);
	}
	static ::System::Func_2<::Class_1_C85C4DAB350DD5FC_2*, ::System::UInt32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_C85C4DAB350DD5FC_2*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0950A81C001CB7BF___c_TypeDefinitionIndex)->GetStaticField(0x65610);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0950A81C001CB7BF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0950A81C001CB7BF___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetRecommendDeck_b__1_0(::Class_1_C85C4DAB350DD5FC_2* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + CLASS_1_0950A81C001CB7BF___C__GETRECOMMENDDECK_B__1_0_OFFSET))(this, a1);
	}

	::System::UInt32 __GetMasterCardPreset_b__2_0(::Class_1_C85C4DAB350DD5FC_2* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + CLASS_1_0950A81C001CB7BF___C___GETMASTERCARDPRESET_B__2_0_OFFSET))(this, a1);
	}
};
