#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1486;
class Class_0_16E4307DCC419505_1514;
class Class_1_2EC118B78FC4216B;
class Class_1_F4C0A89701E5181C;
namespace ObservableCollections { template <typename T> class ObservableList_1; }

#define CLASS_1_6C2E97D5633F6538_GET_ATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0xB9625F0)
#define CLASS_1_6C2E97D5633F6538_GET_ATTRIBUTERADAR_OFFSET UNITYSDK_OFFSET(0xB9625D0)
#define CLASS_1_6C2E97D5633F6538_GET_INTEGRATIONBAR_OFFSET UNITYSDK_OFFSET(0xB962630)
#define CLASS_1_6C2E97D5633F6538_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xB962610)
#define CLASS_1_6C2E97D5633F6538_SET_ATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0xB962600)
#define CLASS_1_6C2E97D5633F6538_SET_ATTRIBUTERADAR_OFFSET UNITYSDK_OFFSET(0xB9625E0)
#define CLASS_1_6C2E97D5633F6538_SET_INTEGRATIONBAR_OFFSET UNITYSDK_OFFSET(0xB962640)
#define CLASS_1_6C2E97D5633F6538_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0xB962620)
#define CLASS_1_6C2E97D5633F6538__CTOR_OFFSET UNITYSDK_OFFSET(0xB962650)

inline static constexpr unsigned int Class_1_6C2E97D5633F6538_TypeDefinitionIndex = 79737;

class Class_1_6C2E97D5633F6538 : public ::System::Object
{
public:
	::ObservableCollections::ObservableList_1<::Class_1_2EC118B78FC4216B*>* _AttributeLevels_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_1486* _AttributeRadar_k__BackingField; // 0x18
	::ObservableCollections::ObservableList_1<::Class_1_F4C0A89701E5181C*>* _Traits_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_1514* _IntegrationBar_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1486* get_AttributeRadar()
	{
		return ((::Class_0_16E4307DCC419505_1486*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_GET_ATTRIBUTERADAR_OFFSET))(this);
	}

	::System::Void set_AttributeRadar(::Class_0_16E4307DCC419505_1486* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1486*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_SET_ATTRIBUTERADAR_OFFSET))(this, a1);
	}

	::ObservableCollections::ObservableList_1<::Class_1_2EC118B78FC4216B*>* get_AttributeLevels()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_1_2EC118B78FC4216B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_GET_ATTRIBUTELEVELS_OFFSET))(this);
	}

	::System::Void set_AttributeLevels(::ObservableCollections::ObservableList_1<::Class_1_2EC118B78FC4216B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::Class_1_2EC118B78FC4216B*>*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_SET_ATTRIBUTELEVELS_OFFSET))(this, a1);
	}

	::ObservableCollections::ObservableList_1<::Class_1_F4C0A89701E5181C*>* get_Traits()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_1_F4C0A89701E5181C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_GET_TRAITS_OFFSET))(this);
	}

	::System::Void set_Traits(::ObservableCollections::ObservableList_1<::Class_1_F4C0A89701E5181C*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::Class_1_F4C0A89701E5181C*>*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_SET_TRAITS_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1514* get_IntegrationBar()
	{
		return ((::Class_0_16E4307DCC419505_1514*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_GET_INTEGRATIONBAR_OFFSET))(this);
	}

	::System::Void set_IntegrationBar(::Class_0_16E4307DCC419505_1514* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1514*))((::PBYTE)hIl2Cpp + CLASS_1_6C2E97D5633F6538_SET_INTEGRATIONBAR_OFFSET))(this, a1);
	}
};
