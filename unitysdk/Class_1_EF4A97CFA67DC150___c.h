#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_961B0CA014B1FC95;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF4A97CFA67DC150___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC111610)
#define CLASS_1_EF4A97CFA67DC150___C__CREATEPREVIEWCAR_B__3_0_OFFSET UNITYSDK_OFFSET(0xC111660)
#define CLASS_1_EF4A97CFA67DC150___C__CREATEPREVIEWCAR_B__3_1_OFFSET UNITYSDK_OFFSET(0xC111670)
#define CLASS_1_EF4A97CFA67DC150___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC111650)

inline static constexpr unsigned int Class_1_EF4A97CFA67DC150___c_TypeDefinitionIndex = 80363;

class Class_1_EF4A97CFA67DC150___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>, ::RPG::GameCore::B51RacingPartType>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>, ::RPG::GameCore::B51RacingPartType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF4A97CFA67DC150___c_TypeDefinitionIndex)->GetStaticField(0x1ABE0);
	}
	static ::Class_1_EF4A97CFA67DC150___c** StaticGet___9()
	{
		return (::Class_1_EF4A97CFA67DC150___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF4A97CFA67DC150___c_TypeDefinitionIndex)->GetStaticField(0x1ABE8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF4A97CFA67DC150___c_TypeDefinitionIndex)->GetStaticField(0x1ABF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF4A97CFA67DC150___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF4A97CFA67DC150___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::B51RacingPartType _CreatePreviewCar_b__3_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*> a1)
	{
		return ((::RPG::GameCore::B51RacingPartType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>))((::PBYTE)hIl2Cpp + CLASS_1_EF4A97CFA67DC150___C__CREATEPREVIEWCAR_B__3_0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>* _CreatePreviewCar_b__3_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*> a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::B51RacingPartType, ::System::Collections::Generic::List_1<::Class_1_961B0CA014B1FC95*>*>))((::PBYTE)hIl2Cpp + CLASS_1_EF4A97CFA67DC150___C__CREATEPREVIEWCAR_B__3_1_OFFSET))(this, a1);
	}
};
