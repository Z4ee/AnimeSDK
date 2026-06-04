#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class FileInfo; }

#define CLASS_1_3CE802D288741D2D___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABFD050)
#define CLASS_1_3CE802D288741D2D___C__DISPLAYCLASS44_0__DELETEFILES_B__0_OFFSET UNITYSDK_OFFSET(0x1AC022F0)

inline static constexpr unsigned int Class_1_3CE802D288741D2D___c__DisplayClass44_0_TypeDefinitionIndex = 33507;

class Class_1_3CE802D288741D2D___c__DisplayClass44_0 : public ::System::Object
{
public:
	::System::String* exceptName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _DeleteFiles_b__0(::System::IO::FileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IO::FileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D___C__DISPLAYCLASS44_0__DELETEFILES_B__0_OFFSET))(this, a1);
	}
};
