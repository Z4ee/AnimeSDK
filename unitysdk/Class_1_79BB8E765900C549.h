#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageParamEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_79BB8E765900C549_METHOD_1_B54F11430A10392A_OFFSET UNITYSDK_OFFSET(0x12A9A900)
#define CLASS_1_79BB8E765900C549__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9AB00)

inline static constexpr unsigned int Class_1_79BB8E765900C549_TypeDefinitionIndex = 52583;

class Class_1_79BB8E765900C549 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79BB8E765900C549__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::StageParamEntry*>* Method_1_B54F11430A10392A()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::StageParamEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79BB8E765900C549_METHOD_1_B54F11430A10392A_OFFSET))(this);
	}
};
