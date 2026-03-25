#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_5DC6E0116213DD18__CCTOR_OFFSET UNITYSDK_OFFSET(0x8864320)

inline static constexpr unsigned int Class_1_5DC6E0116213DD18_TypeDefinitionIndex = 60558;

class Class_1_5DC6E0116213DD18 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5DC6E0116213DD18_TypeDefinitionIndex)->GetStaticField(0x486B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5DC6E0116213DD18__CCTOR_OFFSET))();
	}
};
