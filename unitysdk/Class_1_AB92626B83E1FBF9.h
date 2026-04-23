#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AB92626B83E1FBF9_GET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x9879560)
#define CLASS_1_AB92626B83E1FBF9_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x9879520)
#define CLASS_1_AB92626B83E1FBF9_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9879540)
#define CLASS_1_AB92626B83E1FBF9_METHOD_1_63E8D792F4472B08_OFFSET UNITYSDK_OFFSET(0x98795D0)
#define CLASS_1_AB92626B83E1FBF9_METHOD_1_CB8F7DA1917A4695_OFFSET UNITYSDK_OFFSET(0x9879660)
#define CLASS_1_AB92626B83E1FBF9_METHOD_1_DC71523489CA8EAD_OFFSET UNITYSDK_OFFSET(0x9879580)
#define CLASS_1_AB92626B83E1FBF9_METHOD_1_F791161BD22F2F17_OFFSET UNITYSDK_OFFSET(0x98796E0)
#define CLASS_1_AB92626B83E1FBF9_SET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x9879570)
#define CLASS_1_AB92626B83E1FBF9_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x9879530)
#define CLASS_1_AB92626B83E1FBF9_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9879550)
#define CLASS_1_AB92626B83E1FBF9__CCTOR_OFFSET UNITYSDK_OFFSET(0x98798B0)
#define CLASS_1_AB92626B83E1FBF9__CTOR_OFFSET UNITYSDK_OFFSET(0x9879590)

inline static constexpr unsigned int Class_1_AB92626B83E1FBF9_TypeDefinitionIndex = 62418;

class Class_1_AB92626B83E1FBF9 : public ::System::Object
{
public:
	static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::Class_1_AB92626B83E1FBF9*>** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::Class_1_AB92626B83E1FBF9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB92626B83E1FBF9_TypeDefinitionIndex)->GetStaticField(0x11890);
	}
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _AttributeList_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* Field_1_4; // 0x18
	::System::UInt32 _Level_k__BackingField; // 0x20
	::System::UInt32 _CompositionType_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9__CCTOR_OFFSET))();
	}

	::System::UInt32 get_CompositionType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9_GET_COMPOSITIONTYPE_OFFSET))(this);
	}

	::System::Void set_CompositionType(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9_SET_COMPOSITIONTYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9_SET_LEVEL_OFFSET))(this, value);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_AttributeList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9_GET_ATTRIBUTELIST_OFFSET))(this);
	}

	::System::Void set_AttributeList(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9_SET_ATTRIBUTELIST_OFFSET))(this, value);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* Method_1_DC71523489CA8EAD()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9_METHOD_1_DC71523489CA8EAD_OFFSET))(this);
	}

	static ::Class_1_AB92626B83E1FBF9* Method_1_63E8D792F4472B08(::System::UInt32 a1)
	{
		return ((::Class_1_AB92626B83E1FBF9*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9_METHOD_1_63E8D792F4472B08_OFFSET))(a1);
	}

	static ::Class_1_AB92626B83E1FBF9* Method_1_CB8F7DA1917A4695(::System::UInt32 a1)
	{
		return ((::Class_1_AB92626B83E1FBF9*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9_METHOD_1_CB8F7DA1917A4695_OFFSET))(a1);
	}

	::System::Void Method_1_F791161BD22F2F17(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB92626B83E1FBF9_METHOD_1_F791161BD22F2F17_OFFSET))(this, a1);
	}
};
