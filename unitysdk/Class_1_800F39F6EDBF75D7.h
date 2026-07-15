#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_800F39F6EDBF75D7_Struct_2_98E897EFC7A24AA9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1264;
class Class_1_7FF19F6206AF6DD7_27;
class Class_1_B6441625E3D7D3E0;
class Class_1_C85C4DAB350DD5FC_2;
class Class_1_D17272E82AE804C2_347;
class Class_2_D65868EA4F4C773F;
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_800F39F6EDBF75D7_METHOD_1_259B533085E399D3_OFFSET UNITYSDK_OFFSET(0x18F33600)
#define CLASS_1_800F39F6EDBF75D7_METHOD_1_8FCB0B34EFE92F23_OFFSET UNITYSDK_OFFSET(0x18F33C10)
#define CLASS_1_800F39F6EDBF75D7_METHOD_1_C737A1B63C30AC4F_OFFSET UNITYSDK_OFFSET(0x18F33670)
#define CLASS_1_800F39F6EDBF75D7_METHOD_1_EF4EB596E0F85DC9_OFFSET UNITYSDK_OFFSET(0x18F33FA0)
#define CLASS_1_800F39F6EDBF75D7_METHOD_1_FC449D8588FC41BB_OFFSET UNITYSDK_OFFSET(0x18F336C0)
#define CLASS_1_800F39F6EDBF75D7__CTOR_OFFSET UNITYSDK_OFFSET(0x18F33550)
#define CLASS_1_800F39F6EDBF75D7__MODIFYDECKS_B__5_0_OFFSET UNITYSDK_OFFSET(0x18F340C0)
#define CLASS_1_800F39F6EDBF75D7__SETCURRENTDECK_B__6_0_OFFSET UNITYSDK_OFFSET(0x18F344A0)

inline static constexpr unsigned int Class_1_800F39F6EDBF75D7_TypeDefinitionIndex = 76116;

class Class_1_800F39F6EDBF75D7 : public ::System::Object
{
public:
	::Class_2_D65868EA4F4C773F* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1264* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_D65868EA4F4C773F* a1, ::Class_0_16E4307DCC419505_1264* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D65868EA4F4C773F*, ::Class_0_16E4307DCC419505_1264*))((::PBYTE)hIl2Cpp + CLASS_1_800F39F6EDBF75D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_259B533085E399D3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_800F39F6EDBF75D7_METHOD_1_259B533085E399D3_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_B6441625E3D7D3E0*>* Method_1_C737A1B63C30AC4F()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_B6441625E3D7D3E0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_800F39F6EDBF75D7_METHOD_1_C737A1B63C30AC4F_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_FC449D8588FC41BB(::Class_1_B6441625E3D7D3E0* a1, ::Class_1_C85C4DAB350DD5FC_2* a2, ::Class_1_C85C4DAB350DD5FC_2* a3)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_B6441625E3D7D3E0*, ::Class_1_C85C4DAB350DD5FC_2*, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + CLASS_1_800F39F6EDBF75D7_METHOD_1_FC449D8588FC41BB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::Promises::IPromise* Method_1_8FCB0B34EFE92F23(::System::Collections::Generic::List_1<::Class_1_800F39F6EDBF75D7_Struct_2_98E897EFC7A24AA9>* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_800F39F6EDBF75D7_Struct_2_98E897EFC7A24AA9>*))((::PBYTE)hIl2Cpp + CLASS_1_800F39F6EDBF75D7_METHOD_1_8FCB0B34EFE92F23_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_EF4EB596E0F85DC9(::System::UInt32 a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_800F39F6EDBF75D7_METHOD_1_EF4EB596E0F85DC9_OFFSET))(this, a1);
	}

	::System::Void _ModifyDecks_b__5_0(::Class_1_7FF19F6206AF6DD7_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_27*))((::PBYTE)hIl2Cpp + CLASS_1_800F39F6EDBF75D7__MODIFYDECKS_B__5_0_OFFSET))(this, a1);
	}

	::System::Void _SetCurrentDeck_b__6_0(::Class_1_D17272E82AE804C2_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_347*))((::PBYTE)hIl2Cpp + CLASS_1_800F39F6EDBF75D7__SETCURRENTDECK_B__6_0_OFFSET))(this, a1);
	}
};
