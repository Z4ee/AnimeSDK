#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageParamEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D6708DDDE04C9614_METHOD_1_69B133B3AD0ABDE8_OFFSET UNITYSDK_OFFSET(0x10A6CCD0)
#define CLASS_1_D6708DDDE04C9614__CTOR_OFFSET UNITYSDK_OFFSET(0x10A6CE80)

inline static constexpr unsigned int Class_1_D6708DDDE04C9614_TypeDefinitionIndex = 45152;

class Class_1_D6708DDDE04C9614 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6708DDDE04C9614__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::StageParamEntry*>* Method_1_69B133B3AD0ABDE8()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::StageParamEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6708DDDE04C9614_METHOD_1_69B133B3AD0ABDE8_OFFSET))(this);
	}
};
