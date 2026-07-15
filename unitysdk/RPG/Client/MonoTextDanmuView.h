#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDanmuViewBase.h"

class Class_1_849EE5CF9026AE9F;
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MONOTEXTDANMUVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A3525B0)
#define RPG_CLIENT_MONOTEXTDANMUVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A352660)
#define RPG_CLIENT_MONOTEXTDANMUVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A352720)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTextDanmuView_TypeDefinitionIndex = 65878;

	class MonoTextDanmuView : public ::RPG::Client::MonoDanmuViewBase
	{
	public:
		::UnityEngine::UI::Text* Field_6_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTEXTDANMUVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTEXTDANMUVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void Initialize(::Class_1_849EE5CF9026AE9F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_849EE5CF9026AE9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTEXTDANMUVIEW_INITIALIZE_OFFSET))(this, a1);
		}
	};
}
