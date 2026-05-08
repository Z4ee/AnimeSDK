#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

class Class_1_1FD7843083B82E40;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B204188066BEB78__CTOR_OFFSET UNITYSDK_OFFSET(0x124704D0)

inline static constexpr unsigned int Class_1_3B204188066BEB78_TypeDefinitionIndex = 78698;

class Class_1_3B204188066BEB78 : public ::System::Object
{
public:
	::Class_1_1FD7843083B82E40* Field_1_9; // 0x10
	::Class_1_1FD7843083B82E40* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x28
	::System::Int64 Field_1_5; // 0x30
	::System::Int32 Field_1_0; // 0x38
	::System::Int32 Field_1_3; // 0x3C
	::System::Int32 Field_1_6; // 0x40
	::MoleMole::Level::RatingType Field_1_7; // 0x44
	::System::Int32 Field_1_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B204188066BEB78__CTOR_OFFSET))(this);
	}
};
