#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Struct_2_84DFD00216157EA7_TypeDefinitionIndex = 58143;

struct alignas(8) Struct_2_84DFD00216157EA7
{
	::RPG::GameCore::PlaneType Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x28
	::UnityEngine::Vector3 Field_2_4; // 0x2C
	::UnityEngine::Quaternion Field_2_5; // 0x38
	::System::String* Field_2_6; // 0x48
	::System::String* Field_2_7; // 0x50
};
