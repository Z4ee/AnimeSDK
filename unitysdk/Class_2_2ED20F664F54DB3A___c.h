#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_2ED20F664F54DB3A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA797C40)
#define CLASS_2_2ED20F664F54DB3A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA797C70)
#define CLASS_2_2ED20F664F54DB3A___C___CTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0xA797C80)

inline static constexpr unsigned int Class_2_2ED20F664F54DB3A___c_TypeDefinitionIndex = 64395;

class Class_2_2ED20F664F54DB3A___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>** StaticGet___9__42_0()
	{
		return (::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2ED20F664F54DB3A___c_TypeDefinitionIndex)->GetStaticField(0x6B390);
	}
	static ::Class_2_2ED20F664F54DB3A___c** StaticGet___9()
	{
		return (::Class_2_2ED20F664F54DB3A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2ED20F664F54DB3A___c_TypeDefinitionIndex)->GetStaticField(0x6B398);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__42_0(::RPG::Client::MonoEffectPluginMahJongItem* l, ::RPG::Client::MonoEffectPluginMahJongItem* r)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*, ::RPG::Client::MonoEffectPluginMahJongItem*))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A___C___CTOR_B__42_0_OFFSET))(this, l, r);
	}
};
