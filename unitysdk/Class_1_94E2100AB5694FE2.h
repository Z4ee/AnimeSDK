#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_1_94E2100AB5694FE2_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0xB688720)
#define CLASS_1_94E2100AB5694FE2_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xB688810)
#define CLASS_1_94E2100AB5694FE2_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xB6887C0)
#define CLASS_1_94E2100AB5694FE2__CTOR_OFFSET UNITYSDK_OFFSET(0xB6887B0)

inline static constexpr unsigned int Class_1_94E2100AB5694FE2_TypeDefinitionIndex = 64609;

class Class_1_94E2100AB5694FE2 : public ::System::Object
{
public:
	static ::Class_1_94E2100AB5694FE2** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_94E2100AB5694FE2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94E2100AB5694FE2_TypeDefinitionIndex)->GetStaticField(0x65930);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94E2100AB5694FE2__CTOR_OFFSET))(this);
	}

	static ::Class_1_94E2100AB5694FE2* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_94E2100AB5694FE2*(*)())((::PBYTE)hIl2Cpp + CLASS_1_94E2100AB5694FE2_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_94E2100AB5694FE2_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
	}

	::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_94E2100AB5694FE2_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
	}
};
