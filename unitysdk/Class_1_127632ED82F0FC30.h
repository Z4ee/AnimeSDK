#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_127632ED82F0FC30__CCTOR_OFFSET UNITYSDK_OFFSET(0x1015A270)
#define CLASS_1_127632ED82F0FC30__CTOR_OFFSET UNITYSDK_OFFSET(0x1015A260)

inline static constexpr unsigned int Class_1_127632ED82F0FC30_TypeDefinitionIndex = 40847;

class Class_1_127632ED82F0FC30 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_127632ED82F0FC30_TypeDefinitionIndex)->GetStaticField(0x2BCC0);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_4; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Single Field_1_7; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_127632ED82F0FC30__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_127632ED82F0FC30__CCTOR_OFFSET))();
	}
};
