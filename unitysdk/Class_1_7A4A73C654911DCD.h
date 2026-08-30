#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EntitySpawnTransitionType.h"
#include "unitysdk/Struct_2_C2B892F638207307.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_416;
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_7A4A73C654911DCD_METHOD_1_022004A3EC549ED0_OFFSET UNITYSDK_OFFSET(0x1582E7D0)
#define CLASS_1_7A4A73C654911DCD_METHOD_1_18282898892FF318_OFFSET UNITYSDK_OFFSET(0x1582D590)
#define CLASS_1_7A4A73C654911DCD_METHOD_1_2652BDAD77FBA3A9_OFFSET UNITYSDK_OFFSET(0x1582F0B0)
#define CLASS_1_7A4A73C654911DCD_METHOD_1_5106F50D91B0391C_OFFSET UNITYSDK_OFFSET(0x1582F370)
#define CLASS_1_7A4A73C654911DCD_METHOD_1_73270EA8DDDA169F_OFFSET UNITYSDK_OFFSET(0x1582DA80)
#define CLASS_1_7A4A73C654911DCD_METHOD_1_939383CFABF4988F_OFFSET UNITYSDK_OFFSET(0x1582E6E0)
#define CLASS_1_7A4A73C654911DCD_METHOD_1_AE085A24A996DFD7_OFFSET UNITYSDK_OFFSET(0x1582FF10)
#define CLASS_1_7A4A73C654911DCD_METHOD_1_D327AB906A4FEFD3_OFFSET UNITYSDK_OFFSET(0x1582D450)
#define CLASS_1_7A4A73C654911DCD_METHOD_1_D7760F782F2DF80A_OFFSET UNITYSDK_OFFSET(0x1582E990)
#define CLASS_1_7A4A73C654911DCD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15830250)
#define CLASS_1_7A4A73C654911DCD__CTOR_OFFSET UNITYSDK_OFFSET(0x15830240)

inline static constexpr unsigned int Class_1_7A4A73C654911DCD_TypeDefinitionIndex = 62291;

class Class_1_7A4A73C654911DCD : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_GOBMBFMJPOL()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A4A73C654911DCD_TypeDefinitionIndex)->GetStaticField(0x1C480);
	}
	static ::System::Boolean* StaticGet_NLFPPBJICAF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A4A73C654911DCD_TypeDefinitionIndex)->GetStaticField(0x9B80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_D327AB906A4FEFD3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD_METHOD_1_D327AB906A4FEFD3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_18282898892FF318()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD_METHOD_1_18282898892FF318_OFFSET))();
	}

	static ::System::Boolean Method_1_73270EA8DDDA169F(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*& a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*&))((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD_METHOD_1_73270EA8DDDA169F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_2652BDAD77FBA3A9(::Struct_2_C2B892F638207307& a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_C2B892F638207307&, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*&))((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD_METHOD_1_2652BDAD77FBA3A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5106F50D91B0391C(::RPG::Client::Map_MapObjectsUpdateRequest* a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::Client::Map_MapObjectsUpdateRequest*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD_METHOD_1_5106F50D91B0391C_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::EntitySpawnTransitionType Method_1_022004A3EC549ED0(::RPG::Client::MapEntityDef* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::Client::EntitySpawnTransitionType(*)(::RPG::Client::MapEntityDef*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD_METHOD_1_022004A3EC549ED0_OFFSET))(a1, a2);
	}

	static ::RPG::Client::EntitySpawnTransitionType Method_1_D7760F782F2DF80A(::RPG::Client::MapEntityDef* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::Client::EntitySpawnTransitionType(*)(::RPG::Client::MapEntityDef*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD_METHOD_1_D7760F782F2DF80A_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_939383CFABF4988F()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD_METHOD_1_939383CFABF4988F_OFFSET))();
	}

	static ::System::Boolean Method_1_AE085A24A996DFD7(::Class_0_16E4307DCC419505_416* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_416*))((::PBYTE)hIl2Cpp + CLASS_1_7A4A73C654911DCD_METHOD_1_AE085A24A996DFD7_OFFSET))(a1);
	}
};
