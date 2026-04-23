#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_A0449A0131A1BF21_METHOD_1_42BACE3BC7DBBCAD_OFFSET UNITYSDK_OFFSET(0x183F2910)
#define CLASS_1_A0449A0131A1BF21__CTOR_OFFSET UNITYSDK_OFFSET(0x183F2AA0)

inline static constexpr unsigned int Class_1_A0449A0131A1BF21_TypeDefinitionIndex = 13220;

class Class_1_A0449A0131A1BF21 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0449A0131A1BF21__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_42BACE3BC7DBBCAD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A0449A0131A1BF21*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A0449A0131A1BF21*&))((::PBYTE)hIl2Cpp + CLASS_1_A0449A0131A1BF21_METHOD_1_42BACE3BC7DBBCAD_OFFSET))(a1, a2);
	}
};
