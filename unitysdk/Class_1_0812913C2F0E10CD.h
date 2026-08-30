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

#define CLASS_1_0812913C2F0E10CD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FA40C0)
#define CLASS_1_0812913C2F0E10CD_GET_CONSUMABLEINFO_OFFSET UNITYSDK_OFFSET(0x18FA4720)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_077C24CA86268BCA_OFFSET UNITYSDK_OFFSET(0x18FA4550)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_0CF31CF921E2FE82_OFFSET UNITYSDK_OFFSET(0x18FA4240)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_4A4D45A096EFF43A_OFFSET UNITYSDK_OFFSET(0x18FA41F0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_88CB5C966EB8CAE7_OFFSET UNITYSDK_OFFSET(0x18FA46C0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_9E39489821EE8586_OFFSET UNITYSDK_OFFSET(0x18FA4400)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_C80767BADCCC4AB7_1_OFFSET UNITYSDK_OFFSET(0x18FA4180)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_C80767BADCCC4AB7_OFFSET UNITYSDK_OFFSET(0x18FA4110)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_D6E49188A58FC421_OFFSET UNITYSDK_OFFSET(0x18FA44F0)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_E2F976E2E8D94A21_OFFSET UNITYSDK_OFFSET(0x18FA4350)
#define CLASS_1_0812913C2F0E10CD_METHOD_1_E892861EE594315C_OFFSET UNITYSDK_OFFSET(0x18FA4640)
#define CLASS_1_0812913C2F0E10CD__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA40A0)

inline static constexpr unsigned int Class_1_0812913C2F0E10CD_TypeDefinitionIndex = 65379;

class Class_1_0812913C2F0E10CD : public ::System::Object
{
public:
	::RPG::Client::GridFightEquipInfo* NCHCLADAFBP; // 0x10
	::RPG::Client::GridFightConsumableInfo* _ConsumableInfo_k__BackingField; // 0x18
	::System::Action_2<::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*>* EMLDHINHNHP; // 0x20
	::RPG::Client::GridFightPlayer* CMNJDMKPPIA; // 0x28
	::RPG::Client::GridFightTeam* GJHCMKBNING; // 0x30

	::System::Void _ctor(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightPlayer* a2, ::RPG::Client::GridFightEquipInfo* a3, ::RPG::Client::GridFightConsumableInfo* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightPlayer*, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightConsumableInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C80767BADCCC4AB7(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_C80767BADCCC4AB7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C80767BADCCC4AB7_1(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_0812913C2F0E10CD_METHOD_1_C80767BADCCC4AB7_1_OFFSET))(this, a1);
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
