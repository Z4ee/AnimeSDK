#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1464;
class Class_0_16E4307DCC419505_1466;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_7F37B67ACE9EA939_GET_FUNCTIONBUTTONS_OFFSET UNITYSDK_OFFSET(0x157A3FB0)
#define CLASS_1_7F37B67ACE9EA939_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x157A3FA0)
#define CLASS_1_7F37B67ACE9EA939_GET_NAVIGATIONENABLED_OFFSET UNITYSDK_OFFSET(0x157A3FC0)
#define CLASS_1_7F37B67ACE9EA939_METHOD_1_01466FC07EEA112B_OFFSET UNITYSDK_OFFSET(0x157A4060)
#define CLASS_1_7F37B67ACE9EA939_METHOD_1_9C9DE4C164487634_OFFSET UNITYSDK_OFFSET(0x157A4560)
#define CLASS_1_7F37B67ACE9EA939__CTOR_1_OFFSET UNITYSDK_OFFSET(0x157A44B0)
#define CLASS_1_7F37B67ACE9EA939__CTOR_2_OFFSET UNITYSDK_OFFSET(0x157A4550)
#define CLASS_1_7F37B67ACE9EA939__CTOR_3_OFFSET UNITYSDK_OFFSET(0x157A40F0)
#define CLASS_1_7F37B67ACE9EA939__CTOR_OFFSET UNITYSDK_OFFSET(0x157A3FD0)

inline static constexpr unsigned int Class_1_7F37B67ACE9EA939_TypeDefinitionIndex = 79149;

class Class_1_7F37B67ACE9EA939 : public ::System::Object
{
public:
	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1464*>* _Items_k__BackingField; // 0x10
	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1466*>* _FunctionButtons_k__BackingField; // 0x18
	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* _NavigationEnabled_k__BackingField; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F37B67ACE9EA939__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1466*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1466*>*))((::PBYTE)hIl2Cpp + CLASS_1_7F37B67ACE9EA939__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1466*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1466*>*))((::PBYTE)hIl2Cpp + CLASS_1_7F37B67ACE9EA939__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void _ctor_3(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1466*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1466*>*))((::PBYTE)hIl2Cpp + CLASS_1_7F37B67ACE9EA939__CTOR_3_OFFSET))(this, a1, a2);
	}

	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1464*>* get_Items()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1464*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F37B67ACE9EA939_GET_ITEMS_OFFSET))(this);
	}

	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1466*>* get_FunctionButtons()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1466*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F37B67ACE9EA939_GET_FUNCTIONBUTTONS_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* get_NavigationEnabled()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F37B67ACE9EA939_GET_NAVIGATIONENABLED_OFFSET))(this);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_01466FC07EEA112B(::System::String* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F37B67ACE9EA939_METHOD_1_01466FC07EEA112B_OFFSET))(a1);
	}

	::System::Int32 Method_1_9C9DE4C164487634()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F37B67ACE9EA939_METHOD_1_9C9DE4C164487634_OFFSET))(this);
	}
};
