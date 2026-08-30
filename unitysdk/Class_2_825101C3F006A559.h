#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_825101C3F006A559__CTOR_OFFSET UNITYSDK_OFFSET(0x1C740780)

inline static constexpr unsigned int Class_2_825101C3F006A559_TypeDefinitionIndex = 24710;

class Class_2_825101C3F006A559 : public ::System::Attribute
{
public:
	::System::String* MNCFLNJDADD; // 0x10
	::System::String* HHFCMJHIIFH; // 0x18
	::System::String* ODIMMONKLCN; // 0x20
	::System::String* LCEFCHMBLIJ; // 0x28
	::System::Boolean NBMKFMINNGO; // 0x30
	::System::Boolean OBPBJEFOLKN; // 0x31
	::System::Boolean EIMAOOIHEHL; // 0x32
	::System::Boolean CEGLIHECHNG; // 0x33

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_825101C3F006A559__CTOR_OFFSET))(this, a1, a2);
	}
};
