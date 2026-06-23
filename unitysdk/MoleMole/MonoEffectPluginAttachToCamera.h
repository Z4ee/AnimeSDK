#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_AspectOffset.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_Enum_3_F5A0D260B2F99AB1.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_FovOffset.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_V3Curve.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_GETADAPTASPECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1913C9F0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1913D3E0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x163FA0A0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0x163FA190)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1913D090)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_24902946B5E8137E_OFFSET UNITYSDK_OFFSET(0x163FA5A0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_250144EB25DB3FF3_OFFSET UNITYSDK_OFFSET(0x1913CCC0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_7E8E3AC25D35AA00_OFFSET UNITYSDK_OFFSET(0x1913D0F0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0x163FAED0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x163FA100)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_BEA3E455B88CC3AF_OFFSET UNITYSDK_OFFSET(0x163FA6B0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_C7C1E2C7C26CB01E_OFFSET UNITYSDK_OFFSET(0x163FA1F0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x163FA530)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1913D080)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1913D030)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera_TypeDefinitionIndex = 51510;

	class MonoEffectPluginAttachToCamera : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		static ::System::Single* StaticGet_Field_6_14()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginAttachToCamera_TypeDefinitionIndex)->GetStaticField(0x12660);
		}
		// static const ::System::String* Field_6_2; // 0x0
		// static const ::System::String* Field_6_4; // 0x0
		// static const ::System::String* Field_6_8; // 0x0
		// static const ::System::String* Field_6_15; // 0x0
		::System::String* transformRootName; // 0x18
		::MoleMole::MonoEffectPluginAttachToCamera_Enum_3_F5A0D260B2F99AB1 attachStrategy; // 0x20
		::Il2CppArray<::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset>* AspectOffsets; // 0x28
		::UnityEngine::Vector3 attachOffset; // 0x30
		::UnityEngine::Vector3 attachScale; // 0x3C
		::UnityEngine::Vector3 attachRotation; // 0x48
		::MoleMole::MonoEffectPluginAttachToCamera_FovOffset minFovAttachOffset; // 0x54
		::MoleMole::MonoEffectPluginAttachToCamera_FovOffset maxFovAttachOffset; // 0x64
		::System::Boolean isOpenAddFovScale; // 0x74
		::System::Boolean isFovScale; // 0x75
		::System::Boolean isUseGlobalConfig; // 0x76
		::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset minRatioAttachOffset; // 0x78
		::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset midRatioAttachOffset; // 0xB4
		::MoleMole::MonoEffectPluginAttachToCamera_AspectOffset maxRatioAttachOffset; // 0xF0
		::System::Boolean OpenAspectCurve; // 0x12C
		::System::Boolean OpenMidAspectConfig; // 0x12D
		::MoleMole::MonoEffectPluginAttachToCamera_V3Curve minMaxRatioCurve1; // 0x130
		::MoleMole::MonoEffectPluginAttachToCamera_V3Curve minMaxRatioCurve2; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 GetAdaptAspectOffset(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_GETADAPTASPECTOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Method_6_7E8E3AC25D35AA00(::System::Single a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_7E8E3AC25D35AA00_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Boolean Method_6_250144EB25DB3FF3(::System::Single a1, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset& a2, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset&, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_250144EB25DB3FF3_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_1D4018D4200358D0_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_1D4018D4200358D0_2_OFFSET))(this);
		}

		::System::Boolean Method_6_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Void Method_6_C7C1E2C7C26CB01E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_C7C1E2C7C26CB01E_OFFSET))(this);
		}

		::System::Void Method_6_D0CD9A971CA3B1CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_D0CD9A971CA3B1CF_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Method_6_24902946B5E8137E(::System::Single a1, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset a2, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset a3)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset, ::MoleMole::MonoEffectPluginAttachToCamera_FovOffset))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_24902946B5E8137E_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_6_BEA3E455B88CC3AF(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_BEA3E455B88CC3AF_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_1D4018D4200358D0_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_1D4018D4200358D0_3_OFFSET))(this);
		}

		::System::Boolean Method_6_A3FAE12D7B6ACD62_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_METHOD_6_A3FAE12D7B6ACD62_1_OFFSET))(this);
		}
	};
}
