#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BD1A98EFEDD35816.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_7508481856B4C95F_METHOD_1_5EA1EEB830143C1B_OFFSET UNITYSDK_OFFSET(0x18EF9D70)
#define CLASS_1_7508481856B4C95F_METHOD_1_63E67BE8FEFC1706_OFFSET UNITYSDK_OFFSET(0x18EF9F10)
#define CLASS_1_7508481856B4C95F_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18EF9EA0)
#define CLASS_1_7508481856B4C95F__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFA720)

inline static constexpr unsigned int Class_1_7508481856B4C95F_TypeDefinitionIndex = 70472;

class Class_1_7508481856B4C95F : public ::System::Object
{
public:
	::RPG::GameCore::BlockNodeConfig* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::Struct_2_BD1A98EFEDD35816>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::Struct_2_BD1A98EFEDD35816>* Field_1_3; // 0x28
	::Class_1_303D5A33D1401D59* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7508481856B4C95F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5EA1EEB830143C1B(::Struct_2_BD1A98EFEDD35816 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BD1A98EFEDD35816, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7508481856B4C95F_METHOD_1_5EA1EEB830143C1B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7508481856B4C95F_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_63E67BE8FEFC1706(::System::Text::StringBuilder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_7508481856B4C95F_METHOD_1_63E67BE8FEFC1706_OFFSET))(this, a1);
	}
};
