#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_186335045AEDACF2.h"

namespace EnviromentSystemV2Space { class GradientCurveAsset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define CLASS_3_DEB1FB1EA274064C_METHOD_3_81BAC232B23930AE_OFFSET UNITYSDK_OFFSET(0x11E87540)
#define CLASS_3_DEB1FB1EA274064C_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11E86F40)
#define CLASS_3_DEB1FB1EA274064C_METHOD_3_9DC3EEE1F1F754B3_OFFSET UNITYSDK_OFFSET(0x11E87B20)
#define CLASS_3_DEB1FB1EA274064C_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11E86EB0)
#define CLASS_3_DEB1FB1EA274064C_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x11E87F80)
#define CLASS_3_DEB1FB1EA274064C_METHOD_3_E14EC21001F2D14C_OFFSET UNITYSDK_OFFSET(0x11E87E70)
#define CLASS_3_DEB1FB1EA274064C_METHOD_3_E46AC029E7CD1645_OFFSET UNITYSDK_OFFSET(0x11E86EA0)
#define CLASS_3_DEB1FB1EA274064C_METHOD_3_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0x11E87190)
#define CLASS_3_DEB1FB1EA274064C_METHOD_3_F390D3164114EE15_OFFSET UNITYSDK_OFFSET(0x11E86FA0)
#define CLASS_3_DEB1FB1EA274064C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E87EF0)

inline static constexpr unsigned int Class_3_DEB1FB1EA274064C_TypeDefinitionIndex = 46090;

class Class_3_DEB1FB1EA274064C : public ::Class_2_186335045AEDACF2<::UnityEngine::Gradient*>
{
public:
	::System::String* Field_3_1; // 0x30
	::UnityEngine::Texture* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEB1FB1EA274064C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_3_E46AC029E7CD1645()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEB1FB1EA274064C_METHOD_3_E46AC029E7CD1645_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEB1FB1EA274064C_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEB1FB1EA274064C_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_F390D3164114EE15(::EnviromentSystemV2Space::GradientCurveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::GradientCurveAsset*))((::PBYTE)hIl2Cpp + CLASS_3_DEB1FB1EA274064C_METHOD_3_F390D3164114EE15_OFFSET))(this, a1);
	}

	::System::Void Method_3_EB7282B6745B4611()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEB1FB1EA274064C_METHOD_3_EB7282B6745B4611_OFFSET))(this);
	}

	::System::Void Method_3_81BAC232B23930AE(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Gradient*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::UnityEngine::Gradient*>*))((::PBYTE)hIl2Cpp + CLASS_3_DEB1FB1EA274064C_METHOD_3_81BAC232B23930AE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Gradient* Method_3_9DC3EEE1F1F754B3(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DEB1FB1EA274064C_METHOD_3_9DC3EEE1F1F754B3_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Gradient* Method_3_E14EC21001F2D14C(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DEB1FB1EA274064C_METHOD_3_E14EC21001F2D14C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DEB1FB1EA274064C_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}
};
