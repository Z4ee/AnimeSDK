#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_2A71F34F235276E7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17455E80)

inline static constexpr unsigned int Class_1_2A71F34F235276E7_TypeDefinitionIndex = 70479;

class Class_1_2A71F34F235276E7 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::StreamingLayerType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A71F34F235276E7_TypeDefinitionIndex)->GetStaticField(0x35B10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2A71F34F235276E7__CCTOR_OFFSET))();
	}
};
