#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_416;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class MapEntityDef; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_0D429917D7A975E1_GET_NEWMAPENTITIES_OFFSET UNITYSDK_OFFSET(0xBFA9C50)
#define CLASS_1_0D429917D7A975E1_GET_REMOVEDLOCALENTITIES_OFFSET UNITYSDK_OFFSET(0xBFA9C70)
#define CLASS_1_0D429917D7A975E1_GET_REMOVEDSERVERENTITIES_OFFSET UNITYSDK_OFFSET(0xBFA9C60)
#define CLASS_1_0D429917D7A975E1_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0xBFA8C70)
#define CLASS_1_0D429917D7A975E1_METHOD_1_28D9E7A4B48A5364_OFFSET UNITYSDK_OFFSET(0xBFA9BA0)
#define CLASS_1_0D429917D7A975E1_METHOD_1_2B38081604F7A2F2_OFFSET UNITYSDK_OFFSET(0xBFA9A80)
#define CLASS_1_0D429917D7A975E1_METHOD_1_3340E6376F583810_OFFSET UNITYSDK_OFFSET(0xBFA8E00)
#define CLASS_1_0D429917D7A975E1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBFA8DA0)
#define CLASS_1_0D429917D7A975E1_METHOD_1_793FC24F6C2F4F3F_OFFSET UNITYSDK_OFFSET(0xBFA95E0)
#define CLASS_1_0D429917D7A975E1_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xBFA9C80)
#define CLASS_1_0D429917D7A975E1_METHOD_1_8C8A67573CEC8204_OFFSET UNITYSDK_OFFSET(0xBFA9B10)
#define CLASS_1_0D429917D7A975E1_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xBFA8B00)
#define CLASS_1_0D429917D7A975E1_METHOD_1_CF6B9E5B80FE34E7_OFFSET UNITYSDK_OFFSET(0xBFA94F0)
#define CLASS_1_0D429917D7A975E1_METHOD_1_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0xBFA9230)
#define CLASS_1_0D429917D7A975E1__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA89F0)

inline static constexpr unsigned int Class_1_0D429917D7A975E1_TypeDefinitionIndex = 62223;

class Class_1_0D429917D7A975E1 : public ::System::Object
{
public:
	::System::Action* MGJLINFADJK; // 0x10
	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _RemovedLocalEntities_k__BackingField; // 0x18
	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _NewMapEntities_k__BackingField; // 0x20
	::Collections::Pooled::PooledList_1<::Class_0_16E4307DCC419505_416*>* PKBLOEEAMFH; // 0x28
	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _RemovedServerEntities_k__BackingField; // 0x30
	::System::Boolean JDMLKGGPKCL; // 0x38
	::System::Boolean JFKLBODEFPL; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::Class_1_0D429917D7A975E1* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_0D429917D7A975E1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_18712DB3B1B723E8_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_3340E6376F583810()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_3340E6376F583810_OFFSET))(this);
	}

	::System::Void Method_1_CF6B9E5B80FE34E7(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_CF6B9E5B80FE34E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_793FC24F6C2F4F3F(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_793FC24F6C2F4F3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B38081604F7A2F2(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_2B38081604F7A2F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C8A67573CEC8204(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_8C8A67573CEC8204_OFFSET))(this, a1);
	}

	::System::Void Method_1_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* Method_1_28D9E7A4B48A5364()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_28D9E7A4B48A5364_OFFSET))(this);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_NewMapEntities()
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_GET_NEWMAPENTITIES_OFFSET))(this);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_RemovedServerEntities()
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_GET_REMOVEDSERVERENTITIES_OFFSET))(this);
	}

	::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_RemovedLocalEntities()
	{
		return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_GET_REMOVEDLOCALENTITIES_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}
};
