#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_976AE6357CD2DB0F__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB8BE00)

inline static constexpr unsigned int Class_1_976AE6357CD2DB0F_TypeDefinitionIndex = 57184;

class Class_1_976AE6357CD2DB0F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IGDHNKPPFMB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_976AE6357CD2DB0F_TypeDefinitionIndex)->GetStaticField(0x1EC20);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_LPEGKMECBEL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_976AE6357CD2DB0F_TypeDefinitionIndex)->GetStaticField(0x1EC28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_976AE6357CD2DB0F__CCTOR_OFFSET))();
	}
};
