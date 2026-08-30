#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_343;
class Class_0_16E4307DCC419505_344;
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_F3CAAE7E7C7111CC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E760850)
#define CLASS_1_F3CAAE7E7C7111CC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E760780)
#define CLASS_1_F3CAAE7E7C7111CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E75FFA0)

inline static constexpr unsigned int Class_1_F3CAAE7E7C7111CC_TypeDefinitionIndex = 42474;

class Class_1_F3CAAE7E7C7111CC : public ::System::Object
{
public:
	::System::Type* DNJCEPOHKGN; // 0x10
	::Class_0_16E4307DCC419505_343* FNDHDEOILCK; // 0x18
	::Class_0_16E4307DCC419505_344* CGFMKDGPGHP; // 0x20
	::System::Guid DKHNNMHCBPJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CAAE7E7C7111CC__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CAAE7E7C7111CC_TOSTRING_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CAAE7E7C7111CC_DISPOSE_OFFSET))(this);
	}
};
