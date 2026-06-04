#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_21.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_FDC646CA20C093C8_CLASS_1_DFC28DD5F3631CD4__CTOR_OFFSET UNITYSDK_OFFSET(0xAC177F0)

inline static constexpr unsigned int Class_1_FDC646CA20C093C8_Class_1_DFC28DD5F3631CD4_TypeDefinitionIndex = 66389;

class Class_1_FDC646CA20C093C8_Class_1_DFC28DD5F3631CD4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_CC45B4503679E14E_21>* Field_1_0; // 0x10
	::Il2CppArray<::UnityEngine::Renderer*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDC646CA20C093C8_CLASS_1_DFC28DD5F3631CD4__CTOR_OFFSET))(this);
	}
};
