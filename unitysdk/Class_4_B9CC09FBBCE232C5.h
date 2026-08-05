#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_65C2BD0D1B91C740.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigCurveCtrlMatIntensityNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1BC36300)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1BC35D70)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x1BC35DD0)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_7E1E8D4D4624B158_OFFSET UNITYSDK_OFFSET(0x1BC35990)
#define CLASS_4_B9CC09FBBCE232C5_METHOD_4_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1BC358E0)
#define CLASS_4_B9CC09FBBCE232C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC362F0)

inline static constexpr unsigned int Class_4_B9CC09FBBCE232C5_TypeDefinitionIndex = 46102;

class Class_4_B9CC09FBBCE232C5 : public ::Class_3_65C2BD0D1B91C740
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* Field_4_5; // 0x48
	::Il2CppArray<::UnityEngine::Material*>* Field_4_1; // 0x50
	::MoleMole::Config::ConfigCurveCtrlMatIntensityNode* Field_4_2; // 0x58
	::System::String* Field_4_0; // 0x60
	::UnityEngine::Color Field_4_7; // 0x68
	::System::Boolean Field_4_6; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_4_7E1E8D4D4624B158()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_7E1E8D4D4624B158_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_4_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B9CC09FBBCE232C5_METHOD_4_4343F372F34C05BF_1_OFFSET))(this);
	}
};
