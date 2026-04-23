#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_1_94E2100AB5694FE2_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x12123EE0)
#define CLASS_1_94E2100AB5694FE2_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x12123FD0)
#define CLASS_1_94E2100AB5694FE2_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x12123F80)
#define CLASS_1_94E2100AB5694FE2__CTOR_OFFSET UNITYSDK_OFFSET(0x12123F70)

inline static constexpr unsigned int Class_1_94E2100AB5694FE2_TypeDefinitionIndex = 59400;

class Class_1_94E2100AB5694FE2 : public ::System::Object
{
public:
	static ::Class_1_94E2100AB5694FE2** StaticGet_Field_1_0()
	{
		return (::Class_1_94E2100AB5694FE2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94E2100AB5694FE2_TypeDefinitionIndex)->GetStaticField(0x5C1A0);
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
