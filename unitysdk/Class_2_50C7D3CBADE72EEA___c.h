#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_50C7D3CBADE72EEA___C_METHOD_1_8E7B470ED6F549B2_OFFSET UNITYSDK_OFFSET(0x1391D400)
#define CLASS_2_50C7D3CBADE72EEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1391D3B0)
#define CLASS_2_50C7D3CBADE72EEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1391D3F0)

inline static constexpr unsigned int Class_2_50C7D3CBADE72EEA___c_TypeDefinitionIndex = 60921;

class Class_2_50C7D3CBADE72EEA___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::System::Int32>** StaticGet___9__28_0()
	{
		return (::System::Func_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_50C7D3CBADE72EEA___c_TypeDefinitionIndex)->GetStaticField(0x47780);
	}
	static ::Class_2_50C7D3CBADE72EEA___c** StaticGet___9()
	{
		return (::Class_2_50C7D3CBADE72EEA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_50C7D3CBADE72EEA___c_TypeDefinitionIndex)->GetStaticField(0x47788);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_50C7D3CBADE72EEA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50C7D3CBADE72EEA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8E7B470ED6F549B2(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_50C7D3CBADE72EEA___C_METHOD_1_8E7B470ED6F549B2_OFFSET))(this, a1);
	}
};
