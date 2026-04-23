#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_A9854C4F46202100___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DBD140)
#define CLASS_1_A9854C4F46202100___C__CONVERTANDSETCATS_B__29_0_OFFSET UNITYSDK_OFFSET(0x17DBD1D0)
#define CLASS_1_A9854C4F46202100___C__CONVERTANDSETEFFECTS_B__30_0_OFFSET UNITYSDK_OFFSET(0x17DBD210)
#define CLASS_1_A9854C4F46202100___C__CONVERTANDSETSECTIONREGIONS_B__28_0_OFFSET UNITYSDK_OFFSET(0x17DBD190)
#define CLASS_1_A9854C4F46202100___C__CONVERTANDSETSPARKLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x17DBD250)
#define CLASS_1_A9854C4F46202100___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBD180)

inline static constexpr unsigned int Class_1_A9854C4F46202100___c_TypeDefinitionIndex = 34838;

class Class_1_A9854C4F46202100___c : public ::System::Object
{
public:
	static ::Class_1_A9854C4F46202100___c** StaticGet___9()
	{
		return (::Class_1_A9854C4F46202100___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9854C4F46202100___c_TypeDefinitionIndex)->GetStaticField(0x64730);
	}
	static ::System::Func_2<::System::String*, ::System::UInt32>** StaticGet___9__31_0()
	{
		return (::System::Func_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9854C4F46202100___c_TypeDefinitionIndex)->GetStaticField(0x64738);
	}
	static ::System::Func_2<::System::String*, ::System::UInt32>** StaticGet___9__28_0()
	{
		return (::System::Func_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9854C4F46202100___c_TypeDefinitionIndex)->GetStaticField(0x64740);
	}
	static ::System::Func_2<::System::String*, ::System::UInt32>** StaticGet___9__30_0()
	{
		return (::System::Func_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9854C4F46202100___c_TypeDefinitionIndex)->GetStaticField(0x64748);
	}
	static ::System::Func_2<::System::String*, ::System::UInt32>** StaticGet___9__29_0()
	{
		return (::System::Func_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9854C4F46202100___c_TypeDefinitionIndex)->GetStaticField(0x64750);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _ConvertAndSetSectionRegions_b__28_0(::System::String* s)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100___C__CONVERTANDSETSECTIONREGIONS_B__28_0_OFFSET))(this, s);
	}

	::System::UInt32 _ConvertAndSetCats_b__29_0(::System::String* s)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100___C__CONVERTANDSETCATS_B__29_0_OFFSET))(this, s);
	}

	::System::UInt32 _ConvertAndSetEffects_b__30_0(::System::String* s)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100___C__CONVERTANDSETEFFECTS_B__30_0_OFFSET))(this, s);
	}

	::System::UInt32 _ConvertAndSetSparkle_b__31_0(::System::String* s)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100___C__CONVERTANDSETSPARKLE_B__31_0_OFFSET))(this, s);
	}
};
