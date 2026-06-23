#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_004403B81CB2D8D4.h"
#include "unitysdk/System/Object.h"

class Class_1_7FE6687E3546072C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A00AB6F61FB75BAD_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17474A20)
#define CLASS_1_A00AB6F61FB75BAD_METHOD_1_7B7F803DBAA2CFF9_OFFSET UNITYSDK_OFFSET(0x17474AC0)
#define CLASS_1_A00AB6F61FB75BAD_METHOD_1_A5F535C3E85A118D_OFFSET UNITYSDK_OFFSET(0x17474A70)
#define CLASS_1_A00AB6F61FB75BAD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17474E50)
#define CLASS_1_A00AB6F61FB75BAD__CTOR_OFFSET UNITYSDK_OFFSET(0x17474A10)

inline static constexpr unsigned int Class_1_A00AB6F61FB75BAD_TypeDefinitionIndex = 42318;

class Class_1_A00AB6F61FB75BAD : public ::System::Object
{
public:
	::Class_1_7FE6687E3546072C* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_7FE6687E3546072C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FE6687E3546072C*))((::PBYTE)hIl2Cpp + CLASS_1_A00AB6F61FB75BAD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A00AB6F61FB75BAD_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Enum_3_004403B81CB2D8D4 Method_1_A5F535C3E85A118D(::System::String* a1)
	{
		return ((::Enum_3_004403B81CB2D8D4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A00AB6F61FB75BAD_METHOD_1_A5F535C3E85A118D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00AB6F61FB75BAD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Enum_3_004403B81CB2D8D4 Method_1_7B7F803DBAA2CFF9(::System::String* a1)
	{
		return ((::Enum_3_004403B81CB2D8D4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A00AB6F61FB75BAD_METHOD_1_7B7F803DBAA2CFF9_OFFSET))(this, a1);
	}
};
