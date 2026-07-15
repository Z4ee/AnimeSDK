#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_976AE6357CD2DB0F__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A38250)

inline static constexpr unsigned int Class_1_976AE6357CD2DB0F_TypeDefinitionIndex = 54627;

class Class_1_976AE6357CD2DB0F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_976AE6357CD2DB0F_TypeDefinitionIndex)->GetStaticField(0x2CA60);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_976AE6357CD2DB0F_TypeDefinitionIndex)->GetStaticField(0x2CA68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_976AE6357CD2DB0F__CCTOR_OFFSET))();
	}
};
