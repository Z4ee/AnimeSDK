#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_DB0198B8035E5E68_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x18B0EF10)
#define CLASS_4_DB0198B8035E5E68_METHOD_4_76D08C8CC67EACBC_OFFSET UNITYSDK_OFFSET(0x18B0ECF0)
#define CLASS_4_DB0198B8035E5E68_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18B0EC60)
#define CLASS_4_DB0198B8035E5E68__CTOR_OFFSET UNITYSDK_OFFSET(0x18B0EE70)

inline static constexpr unsigned int Class_4_DB0198B8035E5E68_TypeDefinitionIndex = 47549;

class Class_4_DB0198B8035E5E68 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DB0198B8035E5E68__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DB0198B8035E5E68_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_76D08C8CC67EACBC(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_DB0198B8035E5E68_METHOD_4_76D08C8CC67EACBC_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DB0198B8035E5E68_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
