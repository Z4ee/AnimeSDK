#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D2FFFE31BCBDFD37;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E80F7834D06089C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B0F40)

inline static constexpr unsigned int Class_1_E80F7834D06089C8_TypeDefinitionIndex = 41586;

class Class_1_E80F7834D06089C8 : public ::System::Object
{
public:
	// static const ::System::String* FOLDCNKIINA; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_D2FFFE31BCBDFD37*>* KNBPOHCGEGB; // 0x10
	::System::Boolean MOKNCFJICIC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E80F7834D06089C8__CTOR_OFFSET))(this);
	}
};
