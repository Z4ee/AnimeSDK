#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoDanmuViewBase.h"

class Class_1_849EE5CF9026AE9F;
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOIMAGEDANMUVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x18C496B0)
#define RPG_CLIENT_MONOIMAGEDANMUVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18C49760)
#define RPG_CLIENT_MONOIMAGEDANMUVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C49810)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoImageDanmuView_TypeDefinitionIndex = 65877;

	class MonoImageDanmuView : public ::RPG::Client::MonoDanmuViewBase
	{
	public:
		::UnityEngine::UI::Image* Field_6_0; // 0x20

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
