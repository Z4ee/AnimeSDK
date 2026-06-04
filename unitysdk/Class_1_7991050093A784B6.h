#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"
#include "unitysdk/System/Object.h"

class Class_2_21AD365C113DC484;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7991050093A784B6_GET_ALREADYINCATS_OFFSET UNITYSDK_OFFSET(0x189FF690)
#define CLASS_1_7991050093A784B6_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x189FF670)
#define CLASS_1_7991050093A784B6_GET__CACHECATS_OFFSET UNITYSDK_OFFSET(0x189FF6B0)
#define CLASS_1_7991050093A784B6_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x189FF5E0)
#define CLASS_1_7991050093A784B6_METHOD_1_283E14B8F19A5D1B_OFFSET UNITYSDK_OFFSET(0x189FED30)
#define CLASS_1_7991050093A784B6_METHOD_1_64BCA7DE531E967A_1_OFFSET UNITYSDK_OFFSET(0x189FECE0)
#define CLASS_1_7991050093A784B6_METHOD_1_64BCA7DE531E967A_OFFSET UNITYSDK_OFFSET(0x189FEC90)
#define CLASS_1_7991050093A784B6_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x189FEE50)
#define CLASS_1_7991050093A784B6_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x189FED90)
#define CLASS_1_7991050093A784B6_SET_ALREADYINCATS_OFFSET UNITYSDK_OFFSET(0x189FF6A0)
#define CLASS_1_7991050093A784B6_SET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x189FF680)
#define CLASS_1_7991050093A784B6_SET__CACHECATS_OFFSET UNITYSDK_OFFSET(0x189FF6C0)
#define CLASS_1_7991050093A784B6__CTOR_OFFSET UNITYSDK_OFFSET(0x189FF6D0)

inline static constexpr unsigned int Class_1_7991050093A784B6_TypeDefinitionIndex = 34880;

class Class_1_7991050093A784B6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::Class_2_21AD365C113DC484*>* _AlreadyInCats_k__BackingField; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_2_21AD365C113DC484*>* __CacheCats_k__BackingField; // 0x30
	::RPG::GameCore::CakeRaceAoeShowType _ShowType_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_64BCA7DE531E967A(::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_64BCA7DE531E967A_OFFSET))(this, a1);
	}

	::System::Void Method_1_64BCA7DE531E967A_1(::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_64BCA7DE531E967A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_283E14B8F19A5D1B(::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_21AD365C113DC484*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_283E14B8F19A5D1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeRaceAoeShowType get_ShowType()
	{
		return ((::RPG::GameCore::CakeRaceAoeShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_GET_SHOWTYPE_OFFSET))(this);
	}

	::System::Void set_ShowType(::RPG::GameCore::CakeRaceAoeShowType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAoeShowType))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_SET_SHOWTYPE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_2_21AD365C113DC484*>* get_AlreadyInCats()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_2_21AD365C113DC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_GET_ALREADYINCATS_OFFSET))(this);
	}

	::System::Void set_AlreadyInCats(::System::Collections::Generic::HashSet_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_SET_ALREADYINCATS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_2_21AD365C113DC484*>* get__CacheCats()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_2_21AD365C113DC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_GET__CACHECATS_OFFSET))(this);
	}

	::System::Void set__CacheCats(::System::Collections::Generic::HashSet_1<::Class_2_21AD365C113DC484*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_2_21AD365C113DC484*>*))((::PBYTE)hIl2Cpp + CLASS_1_7991050093A784B6_SET__CACHECATS_OFFSET))(this, a1);
	}
};
