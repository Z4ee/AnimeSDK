#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_357;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class MapEntityDef; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_53086B7ED462336C_GET_NEWMAPENTITIES_OFFSET UNITYSDK_OFFSET(0xABC8820)
#define CLASS_1_53086B7ED462336C_GET_REMOVEDLOCALENTITIES_OFFSET UNITYSDK_OFFSET(0xABC8840)
#define CLASS_1_53086B7ED462336C_GET_REMOVEDSERVERENTITIES_OFFSET UNITYSDK_OFFSET(0xABC8830)
#define CLASS_1_53086B7ED462336C_METHOD_1_0E47EFD20438C011_OFFSET UNITYSDK_OFFSET(0xABC8280)
#define CLASS_1_53086B7ED462336C_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0xABC7B10)
#define CLASS_1_53086B7ED462336C_METHOD_1_28D9E7A4B48A5364_OFFSET UNITYSDK_OFFSET(0xABC8770)
#define CLASS_1_53086B7ED462336C_METHOD_1_2B38081604F7A2F2_OFFSET UNITYSDK_OFFSET(0xABC8650)
#define CLASS_1_53086B7ED462336C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xABC7C40)
#define CLASS_1_53086B7ED462336C_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xABC8850)
#define CLASS_1_53086B7ED462336C_METHOD_1_8C8A67573CEC8204_OFFSET UNITYSDK_OFFSET(0xABC86E0)
#define CLASS_1_53086B7ED462336C_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xABC79A0)
#define CLASS_1_53086B7ED462336C_METHOD_1_BEEEB78F79566EBD_OFFSET UNITYSDK_OFFSET(0xABC7CA0)
#define CLASS_1_53086B7ED462336C_METHOD_1_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0xABC7FF0)
#define CLASS_1_53086B7ED462336C_METHOD_1_ED01C55428AEE25F_OFFSET UNITYSDK_OFFSET(0xABC8350)
#define CLASS_1_53086B7ED462336C__CTOR_OFFSET UNITYSDK_OFFSET(0xABC7890)

inline static constexpr unsigned int Class_1_53086B7ED462336C_TypeDefinitionIndex = 58122;

class Class_1_53086B7ED462336C : public ::System::Object
{
public:
	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _RemovedLocalEntities_k__BackingField; // 0x10
	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _RemovedServerEntities_k__BackingField; // 0x18
	::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_357*>* Field_1_2; // 0x20
	::System::Action* Field_1_3; // 0x28
	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _NewMapEntities_k__BackingField; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::Class_1_53086B7ED462336C* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_53086B7ED462336C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_18712DB3B1B723E8_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_BEEEB78F79566EBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_BEEEB78F79566EBD_OFFSET))(this);
	}

	::System::Void Method_1_0E47EFD20438C011(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_0E47EFD20438C011_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED01C55428AEE25F(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_ED01C55428AEE25F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B38081604F7A2F2(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_2B38081604F7A2F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C8A67573CEC8204(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_8C8A67573CEC8204_OFFSET))(this, a1);
	}

	::System::Void Method_1_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* Method_1_28D9E7A4B48A5364()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_28D9E7A4B48A5364_OFFSET))(this);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_NewMapEntities()
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_GET_NEWMAPENTITIES_OFFSET))(this);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_RemovedServerEntities()
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_GET_REMOVEDSERVERENTITIES_OFFSET))(this);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_RemovedLocalEntities()
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_GET_REMOVEDLOCALENTITIES_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53086B7ED462336C_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}
};
