#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_5BAAEACDC3D740A2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB96770)

inline static constexpr unsigned int Class_1_5BAAEACDC3D740A2_TypeDefinitionIndex = 73764;

class Class_1_5BAAEACDC3D740A2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>** StaticGet_EAAFHBCOLCH()
	{
		return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BAAEACDC3D740A2_TypeDefinitionIndex)->GetStaticField(0x60B40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BAAEACDC3D740A2__CCTOR_OFFSET))();
	}
};
