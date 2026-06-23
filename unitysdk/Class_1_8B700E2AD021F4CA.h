#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

inline static constexpr unsigned int Class_1_8B700E2AD021F4CA_TypeDefinitionIndex = 83870;

template <typename T>
class Class_1_8B700E2AD021F4CA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, T>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, T>* Field_1_1; // 0x0
};
