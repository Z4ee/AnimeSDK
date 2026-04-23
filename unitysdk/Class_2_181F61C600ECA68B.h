#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
template <typename T> class Class_3_2A6530038D51A41A;

#define CLASS_2_181F61C600ECA68B_ADD_ONEQUIPCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x92C3710)
#define CLASS_2_181F61C600ECA68B_GET_EQUIPIDS_OFFSET UNITYSDK_OFFSET(0x92C3A00)
#define CLASS_2_181F61C600ECA68B_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x92C3820)
#define CLASS_2_181F61C600ECA68B_GET__EQUIPIDS_OFFSET UNITYSDK_OFFSET(0x92C3810)
#define CLASS_2_181F61C600ECA68B_METHOD_2_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x92C3960)
#define CLASS_2_181F61C600ECA68B_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x92C38C0)
#define CLASS_2_181F61C600ECA68B_METHOD_2_123DFB09BD2C9B9E_1_OFFSET UNITYSDK_OFFSET(0x92C38D0)
#define CLASS_2_181F61C600ECA68B_METHOD_2_123DFB09BD2C9B9E_2_OFFSET UNITYSDK_OFFSET(0x92C3970)
#define CLASS_2_181F61C600ECA68B_METHOD_2_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x92C3830)
#define CLASS_2_181F61C600ECA68B_METHOD_2_5E5742FE86D8AAE5_OFFSET UNITYSDK_OFFSET(0x92C3A90)
#define CLASS_2_181F61C600ECA68B_METHOD_2_71D7FBD389114852_OFFSET UNITYSDK_OFFSET(0x92C4050)
#define CLASS_2_181F61C600ECA68B_METHOD_2_7D41A1A7E79589E1_OFFSET UNITYSDK_OFFSET(0x92C4240)
#define CLASS_2_181F61C600ECA68B_METHOD_2_90E6B0A57E4A278C_OFFSET UNITYSDK_OFFSET(0x92C4340)
#define CLASS_2_181F61C600ECA68B_METHOD_2_B0DCF29309694C5D_OFFSET UNITYSDK_OFFSET(0x92C3E80)
#define CLASS_2_181F61C600ECA68B_METHOD_2_B214F97C7AAA732F_OFFSET UNITYSDK_OFFSET(0x92C40B0)
#define CLASS_2_181F61C600ECA68B_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x92C4000)
#define CLASS_2_181F61C600ECA68B_REMOVE_ONEQUIPCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x92C3790)
#define CLASS_2_181F61C600ECA68B__CTOR_OFFSET UNITYSDK_OFFSET(0x92C3B20)

inline static constexpr unsigned int Class_2_181F61C600ECA68B_TypeDefinitionIndex = 59533;

class Class_2_181F61C600ECA68B : public ::Sofa::Core::ObservableObject
{
public:
	::Class_3_2A6530038D51A41A<::System::UInt32>* __EquipIDs_k__BackingField; // 0x18
	::System::Collections::Specialized::NotifyCollectionChangedEventHandler* OnEquipCollectionChanged; // 0x20
	::System::UInt32 Field_2_1; // 0x28
	::System::UInt32 Field_2_3; // 0x2C
	::System::UInt32 Field_2_2; // 0x30

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void add_OnEquipCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_ADD_ONEQUIPCOLLECTIONCHANGED_OFFSET))(this, value);
	}

	::System::Void remove_OnEquipCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_REMOVE_ONEQUIPCOLLECTIONCHANGED_OFFSET))(this, value);
	}

	::Class_3_2A6530038D51A41A<::System::UInt32>* get__EquipIDs()
	{
		return ((::Class_3_2A6530038D51A41A<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_GET__EQUIPIDS_OFFSET))(this);
	}

	::System::UInt32 get_RoleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_GET_ROLEID_OFFSET))(this);
	}

	::System::Void Method_2_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_123DFB09BD2C9B9E_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_123DFB09BD2C9B9E_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_2_123DFB09BD2C9B9E_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_123DFB09BD2C9B9E_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_EquipIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_GET_EQUIPIDS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_2_5E5742FE86D8AAE5()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_5E5742FE86D8AAE5_OFFSET))(this);
	}

	::System::Void Method_2_B0DCF29309694C5D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_B0DCF29309694C5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_71D7FBD389114852(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_71D7FBD389114852_OFFSET))(this, a1);
	}

	::System::Void Method_2_B214F97C7AAA732F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_B214F97C7AAA732F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7D41A1A7E79589E1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_7D41A1A7E79589E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_90E6B0A57E4A278C(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_181F61C600ECA68B_METHOD_2_90E6B0A57E4A278C_OFFSET))(this, a1, a2);
	}
};
