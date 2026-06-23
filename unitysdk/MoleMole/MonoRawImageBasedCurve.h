#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_273278230A48923F;
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x11643140)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_GETCURVEHELPER_OFFSET UNITYSDK_OFFSET(0x116432E0)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_METHOD_5_45D298D4277C9C99_OFFSET UNITYSDK_OFFSET(0x11643A30)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_METHOD_5_4B18809CFB7F335E_OFFSET UNITYSDK_OFFSET(0x11644510)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_METHOD_5_6856F9F9BA5B38EF_OFFSET UNITYSDK_OFFSET(0x11644B20)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_METHOD_5_9972734FC91A4B95_OFFSET UNITYSDK_OFFSET(0x11644380)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_METHOD_5_C8334045F249DF96_OFFSET UNITYSDK_OFFSET(0x116448E0)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x116438A0)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x116434A0)
#define MOLEMOLE_MONORAWIMAGEBASEDCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x116439E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRawImageBasedCurve_TypeDefinitionIndex = 54595;

	class MonoRawImageBasedCurve : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::RawImage* Field_5_0; // 0x18
		::UnityEngine::UI::Text* Field_5_1; // 0x20
		::UnityEngine::UI::Text* Field_5_2; // 0x28
		::UnityEngine::UI::Text* Field_5_3; // 0x30
		::UnityEngine::UI::Text* Field_5_4; // 0x38
		::UnityEngine::UI::Text* Field_5_5; // 0x40
		::UnityEngine::Texture2D* Field_5_6; // 0x48
		::System::Boolean Field_5_7; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_AWAKE_OFFSET))(this);
		}

		::Class_1_273278230A48923F* GetCurveHelper()
		{
			return ((::Class_1_273278230A48923F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_GETCURVEHELPER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_45D298D4277C9C99(::System::Single a1, ::System::Single a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_METHOD_5_45D298D4277C9C99_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_9972734FC91A4B95(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_METHOD_5_9972734FC91A4B95_OFFSET))(this, a1);
		}

		::System::Void Method_5_4B18809CFB7F335E(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_METHOD_5_4B18809CFB7F335E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_C8334045F249DF96(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_METHOD_5_C8334045F249DF96_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_6856F9F9BA5B38EF(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORAWIMAGEBASEDCURVE_METHOD_5_6856F9F9BA5B38EF_OFFSET))(this, a1, a2);
		}
	};
}
