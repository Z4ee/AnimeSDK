#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F20F6E60E29BD550.h"
#include "unitysdk/System/Object.h"

class Class_1_B9D4D1F73BF62BE6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A00AB6F61FB75BAD_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1432B570)
#define CLASS_1_A00AB6F61FB75BAD_METHOD_1_4B344040672BA0E0_OFFSET UNITYSDK_OFFSET(0x1432B170)
#define CLASS_1_A00AB6F61FB75BAD_METHOD_1_58DFAB09A94818E4_OFFSET UNITYSDK_OFFSET(0x1432B1C0)
#define CLASS_1_A00AB6F61FB75BAD_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1432B520)
#define CLASS_1_A00AB6F61FB75BAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1432B160)

inline static constexpr unsigned int Class_1_A00AB6F61FB75BAD_TypeDefinitionIndex = 58992;

class Class_1_A00AB6F61FB75BAD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x10
	::Class_1_B9D4D1F73BF62BE6* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_B9D4D1F73BF62BE6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9D4D1F73BF62BE6*))((::PBYTE)hIl2Cpp + CLASS_1_A00AB6F61FB75BAD__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_F20F6E60E29BD550 Method_1_4B344040672BA0E0(::System::String* a1)
	{
		return ((::Enum_3_F20F6E60E29BD550(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A00AB6F61FB75BAD_METHOD_1_4B344040672BA0E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A00AB6F61FB75BAD_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A00AB6F61FB75BAD_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Enum_3_F20F6E60E29BD550 Method_1_58DFAB09A94818E4(::System::String* a1)
	{
		return ((::Enum_3_F20F6E60E29BD550(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A00AB6F61FB75BAD_METHOD_1_58DFAB09A94818E4_OFFSET))(this, a1);
	}
};
