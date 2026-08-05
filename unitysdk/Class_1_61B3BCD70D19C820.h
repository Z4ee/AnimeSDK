#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_61B3BCD70D19C820__CTOR_OFFSET UNITYSDK_OFFSET(0x1874E800)

inline static constexpr unsigned int Class_1_61B3BCD70D19C820_TypeDefinitionIndex = 48592;

class Class_1_61B3BCD70D19C820 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_3; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x21

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_61B3BCD70D19C820__CTOR_OFFSET))(this, a1, a2);
	}
};
