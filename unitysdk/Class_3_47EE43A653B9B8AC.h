#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_44A81BFFAB72BD6C_LightParam.h"
#include "unitysdk/StageHarmonyLightModLinkSlot.h"

class Class_1_96C82B73FFE758FB;
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define CLASS_3_47EE43A653B9B8AC_METHOD_3_9497FF4436DF1886_OFFSET UNITYSDK_OFFSET(0x8959920)
#define CLASS_3_47EE43A653B9B8AC_METHOD_3_BFD827699644D716_OFFSET UNITYSDK_OFFSET(0x8959720)
#define CLASS_3_47EE43A653B9B8AC_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x895A070)
#define CLASS_3_47EE43A653B9B8AC_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x895A0B0)
#define CLASS_3_47EE43A653B9B8AC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x895A030)
#define CLASS_3_47EE43A653B9B8AC_METHOD_3_E46509D2BC81F8FB_OFFSET UNITYSDK_OFFSET(0x8959C30)
#define CLASS_3_47EE43A653B9B8AC__CTOR_OFFSET UNITYSDK_OFFSET(0x895A0F0)

inline static constexpr unsigned int Class_3_47EE43A653B9B8AC_TypeDefinitionIndex = 38248;

class Class_3_47EE43A653B9B8AC : public ::StageHarmonyLightModLinkSlot
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EE43A653B9B8AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_BFD827699644D716(::System::Int32 a1, ::Class_1_96C82B73FFE758FB* a2, ::RPG::CustomRP::CustomAdditionalLightData*& a3, ::UnityEngine::Light*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_96C82B73FFE758FB*, ::RPG::CustomRP::CustomAdditionalLightData*&, ::UnityEngine::Light*&))((::PBYTE)hIl2Cpp + CLASS_3_47EE43A653B9B8AC_METHOD_3_BFD827699644D716_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_9497FF4436DF1886(::System::Int32 a1, ::Class_1_44A81BFFAB72BD6C_LightParam a2, ::System::Single a3, ::Class_1_96C82B73FFE758FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_44A81BFFAB72BD6C_LightParam, ::System::Single, ::Class_1_96C82B73FFE758FB*))((::PBYTE)hIl2Cpp + CLASS_3_47EE43A653B9B8AC_METHOD_3_9497FF4436DF1886_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_E46509D2BC81F8FB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_47EE43A653B9B8AC_METHOD_3_E46509D2BC81F8FB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EE43A653B9B8AC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EE43A653B9B8AC_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EE43A653B9B8AC_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}
};
