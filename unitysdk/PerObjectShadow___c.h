#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IPerObjectShadowEntity;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define PEROBJECTSHADOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B06B240)
#define PEROBJECTSHADOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06B280)
#define PEROBJECTSHADOW___C__SORTENTITIES_B__41_0_OFFSET UNITYSDK_OFFSET(0x1B06B290)

inline static constexpr unsigned int PerObjectShadow___c_TypeDefinitionIndex = 26841;

class PerObjectShadow___c : public ::System::Object
{
public:
	static ::PerObjectShadow___c** StaticGet___9()
	{
		return (::PerObjectShadow___c**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow___c_TypeDefinitionIndex)->GetStaticField(0x21BF0);
	}
	static ::System::Func_3<::IPerObjectShadowEntity*, ::IPerObjectShadowEntity*, ::System::Boolean>** StaticGet___9__41_0()
	{
		return (::System::Func_3<::IPerObjectShadowEntity*, ::IPerObjectShadowEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadow___c_TypeDefinitionIndex)->GetStaticField(0x21BF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEROBJECTSHADOW___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SortEntities_b__41_0(::IPerObjectShadowEntity* a, ::IPerObjectShadowEntity* b)
	{
		return ((::System::Boolean(*)(::PVOID, ::IPerObjectShadowEntity*, ::IPerObjectShadowEntity*))((::PBYTE)hIl2Cpp + PEROBJECTSHADOW___C__SORTENTITIES_B__41_0_OFFSET))(this, a, b);
	}
};
