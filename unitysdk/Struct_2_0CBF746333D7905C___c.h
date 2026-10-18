#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0CBF746333D7905C.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define STRUCT_2_0CBF746333D7905C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC12010)
#define STRUCT_2_0CBF746333D7905C___C__COMBINE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1EC12060)
#define STRUCT_2_0CBF746333D7905C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC12050)
#define STRUCT_2_0CBF746333D7905C___C__GETDIRECTORIES_B__20_0_OFFSET UNITYSDK_OFFSET(0x1EC12140)
#define STRUCT_2_0CBF746333D7905C___C__GETFILES_B__19_0_OFFSET UNITYSDK_OFFSET(0x1EC120B0)

inline static constexpr unsigned int Struct_2_0CBF746333D7905C___c_TypeDefinitionIndex = 35294;

class Struct_2_0CBF746333D7905C___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::Struct_2_0CBF746333D7905C>** StaticGet___9__20_0()
	{
		return (::System::Func_2<::System::String*, ::Struct_2_0CBF746333D7905C>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0CBF746333D7905C___c_TypeDefinitionIndex)->GetStaticField(0x55360);
	}
	static ::System::Func_2<::System::String*, ::Struct_2_0CBF746333D7905C>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::System::String*, ::Struct_2_0CBF746333D7905C>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0CBF746333D7905C___c_TypeDefinitionIndex)->GetStaticField(0x55368);
	}
	static ::System::Func_2<::Struct_2_0CBF746333D7905C, ::System::String*>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Struct_2_0CBF746333D7905C, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0CBF746333D7905C___c_TypeDefinitionIndex)->GetStaticField(0x55370);
	}
	static ::Struct_2_0CBF746333D7905C___c** StaticGet___9()
	{
		return (::Struct_2_0CBF746333D7905C___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_0CBF746333D7905C___c_TypeDefinitionIndex)->GetStaticField(0x55378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_0CBF746333D7905C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0CBF746333D7905C___C__CTOR_OFFSET))(this);
	}

	::System::String* _Combine_b__6_0(::Struct_2_0CBF746333D7905C a1)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_0CBF746333D7905C))((::PBYTE)hIl2Cpp + STRUCT_2_0CBF746333D7905C___C__COMBINE_B__6_0_OFFSET))(this, a1);
	}

	::Struct_2_0CBF746333D7905C _GetFiles_b__19_0(::System::String* a1)
	{
		return ((::Struct_2_0CBF746333D7905C(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_0CBF746333D7905C___C__GETFILES_B__19_0_OFFSET))(this, a1);
	}

	::Struct_2_0CBF746333D7905C _GetDirectories_b__20_0(::System::String* a1)
	{
		return ((::Struct_2_0CBF746333D7905C(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_0CBF746333D7905C___C__GETDIRECTORIES_B__20_0_OFFSET))(this, a1);
	}
};
