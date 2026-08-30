#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_115.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class String; }

#define CLASS_2_CAC1E7415A6E0BA8_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x16D91A00)
#define CLASS_2_CAC1E7415A6E0BA8_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x16D91A60)
#define CLASS_2_CAC1E7415A6E0BA8_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16D91990)
#define CLASS_2_CAC1E7415A6E0BA8_METHOD_2_E7700D451FB46BE1_OFFSET UNITYSDK_OFFSET(0x16D91AC0)
#define CLASS_2_CAC1E7415A6E0BA8__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D92030)
#define CLASS_2_CAC1E7415A6E0BA8__CTOR_OFFSET UNITYSDK_OFFSET(0x16D92020)

inline static constexpr unsigned int Class_2_CAC1E7415A6E0BA8_TypeDefinitionIndex = 65340;

class Class_2_CAC1E7415A6E0BA8 : public ::Class_1_43BD383C98B4C0C5_115
{
public:
	static ::Class_2_CAC1E7415A6E0BA8** StaticGet__Empty_k__BackingField()
	{
		return (::Class_2_CAC1E7415A6E0BA8**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CAC1E7415A6E0BA8_TypeDefinitionIndex)->GetStaticField(0x1CFE0);
	}
	static ::Class_2_CAC1E7415A6E0BA8** StaticGet__Default_k__BackingField()
	{
		return (::Class_2_CAC1E7415A6E0BA8**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CAC1E7415A6E0BA8_TypeDefinitionIndex)->GetStaticField(0x1CFE8);
	}
	::System::Boolean ONFKPBBCNLA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAC1E7415A6E0BA8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CAC1E7415A6E0BA8__CCTOR_OFFSET))();
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAC1E7415A6E0BA8_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	static ::Class_2_CAC1E7415A6E0BA8* get_Default()
	{
		return ((::Class_2_CAC1E7415A6E0BA8*(*)())((::PBYTE)hIl2Cpp + CLASS_2_CAC1E7415A6E0BA8_GET_DEFAULT_OFFSET))();
	}

	static ::Class_2_CAC1E7415A6E0BA8* get_Empty()
	{
		return ((::Class_2_CAC1E7415A6E0BA8*(*)())((::PBYTE)hIl2Cpp + CLASS_2_CAC1E7415A6E0BA8_GET_EMPTY_OFFSET))();
	}

	::System::String* Method_2_E7700D451FB46BE1(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_CAC1E7415A6E0BA8_METHOD_2_E7700D451FB46BE1_OFFSET))(this, a1, a2);
	}
};
