#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SROptionsPropertyChanged;
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define SROPTIONS_ADD_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1EFEB060)
#define SROPTIONS_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1EFEAEC0)
#define SROPTIONS_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EFEAE20)
#define SROPTIONS_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1EFEAFC0)
#define SROPTIONS_ONSTARTUP_OFFSET UNITYSDK_OFFSET(0x1EFEAE30)
#define SROPTIONS_REMOVE_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1EFEB0C0)
#define SROPTIONS_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1EFEAF40)
#define SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1EFEB120)
#define SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1EFEB180)
#define SROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFEAEB0)

inline static constexpr unsigned int SROptions_TypeDefinitionIndex = 44783;

class SROptions : public ::System::Object
{
public:
	static ::SROptions** StaticGet__current()
	{
		return (::SROptions**)Il2CppClass::FromTypeDefinitionIndex(SROptions_TypeDefinitionIndex)->GetStaticField(0x1520);
	}
	::SROptionsPropertyChanged* PropertyChanged; // 0x10
	::System::ComponentModel::PropertyChangedEventHandler* InterfacePropertyChangedEventHandler; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SROPTIONS__CTOR_OFFSET))(this);
	}

	static ::SROptions* get_Current()
	{
		return ((::SROptions*(*)())((::PBYTE)hIl2Cpp + SROPTIONS_GET_CURRENT_OFFSET))();
	}

	static ::System::Void OnStartup()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SROPTIONS_ONSTARTUP_OFFSET))();
	}

	::System::Void add_PropertyChanged(::SROptionsPropertyChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SROptionsPropertyChanged*))((::PBYTE)hIl2Cpp + SROPTIONS_ADD_PROPERTYCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_PropertyChanged(::SROptionsPropertyChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SROptionsPropertyChanged*))((::PBYTE)hIl2Cpp + SROPTIONS_REMOVE_PROPERTYCHANGED_OFFSET))(this, a1);
	}

	::System::Void OnPropertyChanged(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SROPTIONS_ONPROPERTYCHANGED_OFFSET))(this, a1);
	}

	::System::Void add_InterfacePropertyChangedEventHandler(::System::ComponentModel::PropertyChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_ADD_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1);
	}

	::System::Void remove_InterfacePropertyChangedEventHandler(::System::ComponentModel::PropertyChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_REMOVE_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1);
	}

	::System::Void System_ComponentModel_INotifyPropertyChanged_add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET))(this, a1);
	}

	::System::Void System_ComponentModel_INotifyPropertyChanged_remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET))(this, a1);
	}
};
