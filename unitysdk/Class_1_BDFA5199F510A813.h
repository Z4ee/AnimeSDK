#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_BDFA5199F510A813_METHOD_1_A01AE729684F1F89_OFFSET UNITYSDK_OFFSET(0x1409B300)
#define CLASS_1_BDFA5199F510A813_METHOD_1_CB2569CCA7A26766_OFFSET UNITYSDK_OFFSET(0x1409B770)

inline static constexpr unsigned int Class_1_BDFA5199F510A813_TypeDefinitionIndex = 64024;

class Class_1_BDFA5199F510A813 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_A01AE729684F1F89(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_BDFA5199F510A813_METHOD_1_A01AE729684F1F89_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CB2569CCA7A26766(::MoleMole::Battle::Entity* a1, ::UnityEngine::RectTransform* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BDFA5199F510A813_METHOD_1_CB2569CCA7A26766_OFFSET))(a1, a2, a3);
	}
};
