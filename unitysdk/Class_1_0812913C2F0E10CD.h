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

#define CLASS_1_0812913C2F0E10CD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9771F80)
#define CLASS_1_0812913C2F0E10CD_GET_CONSUMABLEINFO_OFFSET UNITYSDK_OFFSET(0x9772550)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_0C71B3D90959F4AF_OFFSET UNITYSDK_OFFSET(0x97720B0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_0CF31CF921E2FE82_OFFSET UNITYSDK_OFFSET(0x9772100)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_25A6D469C55F0392_OFFSET UNITYSDK_OFFSET(0x97721F0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_396F46901992D11C_OFFSET UNITYSDK_OFFSET(0x9772390)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_67B9B9A90ED60CE9_OFFSET UNITYSDK_OFFSET(0x97724F0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_A971EFFD33514A78_OFFSET UNITYSDK_OFFSET(0x9772330)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_B5429DC31A682ECD_OFFSET UNITYSDK_OFFSET(0x9772250)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_DBB501E5ACF0CA39_1_OFFSET UNITYSDK_OFFSET(0x9772040)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_DBB501E5ACF0CA39_OFFSET UNITYSDK_OFFSET(0x9771FD0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_E892861EE594315C_OFFSET UNITYSDK_OFFSET(0x9772470)
#define CLASS_1_0812913C2F0E10CD__CTOR_OFFSET UNITYSDK_OFFSET(0x9771F60)

inline static constexpr unsigned int Class_1_0812913C2F0E10CD_TypeDefinitionIndex = 60139;

class Class_1_0812913C2F0E10CD : public ::System::Object
{
public:
	::System::Action_2<::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*>* Field_1_4; // 0x10
	::RPG::Client::GridFightPlayer* Field_1_2; // 0x18
	::RPG::Client::GridFightTeam* Field_1_1; // 0x20
	::RPG::Client::GridFightEquipInfo* Field_1_3; // 0x28
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

	::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* Method_1_0C71B3D90959F4AF()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_0C71B3D90959F4AF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* Method_1_0CF31CF921E2FE82(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_0CF31CF921E2FE82_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightRole* Method_1_25A6D469C55F0392(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_25A6D469C55F0392_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Method_1_B5429DC31A682ECD(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_B5429DC31A682ECD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A971EFFD33514A78(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_A971EFFD33514A78_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_396F46901992D11C(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_396F46901992D11C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E892861EE594315C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_E892861EE594315C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_67B9B9A90ED60CE9(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_67B9B9A90ED60CE9_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightConsumableInfo* get_ConsumableInfo()
	{
		return ((::RPG::Client::GridFightConsumableInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_GET_CONSUMABLEINFO_OFFSET))(this);
	}
};
