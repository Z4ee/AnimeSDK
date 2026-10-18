#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1508;
class Class_1_2F63565FD6190B4E_Class_1_02A5F01D839EFB39;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_2F63565FD6190B4E_GET_CURDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xF8A7270)
#define CLASS_1_2F63565FD6190B4E_GET_PROGRESSSEGMENTS_OFFSET UNITYSDK_OFFSET(0xF8A72B0)
#define CLASS_1_2F63565FD6190B4E_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xF8A7290)
#define CLASS_1_2F63565FD6190B4E_SET_CURDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xF8A7280)
#define CLASS_1_2F63565FD6190B4E_SET_PROGRESSSEGMENTS_OFFSET UNITYSDK_OFFSET(0xF8A72C0)
#define CLASS_1_2F63565FD6190B4E_SET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xF8A72A0)
#define CLASS_1_2F63565FD6190B4E__CTOR_OFFSET UNITYSDK_OFFSET(0xF8A72D0)

inline static constexpr unsigned int Class_1_2F63565FD6190B4E_TypeDefinitionIndex = 79712;

class Class_1_2F63565FD6190B4E : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_2F63565FD6190B4E_Class_1_02A5F01D839EFB39*>* _ProgressSegments_k__BackingField; // 0x10
	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1508*>* _RewardItems_k__BackingField; // 0x18
	::System::UInt32 _CurDesignLevel_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F63565FD6190B4E__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_CurDesignLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F63565FD6190B4E_GET_CURDESIGNLEVEL_OFFSET))(this);
	}

	::System::Void set_CurDesignLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F63565FD6190B4E_SET_CURDESIGNLEVEL_OFFSET))(this, a1);
	}

	::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1508*>* get_RewardItems()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1508*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F63565FD6190B4E_GET_REWARDITEMS_OFFSET))(this);
	}

	::System::Void set_RewardItems(::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1508*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::Class_0_16E4307DCC419505_1508*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F63565FD6190B4E_SET_REWARDITEMS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_2F63565FD6190B4E_Class_1_02A5F01D839EFB39*>* get_ProgressSegments()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_2F63565FD6190B4E_Class_1_02A5F01D839EFB39*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F63565FD6190B4E_GET_PROGRESSSEGMENTS_OFFSET))(this);
	}

	::System::Void set_ProgressSegments(::System::Collections::Generic::IReadOnlyList_1<::Class_1_2F63565FD6190B4E_Class_1_02A5F01D839EFB39*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_2F63565FD6190B4E_Class_1_02A5F01D839EFB39*>*))((::PBYTE)hIl2Cpp + CLASS_1_2F63565FD6190B4E_SET_PROGRESSSEGMENTS_OFFSET))(this, a1);
	}
};
