#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_FD0167EB507B9435_15_GET_RICHTEXTMESSAGENAME_OFFSET UNITYSDK_OFFSET(0x16CFDD00)
#define CLASS_2_FD0167EB507B9435_15_GET_RICHTEXTVALUEMAP_OFFSET UNITYSDK_OFFSET(0x16CFDD70)
#define CLASS_2_FD0167EB507B9435_15__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFDCF0)

inline static constexpr unsigned int Class_2_FD0167EB507B9435_15_TypeDefinitionIndex = 62114;

class Class_2_FD0167EB507B9435_15 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_15__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_RichTextMessageName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_15_GET_RICHTEXTMESSAGENAME_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* get_RichTextValueMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD0167EB507B9435_15_GET_RICHTEXTVALUEMAP_OFFSET))(this);
	}
};
