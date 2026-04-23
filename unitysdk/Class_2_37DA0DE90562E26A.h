#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"
#include "unitysdk/RPG/Client/AssetEventPort.h"
#include "unitysdk/RPG/Client/AssetEventType.h"

class Class_2_293C6AF513403273;
namespace RPG::Client { class IAssetOperation; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_37DA0DE90562E26A_METHOD_2_880AE59F38E59346_OFFSET UNITYSDK_OFFSET(0x12A693B0)
#define CLASS_2_37DA0DE90562E26A_METHOD_2_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x12A68E20)
#define CLASS_2_37DA0DE90562E26A_METHOD_2_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x12A69320)
#define CLASS_2_37DA0DE90562E26A_METHOD_2_FC6882156E8E6DD6_OFFSET UNITYSDK_OFFSET(0x12A68F50)
#define CLASS_2_37DA0DE90562E26A__CTOR_OFFSET UNITYSDK_OFFSET(0x12A68B20)

inline static constexpr unsigned int Class_2_37DA0DE90562E26A_TypeDefinitionIndex = 72647;

class Class_2_37DA0DE90562E26A : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::Class_2_293C6AF513403273* Field_2_4; // 0x20
	::System::String* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::Class_1_FAF146B3D74C3C3F*>* Field_2_3; // 0x30
	::RPG::Client::AssetEventType Field_2_1; // 0x38
	::RPG::Client::AssetEventPort Field_2_2; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_37DA0DE90562E26A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37DA0DE90562E26A_METHOD_2_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_2_FC6882156E8E6DD6(::RPG::Client::IAssetOperation* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_37DA0DE90562E26A_METHOD_2_FC6882156E8E6DD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC61075536D10822(::Class_1_FAF146B3D74C3C3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAF146B3D74C3C3F*))((::PBYTE)hIl2Cpp + CLASS_2_37DA0DE90562E26A_METHOD_2_EC61075536D10822_OFFSET))(this, a1);
	}

	::System::Void Method_2_880AE59F38E59346(::Class_1_FAF146B3D74C3C3F* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAF146B3D74C3C3F*))((::PBYTE)hIl2Cpp + CLASS_2_37DA0DE90562E26A_METHOD_2_880AE59F38E59346_OFFSET))(this, P0);
	}
};
