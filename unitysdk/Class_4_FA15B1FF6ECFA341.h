#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_65C2BD0D1B91C740.h"

namespace MoleMole::Config { class ConfigCurveCtrlMatAlphaNode; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define CLASS_4_FA15B1FF6ECFA341_METHOD_4_4403F1E9DB2EB489_OFFSET UNITYSDK_OFFSET(0x13EE2300)
#define CLASS_4_FA15B1FF6ECFA341_METHOD_4_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x13EE24D0)
#define CLASS_4_FA15B1FF6ECFA341_METHOD_4_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x13EE2250)
#define CLASS_4_FA15B1FF6ECFA341__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE2690)

inline static constexpr unsigned int Class_4_FA15B1FF6ECFA341_TypeDefinitionIndex = 78221;

class Class_4_FA15B1FF6ECFA341 : public ::Class_3_65C2BD0D1B91C740
{
public:
	::Il2CppArray<::UnityEngine::Material*>* Field_4_0; // 0x48
	::MoleMole::Config::ConfigCurveCtrlMatAlphaNode* Field_4_1; // 0x50
	::System::String* Field_4_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FA15B1FF6ECFA341__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FA15B1FF6ECFA341_METHOD_4_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_4_4403F1E9DB2EB489()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FA15B1FF6ECFA341_METHOD_4_4403F1E9DB2EB489_OFFSET))(this);
	}

	::System::Void Method_4_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FA15B1FF6ECFA341_METHOD_4_BF5E2DCAE0BF038A_OFFSET))(this);
	}
};
