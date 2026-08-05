#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_8BFD0616AD4A5163_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x109E7770)
#define CLASS_4_8BFD0616AD4A5163_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x109E6610)
#define CLASS_4_8BFD0616AD4A5163_METHOD_4_59D7DBD75B9EF7D2_OFFSET UNITYSDK_OFFSET(0x109E73C0)
#define CLASS_4_8BFD0616AD4A5163_METHOD_4_A32C34C28EBFFA29_OFFSET UNITYSDK_OFFSET(0x109E67C0)
#define CLASS_4_8BFD0616AD4A5163__CTOR_OFFSET UNITYSDK_OFFSET(0x109E7610)

inline static constexpr unsigned int Class_4_8BFD0616AD4A5163_TypeDefinitionIndex = 75442;

class Class_4_8BFD0616AD4A5163 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_2; // 0x30
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8BFD0616AD4A5163__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8BFD0616AD4A5163_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_A32C34C28EBFFA29(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_8BFD0616AD4A5163_METHOD_4_A32C34C28EBFFA29_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8BFD0616AD4A5163_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::MoleMole::Config::ConfigEntityAnimEvent* Method_4_59D7DBD75B9EF7D2(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_8BFD0616AD4A5163_METHOD_4_59D7DBD75B9EF7D2_OFFSET))(this, a1, a2);
	}
};
