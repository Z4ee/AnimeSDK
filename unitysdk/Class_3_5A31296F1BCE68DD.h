#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_D1E36A18B0B6134C;
namespace MoleMole { class MonoEffectPluginGroundLighting; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5A31296F1BCE68DD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1298ED70)
#define CLASS_3_5A31296F1BCE68DD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1298EED0)
#define CLASS_3_5A31296F1BCE68DD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1298EE50)
#define CLASS_3_5A31296F1BCE68DD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1298EC00)
#define CLASS_3_5A31296F1BCE68DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1298EDC0)
#define CLASS_3_5A31296F1BCE68DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1298EE40)

inline static constexpr unsigned int Class_3_5A31296F1BCE68DD_TypeDefinitionIndex = 55718;

class Class_3_5A31296F1BCE68DD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0xB2; // 0x0
	::System::Collections::Generic::List_1<::Class_1_D1E36A18B0B6134C*>* Field_3_1; // 0x48
	::MoleMole::EntityHandle Field_3_2; // 0x50
	::MoleMole::MonoEffectPluginGroundLighting* Field_3_0; // 0x60

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

	static ::Class_3_5A31296F1BCE68DD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_5A31296F1BCE68DD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5A31296F1BCE68DD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A31296F1BCE68DD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
