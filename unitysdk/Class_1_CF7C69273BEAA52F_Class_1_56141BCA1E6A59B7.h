#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_CF7C69273BEAA52F_CLASS_1_56141BCA1E6A59B7__CTOR_OFFSET UNITYSDK_OFFSET(0x142AAF50)

inline static constexpr unsigned int Class_1_CF7C69273BEAA52F_Class_1_56141BCA1E6A59B7_TypeDefinitionIndex = 76963;

class Class_1_CF7C69273BEAA52F_Class_1_56141BCA1E6A59B7 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::MoleMole::Vector2Int>* Field_1_1; // 0x10
	::UnityEngine::Vector2 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF7C69273BEAA52F_CLASS_1_56141BCA1E6A59B7__CTOR_OFFSET))(this);
	}
};
