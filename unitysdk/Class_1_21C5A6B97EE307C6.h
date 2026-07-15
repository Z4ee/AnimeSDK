#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_21C5A6B97EE307C6_GET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x174F8670)
#define CLASS_1_21C5A6B97EE307C6_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x174F8630)
#define CLASS_1_21C5A6B97EE307C6_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x174F8650)
#define CLASS_1_21C5A6B97EE307C6_METHOD_1_0D4D447F31661D06_OFFSET UNITYSDK_OFFSET(0x174F8820)
#define CLASS_1_21C5A6B97EE307C6_METHOD_1_1B0559824B2C4929_OFFSET UNITYSDK_OFFSET(0x174F8690)
#define CLASS_1_21C5A6B97EE307C6_METHOD_1_2F132DF8FDFFADAF_OFFSET UNITYSDK_OFFSET(0x174F8710)
#define CLASS_1_21C5A6B97EE307C6_METHOD_1_CB8F7DA1917A4695_OFFSET UNITYSDK_OFFSET(0x174F87A0)
#define CLASS_1_21C5A6B97EE307C6_SET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x174F8680)
#define CLASS_1_21C5A6B97EE307C6_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x174F8640)
#define CLASS_1_21C5A6B97EE307C6_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x174F8660)
#define CLASS_1_21C5A6B97EE307C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x174F8A30)
#define CLASS_1_21C5A6B97EE307C6__CTOR_OFFSET UNITYSDK_OFFSET(0x174F86D0)

inline static constexpr unsigned int Class_1_21C5A6B97EE307C6_TypeDefinitionIndex = 64718;

class Class_1_21C5A6B97EE307C6 : public ::System::Object
{
public:
	static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::Class_1_21C5A6B97EE307C6*>** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::Class_1_21C5A6B97EE307C6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21C5A6B97EE307C6_TypeDefinitionIndex)->GetStaticField(0x18310);
	}
	::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* Field_1_1; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _AttributeList_k__BackingField; // 0x18
	::System::UInt32 _Level_k__BackingField; // 0x20
	::System::UInt32 _CompositionType_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6__CCTOR_OFFSET))();
	}

	::System::UInt32 get_CompositionType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6_GET_COMPOSITIONTYPE_OFFSET))(this);
	}

	::System::Void set_CompositionType(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6_SET_COMPOSITIONTYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_AttributeList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6_GET_ATTRIBUTELIST_OFFSET))(this);
	}

	::System::Void set_AttributeList(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6_SET_ATTRIBUTELIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* Method_1_1B0559824B2C4929()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6_METHOD_1_1B0559824B2C4929_OFFSET))(this);
	}

	static ::Class_1_21C5A6B97EE307C6* Method_1_2F132DF8FDFFADAF(::System::UInt32 a1)
	{
		return ((::Class_1_21C5A6B97EE307C6*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6_METHOD_1_2F132DF8FDFFADAF_OFFSET))(a1);
	}

	static ::Class_1_21C5A6B97EE307C6* Method_1_CB8F7DA1917A4695(::System::UInt32 a1)
	{
		return ((::Class_1_21C5A6B97EE307C6*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6_METHOD_1_CB8F7DA1917A4695_OFFSET))(a1);
	}

	::System::Void Method_1_0D4D447F31661D06(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21C5A6B97EE307C6_METHOD_1_0D4D447F31661D06_OFFSET))(this, a1);
	}
};
