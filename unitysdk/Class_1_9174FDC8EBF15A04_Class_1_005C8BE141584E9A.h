#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9174FDC8EBF15A04_CLASS_1_005C8BE141584E9A_GET_BUBBLETEXT_OFFSET UNITYSDK_OFFSET(0xA966B90)
#define CLASS_1_9174FDC8EBF15A04_CLASS_1_005C8BE141584E9A_GET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0xA966B70)
#define CLASS_1_9174FDC8EBF15A04_CLASS_1_005C8BE141584E9A_GET_STATETOPLAY_OFFSET UNITYSDK_OFFSET(0xA966B80)
#define CLASS_1_9174FDC8EBF15A04_CLASS_1_005C8BE141584E9A__CTOR_OFFSET UNITYSDK_OFFSET(0xA9669E0)

inline static constexpr unsigned int Class_1_9174FDC8EBF15A04_Class_1_005C8BE141584E9A_TypeDefinitionIndex = 70266;

class Class_1_9174FDC8EBF15A04_Class_1_005C8BE141584E9A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* _StateToPlay_k__BackingField; // 0x10
	::System::Single _Probability_k__BackingField; // 0x18
	::RPG::Client::TextID _BubbleText_k__BackingField; // 0x20

	::System::Void _ctor(::System::Single a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::RPG::Client::TextID a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::System::String*>*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_9174FDC8EBF15A04_CLASS_1_005C8BE141584E9A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single get_Probability()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9174FDC8EBF15A04_CLASS_1_005C8BE141584E9A_GET_PROBABILITY_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_StateToPlay()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9174FDC8EBF15A04_CLASS_1_005C8BE141584E9A_GET_STATETOPLAY_OFFSET))(this);
	}

	::RPG::Client::TextID get_BubbleText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9174FDC8EBF15A04_CLASS_1_005C8BE141584E9A_GET_BUBBLETEXT_OFFSET))(this);
	}
};
