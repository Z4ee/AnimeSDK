#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_796E512D7EBA9D90___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165A21E0)
#define CLASS_2_796E512D7EBA9D90___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165A2210)
#define CLASS_2_796E512D7EBA9D90___C___CTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x165A2220)

inline static constexpr unsigned int Class_2_796E512D7EBA9D90___c_TypeDefinitionIndex = 69828;

class Class_2_796E512D7EBA9D90___c : public ::System::Object
{
public:
	static ::Class_2_796E512D7EBA9D90___c** StaticGet___9()
	{
		return (::Class_2_796E512D7EBA9D90___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_796E512D7EBA9D90___c_TypeDefinitionIndex)->GetStaticField(0x609A0);
	}
	static ::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>** StaticGet___9__42_0()
	{
		return (::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_796E512D7EBA9D90___c_TypeDefinitionIndex)->GetStaticField(0x609A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_796E512D7EBA9D90___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_796E512D7EBA9D90___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__42_0(::RPG::Client::MonoEffectPluginMahJongItem* a1, ::RPG::Client::MonoEffectPluginMahJongItem* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*, ::RPG::Client::MonoEffectPluginMahJongItem*))((::PBYTE)hIl2Cpp + CLASS_2_796E512D7EBA9D90___C___CTOR_B__42_0_OFFSET))(this, a1, a2);
	}
};
