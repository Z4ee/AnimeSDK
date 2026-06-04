#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F8E102AD914E06E3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x136124B0)
#define CLASS_1_F8E102AD914E06E3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x136124F0)
#define CLASS_1_F8E102AD914E06E3___C__GET_ISVALID_B__4_0_OFFSET UNITYSDK_OFFSET(0x13612500)

inline static constexpr unsigned int Class_1_F8E102AD914E06E3___c_TypeDefinitionIndex = 60940;

class Class_1_F8E102AD914E06E3___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8E102AD914E06E3___c_TypeDefinitionIndex)->GetStaticField(0x48730);
	}
	static ::Class_1_F8E102AD914E06E3___c** StaticGet___9()
	{
		return (::Class_1_F8E102AD914E06E3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8E102AD914E06E3___c_TypeDefinitionIndex)->GetStaticField(0x48738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8E102AD914E06E3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8E102AD914E06E3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_IsValid_b__4_0(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_F8E102AD914E06E3___C__GET_ISVALID_B__4_0_OFFSET))(this, a1);
	}
};
