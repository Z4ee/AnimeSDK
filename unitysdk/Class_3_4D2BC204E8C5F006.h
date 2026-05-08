#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

#define CLASS_3_4D2BC204E8C5F006_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17903BC0)
#define CLASS_3_4D2BC204E8C5F006_METHOD_3_0E324937D24BBF8C_OFFSET UNITYSDK_OFFSET(0x17903CA0)
#define CLASS_3_4D2BC204E8C5F006_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17903D90)
#define CLASS_3_4D2BC204E8C5F006_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x17903E20)
#define CLASS_3_4D2BC204E8C5F006_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17903B20)
#define CLASS_3_4D2BC204E8C5F006__CCTOR_OFFSET UNITYSDK_OFFSET(0x17903C10)
#define CLASS_3_4D2BC204E8C5F006__CTOR_OFFSET UNITYSDK_OFFSET(0x17903C90)

inline static constexpr unsigned int Class_3_4D2BC204E8C5F006_TypeDefinitionIndex = 78441;

class Class_3_4D2BC204E8C5F006 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_1 = 0x9C; // 0x0
	::Foundation::Unreal::FGameplayTagContainer Field_3_0; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4D2BC204E8C5F006__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D2BC204E8C5F006__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D2BC204E8C5F006_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D2BC204E8C5F006_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_0E324937D24BBF8C(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_3_4D2BC204E8C5F006_METHOD_3_0E324937D24BBF8C_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D2BC204E8C5F006_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_4D2BC204E8C5F006* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_4D2BC204E8C5F006*(*)())((::PBYTE)hIl2Cpp + CLASS_3_4D2BC204E8C5F006_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
