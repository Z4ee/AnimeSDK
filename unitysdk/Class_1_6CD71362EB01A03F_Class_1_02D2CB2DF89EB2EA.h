#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ShaderPropertySerialization; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_6CD71362EB01A03F_CLASS_1_02D2CB2DF89EB2EA__CTOR_OFFSET UNITYSDK_OFFSET(0x12543750)

inline static constexpr unsigned int Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA_TypeDefinitionIndex = 65462;

class Class_1_6CD71362EB01A03F_Class_1_02D2CB2DF89EB2EA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::ShaderPropertySerialization*>* Field_1_2; // 0x18
	::Il2CppArray<::UnityEngine::Renderer*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CD71362EB01A03F_CLASS_1_02D2CB2DF89EB2EA__CTOR_OFFSET))(this);
	}
};
