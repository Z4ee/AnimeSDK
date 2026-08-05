#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B46A33D0838CB6F0__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9C940)

inline static constexpr unsigned int Class_1_B46A33D0838CB6F0_TypeDefinitionIndex = 74251;

class Class_1_B46A33D0838CB6F0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_0; // 0x10
	::System::Action* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::Boolean Field_1_7; // 0x24

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B46A33D0838CB6F0__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
