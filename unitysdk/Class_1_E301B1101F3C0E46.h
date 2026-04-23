#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EntitySpawnTransitionType.h"
#include "unitysdk/Struct_2_C2B892F638207307.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_344;
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_E301B1101F3C0E46_METHOD_1_022004A3EC549ED0_OFFSET UNITYSDK_OFFSET(0xECCC700)
#define CLASS_1_E301B1101F3C0E46_METHOD_1_2652BDAD77FBA3A9_OFFSET UNITYSDK_OFFSET(0xECCCEC0)
#define CLASS_1_E301B1101F3C0E46_METHOD_1_4D9124A122987A9B_OFFSET UNITYSDK_OFFSET(0xECCC8C0)
#define CLASS_1_E301B1101F3C0E46_METHOD_1_52406C4063E37FA9_OFFSET UNITYSDK_OFFSET(0xECCD170)
#define CLASS_1_E301B1101F3C0E46_METHOD_1_72D632EF411025E2_OFFSET UNITYSDK_OFFSET(0xECCDA20)
#define CLASS_1_E301B1101F3C0E46_METHOD_1_73270EA8DDDA169F_OFFSET UNITYSDK_OFFSET(0xECCBCD0)
#define CLASS_1_E301B1101F3C0E46_METHOD_1_939383CFABF4988F_OFFSET UNITYSDK_OFFSET(0xECCC610)
#define CLASS_1_E301B1101F3C0E46_METHOD_1_D327AB906A4FEFD3_OFFSET UNITYSDK_OFFSET(0xECCB830)
#define CLASS_1_E301B1101F3C0E46_METHOD_1_FBB323D03BA54B00_OFFSET UNITYSDK_OFFSET(0xECCB970)
#define CLASS_1_E301B1101F3C0E46__CCTOR_OFFSET UNITYSDK_OFFSET(0xECCDC90)
#define CLASS_1_E301B1101F3C0E46__CTOR_OFFSET UNITYSDK_OFFSET(0xECCDC80)

inline static constexpr unsigned int Class_1_E301B1101F3C0E46_TypeDefinitionIndex = 57378;

class Class_1_E301B1101F3C0E46 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E301B1101F3C0E46_TypeDefinitionIndex)->GetStaticField(0xC8D0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E301B1101F3C0E46_TypeDefinitionIndex)->GetStaticField(0x4C70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_D327AB906A4FEFD3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46_METHOD_1_D327AB906A4FEFD3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FBB323D03BA54B00()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46_METHOD_1_FBB323D03BA54B00_OFFSET))();
	}

	static ::System::Boolean Method_1_73270EA8DDDA169F(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*& a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*&))((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46_METHOD_1_73270EA8DDDA169F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_2652BDAD77FBA3A9(::Struct_2_C2B892F638207307& a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_C2B892F638207307&, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*&))((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46_METHOD_1_2652BDAD77FBA3A9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_52406C4063E37FA9(::RPG::Client::Map_MapObjectsUpdateRequest* a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::RPG::Client::Map_MapObjectsUpdateRequest*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46_METHOD_1_52406C4063E37FA9_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::EntitySpawnTransitionType Method_1_022004A3EC549ED0(::RPG::Client::MapEntityDef* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::Client::EntitySpawnTransitionType(*)(::RPG::Client::MapEntityDef*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46_METHOD_1_022004A3EC549ED0_OFFSET))(a1, a2);
	}

	static ::RPG::Client::EntitySpawnTransitionType Method_1_4D9124A122987A9B(::RPG::Client::MapEntityDef* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::Client::EntitySpawnTransitionType(*)(::RPG::Client::MapEntityDef*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46_METHOD_1_4D9124A122987A9B_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_939383CFABF4988F()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46_METHOD_1_939383CFABF4988F_OFFSET))();
	}

	static ::System::Boolean Method_1_72D632EF411025E2(::Class_0_16E4307DCC419505_344* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + CLASS_1_E301B1101F3C0E46_METHOD_1_72D632EF411025E2_OFFSET))(a1);
	}
};
