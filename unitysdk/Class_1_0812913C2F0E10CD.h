#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightConsumableInfo; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightPlayer; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTeam; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }

#define CLASS_1_0812913C2F0E10CD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1631B9B0)
#define CLASS_1_0812913C2F0E10CD_GET_CONSUMABLEINFO_OFFSET UNITYSDK_OFFSET(0x1631C010)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_077C24CA86268BCA_OFFSET UNITYSDK_OFFSET(0x1631BE40)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_0CF31CF921E2FE82_OFFSET UNITYSDK_OFFSET(0x1631BB30)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_4A4D45A096EFF43A_OFFSET UNITYSDK_OFFSET(0x1631BAE0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_88CB5C966EB8CAE7_OFFSET UNITYSDK_OFFSET(0x1631BFB0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_9E39489821EE8586_OFFSET UNITYSDK_OFFSET(0x1631BCF0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_D6E49188A58FC421_OFFSET UNITYSDK_OFFSET(0x1631BDE0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_DBB501E5ACF0CA39_1_OFFSET UNITYSDK_OFFSET(0x1631BA70)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_DBB501E5ACF0CA39_OFFSET UNITYSDK_OFFSET(0x1631BA00)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_E2F976E2E8D94A21_OFFSET UNITYSDK_OFFSET(0x1631BC40)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_E892861EE594315C_OFFSET UNITYSDK_OFFSET(0x1631BF30)
#define CLASS_1_0812913C2F0E10CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1631B990)

inline static constexpr unsigned int Class_1_0812913C2F0E10CD_TypeDefinitionIndex = 62394;

class Class_1_0812913C2F0E10CD : public ::System::Object
{
public:
	::RPG::Client::GridFightTeam* Field_1_0; // 0x10
	::RPG::Client::GridFightEquipInfo* Field_1_1; // 0x18
	::System::Action_2<::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*>* Field_1_2; // 0x20
	::RPG::Client::GridFightPlayer* Field_1_3; // 0x28
	::RPG::Client::GridFightConsumableInfo* _ConsumableInfo_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightPlayer* a2, ::RPG::Client::GridFightEquipInfo* a3, ::RPG::Client::GridFightConsumableInfo* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightPlayer*, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightConsumableInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DBB501E5ACF0CA39(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_DBB501E5ACF0CA39_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBB501E5ACF0CA39_1(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_DBB501E5ACF0CA39_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* Method_1_4A4D45A096EFF43A()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_4A4D45A096EFF43A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* Method_1_0CF31CF921E2FE82(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_0CF31CF921E2FE82_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightRole* Method_1_E2F976E2E8D94A21(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_E2F976E2E8D94A21_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Method_1_9E39489821EE8586(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_9E39489821EE8586_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D6E49188A58FC421(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_D6E49188A58FC421_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_077C24CA86268BCA(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_077C24CA86268BCA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E892861EE594315C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_E892861EE594315C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_88CB5C966EB8CAE7(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_88CB5C966EB8CAE7_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightConsumableInfo* get_ConsumableInfo()
	{
		return ((::RPG::Client::GridFightConsumableInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_GET_CONSUMABLEINFO_OFFSET))(this);
	}
};
