#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_830515DDEC4B1D1B.h"
#include "unitysdk/Enum_3_AB9CCA0B2E05A401.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapPageContext_SDefaultFocusInfo.h"
#include "unitysdk/Struct_2_B679E4D914A10080.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPPAGECONTEXT_COPYTO_OFFSET UNITYSDK_OFFSET(0x1303E9A0)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1303EA50)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_GET_ISXKOV_OFFSET UNITYSDK_OFFSET(0x1303E8A0)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_GET_ZENKOVSELECTQUESTID_OFFSET UNITYSDK_OFFSET(0x1303E900)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_SET_ZENKOVSELECTQUESTID_OFFSET UNITYSDK_OFFSET(0x1303E910)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x112C1D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPageContext_TypeDefinitionIndex = 65724;

	class UIUrbanMapPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TeleportAudio; // 0x28
		::System::Action* OnManulClose; // 0x30
		::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo DefaultFocusInfo; // 0x38
		::System::Action* AfterOpenMap; // 0x68
		::Enum_3_AB9CCA0B2E05A401 DefaultPeriod; // 0x70
		::System::Boolean BangkovMode; // 0x74
		::System::Int32 _zenkovSelectQuestId; // 0x78
		::System::Int32 FromMap3dAreaId; // 0x7C
		::Enum_3_830515DDEC4B1D1B ZenKovRightTabType; // 0x80
		::Struct_2_B679E4D914A10080 FromSectionOrFloor; // 0x84
		::System::Boolean AutoFocusTrackAnim; // 0x8C
		::System::Boolean Is3DMode; // 0x8D
		::System::Boolean AsyncLoad; // 0x8E
		::System::Boolean ZenkovMode; // 0x8F
		::System::Int32 Map3dAreaId; // 0x90
		::Struct_2_B679E4D914A10080 SectionOrFloor; // 0x94
		::System::Int32 SpecialLayerIndex; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsXKov()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_GET_ISXKOV_OFFSET))(this);
		}

		::System::Int32 get_ZenKovSelectQuestId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_GET_ZENKOVSELECTQUESTID_OFFSET))(this);
		}

		::System::Void set_ZenKovSelectQuestId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_SET_ZENKOVSELECTQUESTID_OFFSET))(this, value);
		}

		::System::Void CopyTo(::MoleMole::UIUrbanMapPageContext* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPageContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_COPYTO_OFFSET))(this, other);
		}

		::System::Boolean Equals(::MoleMole::UIUrbanMapPageContext* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapPageContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_EQUALS_OFFSET))(this, other);
		}
	};
}
