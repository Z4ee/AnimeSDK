#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IPerObjectShadowEntity;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define PEROBJECTSHADOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4CB420)
#define PEROBJECTSHADOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CB460)
#define PEROBJECTSHADOW___C__SORTENTITIES_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C4CB470)

inline static constexpr unsigned int PerObjectShadow___c_TypeDefinitionIndex = 27150;

class PerObjectShadow___c : public ::System::Object
{
public:
	static ::System::Func_3<::IPerObjectShadowEntity*, ::IPerObjectShadowEntity*, ::System::Boolean>** StaticGet___9__43_0()
	{
		return (::System::Func_3<::IPerObjectShadowEntity*, ::IPerObjectShadowEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow___c_TypeDefinitionIndex)->GetStaticField(0x23390);
	}
	static ::PerObjectShadow___c** StaticGet___9()
	{
		return (::PerObjectShadow___c**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow___c_TypeDefinitionIndex)->GetStaticField(0x23398);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SortEntities_b__43_0(::IPerObjectShadowEntity* a, ::IPerObjectShadowEntity* b)
	{
		return ((::System::Boolean(*)(::PVOID, ::IPerObjectShadowEntity*, ::IPerObjectShadowEntity*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW___C__SORTENTITIES_B__43_0_OFFSET))(this, a, b);
	}
};
