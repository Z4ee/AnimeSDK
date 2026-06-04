#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_C754764E80A7E657___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9FFA20)
#define CLASS_2_C754764E80A7E657___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FFA50)
#define CLASS_2_C754764E80A7E657___C___CTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0xB9FFA60)

inline static constexpr unsigned int Class_2_C754764E80A7E657___c_TypeDefinitionIndex = 65316;

class Class_2_C754764E80A7E657___c : public ::System::Object
{
public:
	static ::Class_2_C754764E80A7E657___c** StaticGet___9()
	{
		return (::Class_2_C754764E80A7E657___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C754764E80A7E657___c_TypeDefinitionIndex)->GetStaticField(0x5B270);
	}
	static ::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>** StaticGet___9__42_0()
	{
		return (::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C754764E80A7E657___c_TypeDefinitionIndex)->GetStaticField(0x5B278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__42_0(::RPG::Client::MonoEffectPluginMahJongItem* a1, ::RPG::Client::MonoEffectPluginMahJongItem* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*, ::RPG::Client::MonoEffectPluginMahJongItem*))((::PBYTE)hIl2Cpp + CLASS_2_C754764E80A7E657___C___CTOR_B__42_0_OFFSET))(this, a1, a2);
	}
};
