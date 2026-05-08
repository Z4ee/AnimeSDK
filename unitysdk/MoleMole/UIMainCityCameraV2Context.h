#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CAD4E9467727B0A1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_156BE44D1D984E46;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT_ADDMODES_OFFSET UNITYSDK_OFFSET(0x15563610)
#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x155636D0)
#define MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15563570)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraV2Context_TypeDefinitionIndex = 53884;

	class UIMainCityCameraV2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::System::Collections::Generic::List_1<::Class_1_156BE44D1D984E46*>* PhotoCameraModes; // 0x30
		::System::Boolean IsHideBattleUI; // 0x38
		::System::Nullable_1<::System::Boolean> IsLoadLastPhotoSetting; // 0x39
		::System::Boolean IsCursorHide; // 0x3B
		::System::Boolean IsClosePlayFadeoutAnim; // 0x3C
		::System::Nullable_1<::Enum_3_CAD4E9467727B0A1> InitCameraModeType; // 0x40
		::System::Nullable_1<::System::Int32> InitShowPhotoFrameID; // 0x48

		::System::Void _ctor(::Il2CppArray<::Class_1_156BE44D1D984E46*>* cameraModes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_156BE44D1D984E46*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_OFFSET))(this, cameraModes);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT__CTOR_1_OFFSET))(this);
		}

		::System::Void AddModes(::Il2CppArray<::Class_1_156BE44D1D984E46*>* cameraModes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_156BE44D1D984E46*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2CONTEXT_ADDMODES_OFFSET))(this, cameraModes);
		}
	};
}
