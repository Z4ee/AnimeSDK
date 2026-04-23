#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"
#include "unitysdk/System/Object.h"

class Class_2_3ABA989E5AECB261;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7991050093A784B6_GET_ALREADYINCATS_OFFSET UNITYSDK_OFFSET(0x17C4A1D0)
#define CLASS_1_7991050093A784B6_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x17C4A1B0)
#define CLASS_1_7991050093A784B6_GET__CACHECATS_OFFSET UNITYSDK_OFFSET(0x17C4A1F0)
#define CLASS_1_7991050093A784B6_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17C4A120)
#define CLASS_1_7991050093A784B6_METHOD_1_283E14B8F19A5D1B_OFFSET UNITYSDK_OFFSET(0x17C49960)
#define CLASS_1_7991050093A784B6_METHOD_1_64BCA7DE531E967A_1_OFFSET UNITYSDK_OFFSET(0x17C49910)
#define CLASS_1_7991050093A784B6_METHOD_1_64BCA7DE531E967A_OFFSET UNITYSDK_OFFSET(0x17C498C0)
#define CLASS_1_7991050093A784B6_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x17C499C0)
#define CLASS_1_7991050093A784B6_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x17C49A80)
#define CLASS_1_7991050093A784B6_SET_ALREADYINCATS_OFFSET UNITYSDK_OFFSET(0x17C4A1E0)
#define CLASS_1_7991050093A784B6_SET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x17C4A1C0)
#define CLASS_1_7991050093A784B6_SET__CACHECATS_OFFSET UNITYSDK_OFFSET(0x17C4A200)
#define CLASS_1_7991050093A784B6__CTOR_OFFSET UNITYSDK_OFFSET(0x17C4A210)

inline static constexpr unsigned int Class_1_7991050093A784B6_TypeDefinitionIndex = 34597;

class Class_1_7991050093A784B6 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_2_3ABA989E5AECB261*>* __CacheCats_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_2_3ABA989E5AECB261*>* _AlreadyInCats_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* Field_1_3; // 0x30
	::RPG::GameCore::CakeRaceAoeShowType _ShowType_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_64BCA7DE531E967A(::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>*))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_64BCA7DE531E967A_OFFSET))(this, a1);
	}

	::System::Void Method_1_64BCA7DE531E967A_1(::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>*))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_64BCA7DE531E967A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_283E14B8F19A5D1B(::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_3ABA989E5AECB261*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_283E14B8F19A5D1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceAoeShowType get_ShowType()
	{
		return ((::RPG::GameCore::CakeRaceAoeShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_GET_SHOWTYPE_OFFSET))(this);
	}

	::System::Void set_ShowType(::RPG::GameCore::CakeRaceAoeShowType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAoeShowType))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_SET_SHOWTYPE_OFFSET))(this, value);
	}

	::System::Collections::Generic::HashSet_1<::Class_2_3ABA989E5AECB261*>* get_AlreadyInCats()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_2_3ABA989E5AECB261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_GET_ALREADYINCATS_OFFSET))(this);
	}

	::System::Void set_AlreadyInCats(::System::Collections::Generic::HashSet_1<::Class_2_3ABA989E5AECB261*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_2_3ABA989E5AECB261*>*))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_SET_ALREADYINCATS_OFFSET))(this, value);
	}

	::System::Collections::Generic::HashSet_1<::Class_2_3ABA989E5AECB261*>* get__CacheCats()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_2_3ABA989E5AECB261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_GET__CACHECATS_OFFSET))(this);
	}

	::System::Void set__CacheCats(::System::Collections::Generic::HashSet_1<::Class_2_3ABA989E5AECB261*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_2_3ABA989E5AECB261*>*))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_SET__CACHECATS_OFFSET))(this, value);
	}
};
