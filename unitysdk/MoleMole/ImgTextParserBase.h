#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::UI::Extension { class UIImgText; }

#define MOLEMOLE_IMGTEXTPARSERBASE_METHOD_5_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1821E1F0)
#define MOLEMOLE_IMGTEXTPARSERBASE_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1821E290)
#define MOLEMOLE_IMGTEXTPARSERBASE_METHOD_5_8F68D3DD3F7032DF_OFFSET UNITYSDK_OFFSET(0x1821D840)
#define MOLEMOLE_IMGTEXTPARSERBASE_METHOD_5_BCC281DC419BB5B6_OFFSET UNITYSDK_OFFSET(0x1821E150)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1821D6A0)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETKEY_OFFSET UNITYSDK_OFFSET(0x1821DAC0)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTFUNCNOTCLEARFUNC_OFFSET UNITYSDK_OFFSET(0x1821DB80)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTFUNC_OFFSET UNITYSDK_OFFSET(0x1821DA00)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTNOTCLEARFUNC_OFFSET UNITYSDK_OFFSET(0x1821DF60)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1821DD70)
#define MOLEMOLE_IMGTEXTPARSERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1821E1A0)

namespace MoleMole
{
	inline static constexpr unsigned int ImgTextParserBase_TypeDefinitionIndex = 39758;

	class ImgTextParserBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* oriText; // 0x18
		::UnityEngine::UI::Extension::UIImgText* Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x28
		::System::Func_1<::System::String*>* Field_5_3; // 0x30
		::System::String* Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE__CTOR_OFFSET))(this);
		}

		::System::Void SetColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETCOLOR_OFFSET))(this, a1);
		}

		::System::Void SetTextFunc(::System::Func_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTFUNC_OFFSET))(this, a1);
		}

		::System::Void SetKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETKEY_OFFSET))(this, a1);
		}

		::System::Void SetTextFuncNotClearFunc(::System::Func_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTFUNCNOTCLEARFUNC_OFFSET))(this, a1, a2);
		}

		::System::Void SetText(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void SetTextNotClearFunc(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTNOTCLEARFUNC_OFFSET))(this, a1, a2);
		}

		::System::String* Method_5_BCC281DC419BB5B6(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_METHOD_5_BCC281DC419BB5B6_OFFSET))(this, a1);
		}

		::System::String* Method_5_35EA095E1AFDD9C8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_METHOD_5_35EA095E1AFDD9C8_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIImgText* Method_5_8F68D3DD3F7032DF()
		{
			return ((::UnityEngine::UI::Extension::UIImgText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_METHOD_5_8F68D3DD3F7032DF_OFFSET))(this);
		}
	};
}
