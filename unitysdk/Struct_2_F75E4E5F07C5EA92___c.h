#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F75E4E5F07C5EA92.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define STRUCT_2_F75E4E5F07C5EA92___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D8E310)
#define STRUCT_2_F75E4E5F07C5EA92___C__COMBINE_B__6_0_OFFSET UNITYSDK_OFFSET(0x19D8E360)
#define STRUCT_2_F75E4E5F07C5EA92___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D8E350)
#define STRUCT_2_F75E4E5F07C5EA92___C__GETDIRECTORIES_B__20_0_OFFSET UNITYSDK_OFFSET(0x19D8E3B0)
#define STRUCT_2_F75E4E5F07C5EA92___C__GETFILES_B__19_0_OFFSET UNITYSDK_OFFSET(0x19D8E370)

inline static constexpr unsigned int Struct_2_F75E4E5F07C5EA92___c_TypeDefinitionIndex = 9724;

class Struct_2_F75E4E5F07C5EA92___c : public ::System::Object
{
public:
	static ::System::Func_2<::Struct_2_F75E4E5F07C5EA92, ::System::String*>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::Struct_2_F75E4E5F07C5EA92, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F75E4E5F07C5EA92___c_TypeDefinitionIndex)->GetStaticField(0x19090);
	}
	static ::System::Func_2<::System::String*, ::Struct_2_F75E4E5F07C5EA92>** StaticGet___9__20_0()
	{
		return (::System::Func_2<::System::String*, ::Struct_2_F75E4E5F07C5EA92>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F75E4E5F07C5EA92___c_TypeDefinitionIndex)->GetStaticField(0x19098);
	}
	static ::Struct_2_F75E4E5F07C5EA92___c** StaticGet___9()
	{
		return (::Struct_2_F75E4E5F07C5EA92___c**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F75E4E5F07C5EA92___c_TypeDefinitionIndex)->GetStaticField(0x190A0);
	}
	static ::System::Func_2<::System::String*, ::Struct_2_F75E4E5F07C5EA92>** StaticGet___9__19_0()
	{
		return (::System::Func_2<::System::String*, ::Struct_2_F75E4E5F07C5EA92>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F75E4E5F07C5EA92___c_TypeDefinitionIndex)->GetStaticField(0x190A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F75E4E5F07C5EA92___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F75E4E5F07C5EA92___C__CTOR_OFFSET))(this);
	}

	::System::String* _Combine_b__6_0(::Struct_2_F75E4E5F07C5EA92 p)
	{
		return ((::System::String*(*)(::PVOID, ::Struct_2_F75E4E5F07C5EA92))((::PBYTE)hIl2Cpp + STRUCT_2_F75E4E5F07C5EA92___C__COMBINE_B__6_0_OFFSET))(this, p);
	}

	::Struct_2_F75E4E5F07C5EA92 _GetFiles_b__19_0(::System::String* p)
	{
		return ((::Struct_2_F75E4E5F07C5EA92(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F75E4E5F07C5EA92___C__GETFILES_B__19_0_OFFSET))(this, p);
	}

	::Struct_2_F75E4E5F07C5EA92 _GetDirectories_b__20_0(::System::String* p)
	{
		return ((::Struct_2_F75E4E5F07C5EA92(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F75E4E5F07C5EA92___C__GETDIRECTORIES_B__20_0_OFFSET))(this, p);
	}
};
