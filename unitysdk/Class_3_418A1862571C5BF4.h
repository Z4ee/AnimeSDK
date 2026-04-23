#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_418A1862571C5BF4_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x1833FC90)
#define CLASS_3_418A1862571C5BF4_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1833FD10)
#define CLASS_3_418A1862571C5BF4__CTOR_OFFSET UNITYSDK_OFFSET(0x1833FCE0)

inline static constexpr unsigned int Class_3_418A1862571C5BF4_TypeDefinitionIndex = 21770;

class Class_3_418A1862571C5BF4 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_2; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::String* Field_3_3; // 0x28
	::System::String* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_418A1862571C5BF4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_418A1862571C5BF4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_418A1862571C5BF4*&))((::PBYTE)hIl2Cpp + CLASS_3_418A1862571C5BF4_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_418A1862571C5BF4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_418A1862571C5BF4*))((::PBYTE)hIl2Cpp + CLASS_3_418A1862571C5BF4_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
