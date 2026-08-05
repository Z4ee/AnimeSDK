#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_BDFA5199F510A813_METHOD_1_0937B31C7609AB9F_OFFSET UNITYSDK_OFFSET(0x16B28540)
#define CLASS_1_BDFA5199F510A813_METHOD_1_CB2569CCA7A26766_OFFSET UNITYSDK_OFFSET(0x16B289B0)

inline static constexpr unsigned int Class_1_BDFA5199F510A813_TypeDefinitionIndex = 49497;

class Class_1_BDFA5199F510A813 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_0937B31C7609AB9F(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BDFA5199F510A813_METHOD_1_0937B31C7609AB9F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CB2569CCA7A26766(::MoleMole::Battle::Entity* a1, ::UnityEngine::RectTransform* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BDFA5199F510A813_METHOD_1_CB2569CCA7A26766_OFFSET))(a1, a2, a3);
	}
};
