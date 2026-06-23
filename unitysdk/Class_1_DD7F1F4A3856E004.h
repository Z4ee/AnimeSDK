#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DD7F1F4A3856E004_Enum_3_CCB474C831EAC1EE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowRenderSequenceConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD7F1F4A3856E004__CTOR_OFFSET UNITYSDK_OFFSET(0xFE0C890)

inline static constexpr unsigned int Class_1_DD7F1F4A3856E004_TypeDefinitionIndex = 49049;

class Class_1_DD7F1F4A3856E004 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowRenderSequenceConfig*>* Field_1_1; // 0x10
	::Class_1_DD7F1F4A3856E004_Enum_3_CCB474C831EAC1EE Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD7F1F4A3856E004__CTOR_OFFSET))(this);
	}
};
