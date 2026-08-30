#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageParamEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_79BB8E765900C549_METHOD_1_B54F11430A10392A_OFFSET UNITYSDK_OFFSET(0x19BD29E0)
#define CLASS_1_79BB8E765900C549__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD2BE0)

inline static constexpr unsigned int Class_1_79BB8E765900C549_TypeDefinitionIndex = 56507;

class Class_1_79BB8E765900C549 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* EJHODPJIFIN; // 0x10
	::System::String* OENAMINOLLF; // 0x18
	::System::Int32 IKNFGMJEDOC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79BB8E765900C549__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::StageParamEntry*>* Method_1_B54F11430A10392A()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::StageParamEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79BB8E765900C549_METHOD_1_B54F11430A10392A_OFFSET))(this);
	}
};
