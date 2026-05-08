#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_1A3A02ED0BCC0D73_METHOD_1_6865E683CBB31523_OFFSET UNITYSDK_OFFSET(0x11702B20)
#define CLASS_1_1A3A02ED0BCC0D73_METHOD_1_82D703C21C1ADDE2_OFFSET UNITYSDK_OFFSET(0x11703660)
#define CLASS_1_1A3A02ED0BCC0D73__CCTOR_OFFSET UNITYSDK_OFFSET(0x11703790)
#define CLASS_1_1A3A02ED0BCC0D73__CTOR_OFFSET UNITYSDK_OFFSET(0x11703780)

inline static constexpr unsigned int Class_1_1A3A02ED0BCC0D73_TypeDefinitionIndex = 67947;

class Class_1_1A3A02ED0BCC0D73 : public ::System::Object
{
public:
	static ::Class_1_1A3A02ED0BCC0D73** StaticGet_Field_1_0()
	{
		return (::Class_1_1A3A02ED0BCC0D73**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1A3A02ED0BCC0D73_TypeDefinitionIndex)->GetStaticField(0x2C190);
	}
	// static const ::System::Single Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A3A02ED0BCC0D73__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1A3A02ED0BCC0D73__CCTOR_OFFSET))();
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_6865E683CBB31523(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Foundation::ViewObject::GroupMemberIdentifier a3)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_1A3A02ED0BCC0D73_METHOD_1_6865E683CBB31523_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_82D703C21C1ADDE2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_1A3A02ED0BCC0D73_METHOD_1_82D703C21C1ADDE2_OFFSET))(a1, a2);
	}
};
