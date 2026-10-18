#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_506;
class Class_0_16E4307DCC419505_507;
class Class_0_16E4307DCC419505_508;
class Class_0_16E4307DCC419505_542;
class Class_1_EFF03B82D1C2B1F6;
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_7D46F1066EF90FA6_5_METHOD_1_60416C97D8F325DC_OFFSET UNITYSDK_OFFSET(0xC001CC0)
#define CLASS_1_7D46F1066EF90FA6_5_METHOD_1_77F077B6EE1816CB_OFFSET UNITYSDK_OFFSET(0xC001AB0)
#define CLASS_1_7D46F1066EF90FA6_5_METHOD_1_9F9B22128807CAE0_OFFSET UNITYSDK_OFFSET(0xC001740)
#define CLASS_1_7D46F1066EF90FA6_5_METHOD_1_C8F94CB6D26133A1_OFFSET UNITYSDK_OFFSET(0xC001B20)
#define CLASS_1_7D46F1066EF90FA6_5_METHOD_1_DCAFF1987D83A57E_OFFSET UNITYSDK_OFFSET(0xC001D60)
#define CLASS_1_7D46F1066EF90FA6_5__CTOR_OFFSET UNITYSDK_OFFSET(0xC0016B0)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_5_TypeDefinitionIndex = 62823;

class Class_1_7D46F1066EF90FA6_5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_542* PLOCCENMDOI; // 0x10
	::Class_0_16E4307DCC419505_506* LIOJKFIGGIJ; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_506* a1, ::Class_0_16E4307DCC419505_542* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_506*, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_EFF03B82D1C2B1F6* Method_1_9F9B22128807CAE0(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::Class_1_EFF03B82D1C2B1F6*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5_METHOD_1_9F9B22128807CAE0_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_507*>>* Method_1_77F077B6EE1816CB(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_507*>>*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5_METHOD_1_77F077B6EE1816CB_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_507*>>* Method_1_DCAFF1987D83A57E(::RPG::GameCore::SpecialAvatarRelicRow* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::Class_0_16E4307DCC419505_507*>>*(*)(::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5_METHOD_1_DCAFF1987D83A57E_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_508* Method_1_C8F94CB6D26133A1(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::Class_0_16E4307DCC419505_508*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5_METHOD_1_C8F94CB6D26133A1_OFFSET))(a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>* Method_1_60416C97D8F325DC(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5_METHOD_1_60416C97D8F325DC_OFFSET))(this, a1);
	}
};
