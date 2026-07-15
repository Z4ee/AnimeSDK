#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightGameFormation; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define CLASS_1_AF67E01114A98070_ADD_ONROLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x16D9FE20)
#define CLASS_1_AF67E01114A98070_ADD_ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x16D9FD60)
#define CLASS_1_AF67E01114A98070_GET__ITEMS_OFFSET UNITYSDK_OFFSET(0x16DA0190)
#define CLASS_1_AF67E01114A98070_METHOD_1_0D838987DE717DE3_OFFSET UNITYSDK_OFFSET(0x16DA1510)
#define CLASS_1_AF67E01114A98070_METHOD_1_1873E3CF907D5F2A_OFFSET UNITYSDK_OFFSET(0x16DA0640)
#define CLASS_1_AF67E01114A98070_METHOD_1_1CDF14DD30271B41_OFFSET UNITYSDK_OFFSET(0x16DA1790)
#define CLASS_1_AF67E01114A98070_METHOD_1_23868C4F4B4610C9_OFFSET UNITYSDK_OFFSET(0x16DA0700)
#define CLASS_1_AF67E01114A98070_METHOD_1_262BDF1728257C71_OFFSET UNITYSDK_OFFSET(0x16DA0060)
#define CLASS_1_AF67E01114A98070_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x16DA0120)
#define CLASS_1_AF67E01114A98070_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x16D9FEE0)
#define CLASS_1_AF67E01114A98070_METHOD_1_5135E99239DDCA8C_OFFSET UNITYSDK_OFFSET(0x16D9FFF0)
#define CLASS_1_AF67E01114A98070_METHOD_1_5CA2D599560DD48C_OFFSET UNITYSDK_OFFSET(0x16D9FF70)
#define CLASS_1_AF67E01114A98070_METHOD_1_5ED193DA02F7AFF9_OFFSET UNITYSDK_OFFSET(0x16DA0320)
#define CLASS_1_AF67E01114A98070_METHOD_1_6B79D25FA6D1A380_OFFSET UNITYSDK_OFFSET(0x16DA07F0)
#define CLASS_1_AF67E01114A98070_METHOD_1_747FD4D2EE10D57A_OFFSET UNITYSDK_OFFSET(0x16DA0C50)
#define CLASS_1_AF67E01114A98070_METHOD_1_8AE3A9461E1D1E06_OFFSET UNITYSDK_OFFSET(0x16DA1280)
#define CLASS_1_AF67E01114A98070_METHOD_1_8EDD86785C3E184A_OFFSET UNITYSDK_OFFSET(0x16DA1680)
#define CLASS_1_AF67E01114A98070_METHOD_1_906E2793F44AA0A1_OFFSET UNITYSDK_OFFSET(0x16DA04D0)
#define CLASS_1_AF67E01114A98070_METHOD_1_A99F72575AFE3206_OFFSET UNITYSDK_OFFSET(0x16DA13A0)
#define CLASS_1_AF67E01114A98070_METHOD_1_B73C4590979F2F2D_OFFSET UNITYSDK_OFFSET(0x16DA09D0)
#define CLASS_1_AF67E01114A98070_METHOD_1_C8631348977A26D6_OFFSET UNITYSDK_OFFSET(0x16DA0DF0)
#define CLASS_1_AF67E01114A98070_METHOD_1_D137D6968F1F29B5_OFFSET UNITYSDK_OFFSET(0x16DA11A0)
#define CLASS_1_AF67E01114A98070_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x16DA1710)
#define CLASS_1_AF67E01114A98070_METHOD_1_DF59343C750CF97F_OFFSET UNITYSDK_OFFSET(0x16DA1810)
#define CLASS_1_AF67E01114A98070_METHOD_1_E9853137D58A3625_OFFSET UNITYSDK_OFFSET(0x16DA0230)
#define CLASS_1_AF67E01114A98070_REMOVE_ONROLECOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x16D9FE80)
#define CLASS_1_AF67E01114A98070_REMOVE_ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x16D9FDC0)
#define CLASS_1_AF67E01114A98070__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA01A0)

inline static constexpr unsigned int Class_1_AF67E01114A98070_TypeDefinitionIndex = 61760;

class Class_1_AF67E01114A98070 : public ::System::Object
{
public:
	::System::Collections::Specialized::NotifyCollectionChangedEventHandler* OnRoleCollectionChanged; // 0x10
	::System::ComponentModel::PropertyChangedEventHandler* OnRolePropertyChanged; // 0x18
	::RPG::Client::GridFightGameFormation* Field_1_2; // 0x20
	::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*>* __Items_k__BackingField; // 0x28

	::System::Void _ctor(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070__CTOR_OFFSET))(this, a1);
	}

	::System::Void add_OnRolePropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_ADD_ONROLEPROPERTYCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnRolePropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_REMOVE_ONROLEPROPERTYCHANGED_OFFSET))(this, a1);
	}

	::System::Void add_OnRoleCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_ADD_ONROLECOLLECTIONCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnRoleCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_REMOVE_ONROLECOLLECTIONCHANGED_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightFormationRole*>* Method_1_5CA2D599560DD48C()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightFormationRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_5CA2D599560DD48C_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_5135E99239DDCA8C()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_5135E99239DDCA8C_OFFSET))(this);
	}

	::System::Void Method_1_262BDF1728257C71(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_262BDF1728257C71_OFFSET))(this, a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*>* get__Items()
	{
		return ((::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_GET__ITEMS_OFFSET))(this);
	}

	::RPG::Client::GridFightFormationRole* Method_1_E9853137D58A3625(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightFormationRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_E9853137D58A3625_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_5ED193DA02F7AFF9(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_5ED193DA02F7AFF9_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightFormationRole* Method_1_906E2793F44AA0A1(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightFormationRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_906E2793F44AA0A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1873E3CF907D5F2A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_1873E3CF907D5F2A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_23868C4F4B4610C9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_23868C4F4B4610C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6B79D25FA6D1A380(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_6B79D25FA6D1A380_OFFSET))(this, a1);
	}

	::System::Void Method_1_B73C4590979F2F2D(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_B73C4590979F2F2D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_747FD4D2EE10D57A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_747FD4D2EE10D57A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C8631348977A26D6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_C8631348977A26D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D137D6968F1F29B5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_D137D6968F1F29B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8AE3A9461E1D1E06(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_8AE3A9461E1D1E06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A99F72575AFE3206(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_A99F72575AFE3206_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0D838987DE717DE3(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_0D838987DE717DE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8EDD86785C3E184A(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_8EDD86785C3E184A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_1CDF14DD30271B41(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_1CDF14DD30271B41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF59343C750CF97F(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_AF67E01114A98070_METHOD_1_DF59343C750CF97F_OFFSET))(this, a1, a2);
	}
};
