#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_13E98E15113145AC.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_6E8B2FCA74824121_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8B76850)
#define CLASS_3_6E8B2FCA74824121_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8B76800)
#define CLASS_3_6E8B2FCA74824121_METHOD_3_D4550D9E4433D1A0_OFFSET UNITYSDK_OFFSET(0x8B76890)
#define CLASS_3_6E8B2FCA74824121__CTOR_OFFSET UNITYSDK_OFFSET(0x8B768F0)

inline static constexpr unsigned int Class_3_6E8B2FCA74824121_TypeDefinitionIndex = 48532;

class Class_3_6E8B2FCA74824121 : public ::Class_2_13E98E15113145AC
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

	::System::Void Method_3_D4550D9E4433D1A0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6E8B2FCA74824121_METHOD_3_D4550D9E4433D1A0_OFFSET))(this, a1);
	}
};
