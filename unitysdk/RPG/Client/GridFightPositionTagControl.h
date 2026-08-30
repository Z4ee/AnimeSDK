#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_679;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xD2E9300)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD2E88D0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xD2E8870)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD2E9630)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__GETTEXTID_OFFSET UNITYSDK_OFFSET(0xD2E9540)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPositionTagControl_TypeDefinitionIndex = 60238;

	class GridFightPositionTagControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_679*>
	{
	public:
		::UnityEngine::Transform* _FrontMark; // 0x58
		::UnityEngine::Transform* _BackMark; // 0x60
		::UnityEngine::Transform* _FrontAndBackMark; // 0x68
		::UnityEngine::Transform* _ProjectionMark; // 0x70
		::RPG::Client::MonoUIColorSwitcher* _ColorSwitch; // 0x78
		::RPG::Client::LocalizedText* _FrontBackNameText; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_679*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_679*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindDisplayType(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_679*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_679*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDDISPLAYTYPE_OFFSET))(this, a1);
		}

		::System::Void _BindColorState(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_679*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_679*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDCOLORSTATE_OFFSET))(this, a1);
		}

		static ::RPG::Client::TextID _GetTextID(::System::Nullable_1<::RPG::GameCore::GridFightPreset> a1)
		{
			return ((::RPG::Client::TextID(*)(::System::Nullable_1<::RPG::GameCore::GridFightPreset>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__GETTEXTID_OFFSET))(a1);
		}
	};
}
