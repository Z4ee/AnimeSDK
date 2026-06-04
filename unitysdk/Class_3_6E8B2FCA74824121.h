#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7D53347CD75A5D8B.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_6E8B2FCA74824121_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1363E050)
#define CLASS_3_6E8B2FCA74824121_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1363E000)
#define CLASS_3_6E8B2FCA74824121_METHOD_3_627A43057F5DEAED_OFFSET UNITYSDK_OFFSET(0x1363E090)
#define CLASS_3_6E8B2FCA74824121__CTOR_OFFSET UNITYSDK_OFFSET(0x1363E0F0)

inline static constexpr unsigned int Class_3_6E8B2FCA74824121_TypeDefinitionIndex = 56015;

class Class_3_6E8B2FCA74824121 : public ::Class_2_7D53347CD75A5D8B
{
public:
	::System::Boolean Field_3_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E8B2FCA74824121__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6E8B2FCA74824121_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E8B2FCA74824121_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_627A43057F5DEAED(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6E8B2FCA74824121_METHOD_3_627A43057F5DEAED_OFFSET))(this, a1);
	}
};
