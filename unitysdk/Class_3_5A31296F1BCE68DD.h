#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_CD3FBE690F475501_1;
namespace MoleMole { class MonoEffectPluginGroundLighting; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5A31296F1BCE68DD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13B720D0)
#define CLASS_3_5A31296F1BCE68DD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13B721B0)
#define CLASS_3_5A31296F1BCE68DD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13B72240)
#define CLASS_3_5A31296F1BCE68DD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13B71F60)
#define CLASS_3_5A31296F1BCE68DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B72120)
#define CLASS_3_5A31296F1BCE68DD__CTOR_OFFSET UNITYSDK_OFFSET(0x13B721A0)

inline static constexpr unsigned int Class_3_5A31296F1BCE68DD_TypeDefinitionIndex = 45029;

class Class_3_5A31296F1BCE68DD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0xB3; // 0x0
	::MoleMole::EntityHandle Field_3_7; // 0x48
	::MoleMole::MonoEffectPluginGroundLighting* Field_3_1; // 0x58
	::System::Collections::Generic::List_1<::Class_1_CD3FBE690F475501_1*>* Field_3_0; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5A31296F1BCE68DD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A31296F1BCE68DD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A31296F1BCE68DD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A31296F1BCE68DD_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A31296F1BCE68DD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_5A31296F1BCE68DD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_5A31296F1BCE68DD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5A31296F1BCE68DD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
