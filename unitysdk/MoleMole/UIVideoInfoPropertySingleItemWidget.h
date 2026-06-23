#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"

class Class_2_208CC9941471731A_1116;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIVIDEOINFOPROPERTYSINGLEITEMWIDGET_SETDATA_OFFSET UNITYSDK_OFFSET(0x16DF2590)
#define MOLEMOLE_UIVIDEOINFOPROPERTYSINGLEITEMWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF2810)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoInfoPropertySingleItemWidget_TypeDefinitionIndex = 60371;

	class UIVideoInfoPropertySingleItemWidget : public ::MoleMole::UIMonoController
	{
	public:
		::Class_2_208CC9941471731A_1116* m_cfg; // 0x80
		::UnityEngine::UI::Image* m_icon; // 0x88
		::UnityEngine::GameObject* m_bg; // 0x90
		::UnityEngine::GameObject* m_empty; // 0x98
		::UnityEngine::UI::Text* m_text; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOINFOPROPERTYSINGLEITEMWIDGET__CTOR_OFFSET))(this);
		}

		::System::Void SetData(::Class_2_208CC9941471731A_1116* cfg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1116*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOINFOPROPERTYSINGLEITEMWIDGET_SETDATA_OFFSET))(this, cfg);
		}
	};
}
