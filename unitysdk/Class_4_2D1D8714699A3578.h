#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_2D1D8714699A3578_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x114CD2A0)
#define CLASS_4_2D1D8714699A3578_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x114CD020)
#define CLASS_4_2D1D8714699A3578_METHOD_4_FCA7C739F8E5F729_OFFSET UNITYSDK_OFFSET(0x114CD0B0)
#define CLASS_4_2D1D8714699A3578__CTOR_OFFSET UNITYSDK_OFFSET(0x114CD200)

inline static constexpr unsigned int Class_4_2D1D8714699A3578_TypeDefinitionIndex = 50230;

class Class_4_2D1D8714699A3578 : public ::Class_3_F3948D237059FA7A
{
public:
	// static const ::System::String* Field_4_7; // 0x0
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D1D8714699A3578__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D1D8714699A3578_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_FCA7C739F8E5F729(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2D1D8714699A3578_METHOD_4_FCA7C739F8E5F729_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D1D8714699A3578_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
