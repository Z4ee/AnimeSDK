#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDanmuViewBase.h"

class Class_1_849EE5CF9026AE9F;
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOIMAGEDANMUVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ACDF530)
#define RPG_CLIENT_MONOIMAGEDANMUVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ACDF600)
#define RPG_CLIENT_MONOIMAGEDANMUVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDF6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoImageDanmuView_TypeDefinitionIndex = 68916;

	class MonoImageDanmuView : public ::RPG::Client::MonoDanmuViewBase
	{
	public:
		::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOIMAGEDANMUVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOIMAGEDANMUVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void Initialize(::Class_1_849EE5CF9026AE9F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_849EE5CF9026AE9F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOIMAGEDANMUVIEW_INITIALIZE_OFFSET))(this, a1);
		}
	};
}
