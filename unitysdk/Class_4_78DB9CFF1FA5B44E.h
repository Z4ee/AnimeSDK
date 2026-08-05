#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_78DB9CFF1FA5B44E_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15B681F0)
#define CLASS_4_78DB9CFF1FA5B44E_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15B67250)
#define CLASS_4_78DB9CFF1FA5B44E_METHOD_4_BA45C85D2944586C_OFFSET UNITYSDK_OFFSET(0x15B672E0)
#define CLASS_4_78DB9CFF1FA5B44E_METHOD_4_C1697CF07BD15831_OFFSET UNITYSDK_OFFSET(0x15B675D0)
#define CLASS_4_78DB9CFF1FA5B44E__CTOR_OFFSET UNITYSDK_OFFSET(0x15B68150)

inline static constexpr unsigned int Class_4_78DB9CFF1FA5B44E_TypeDefinitionIndex = 85055;

class Class_4_78DB9CFF1FA5B44E : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_78DB9CFF1FA5B44E__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_78DB9CFF1FA5B44E_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_BA45C85D2944586C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_78DB9CFF1FA5B44E_METHOD_4_BA45C85D2944586C_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_C1697CF07BD15831(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_4_78DB9CFF1FA5B44E_METHOD_4_C1697CF07BD15831_OFFSET))(a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_78DB9CFF1FA5B44E_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
