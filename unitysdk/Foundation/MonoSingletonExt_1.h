#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

namespace Foundation
{
	inline static constexpr unsigned int MonoSingletonExt_1_TypeDefinitionIndex = 8360;

	template <typename T>
	class MonoSingletonExt_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* STR_NoInstanceOfATemporaryOneIsCreated; // 0x0
		// static const ::System::String* STR_TempInstanceOf; // 0x0
		// static const ::System::String* STR_ProblemDuringTheCreationOf; // 0x0
		static T* StaticGet_m_Instance()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(MonoSingletonExt_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
