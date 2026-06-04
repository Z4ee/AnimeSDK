#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_361;
class Class_0_16E4307DCC419505_362;
class Class_0_16E4307DCC419505_396;
class Class_1_090AB0EAA610410E;
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_7D46F1066EF90FA6_5_METHOD_1_5687A8CC84BE997B_OFFSET UNITYSDK_OFFSET(0xAD38890)
#define CLASS_1_7D46F1066EF90FA6_5_METHOD_1_60416C97D8F325DC_OFFSET UNITYSDK_OFFSET(0xAD389B0)
#define CLASS_1_7D46F1066EF90FA6_5_METHOD_1_77F077B6EE1816CB_OFFSET UNITYSDK_OFFSET(0xAD38820)
#define CLASS_1_7D46F1066EF90FA6_5_METHOD_1_9F9B22128807CAE0_OFFSET UNITYSDK_OFFSET(0xAD384B0)
#define CLASS_1_7D46F1066EF90FA6_5_METHOD_1_DCAFF1987D83A57E_OFFSET UNITYSDK_OFFSET(0xAD38A50)
#define CLASS_1_7D46F1066EF90FA6_5__CTOR_OFFSET UNITYSDK_OFFSET(0xAD38420)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_5_TypeDefinitionIndex = 58773;

class Class_1_7D46F1066EF90FA6_5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_360* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_396* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_360* a1, ::Class_0_16E4307DCC419505_396* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_360*, ::Class_0_16E4307DCC419505_396*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_090AB0EAA610410E* Method_1_9F9B22128807CAE0(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::Class_1_090AB0EAA610410E*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5_METHOD_1_9F9B22128807CAE0_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*>>* Method_1_77F077B6EE1816CB(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*>>*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5_METHOD_1_77F077B6EE1816CB_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*>>* Method_1_DCAFF1987D83A57E(::RPG::GameCore::SpecialAvatarRelicRow* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_362*>>*(*)(::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5_METHOD_1_DCAFF1987D83A57E_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_361* Method_1_5687A8CC84BE997B(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::Class_0_16E4307DCC419505_361*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5_METHOD_1_5687A8CC84BE997B_OFFSET))(a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>* Method_1_60416C97D8F325DC(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5_METHOD_1_60416C97D8F325DC_OFFSET))(this, a1);
	}
};
