#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7D53347CD75A5D8B.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_86D599DC64D615CE_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15401290)
#define CLASS_3_86D599DC64D615CE_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x15401240)
#define CLASS_3_86D599DC64D615CE_METHOD_3_B31F41869DBEDA68_OFFSET UNITYSDK_OFFSET(0x154012D0)
#define CLASS_3_86D599DC64D615CE__CTOR_OFFSET UNITYSDK_OFFSET(0x15401330)

inline static constexpr unsigned int Class_3_86D599DC64D615CE_TypeDefinitionIndex = 60052;

class Class_3_86D599DC64D615CE : public ::Class_2_7D53347CD75A5D8B
{
public:
	::System::Boolean GALLALLGEHA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86D599DC64D615CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_86D599DC64D615CE_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86D599DC64D615CE_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_B31F41869DBEDA68(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_86D599DC64D615CE_METHOD_3_B31F41869DBEDA68_OFFSET))(this, a1, a2);
	}
};
