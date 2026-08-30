#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_CurveType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_InputCurveInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_InputCurveMethod.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_InputCurveParameterization.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO_CREATEFROMHAPI_INPUTCURVEINFO_OFFSET UNITYSDK_OFFSET(0x11A4D5C0)
#define HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO_GETBREAKPOINTPARAMETERIZATIONNAMES_OFFSET UNITYSDK_OFFSET(0x11A4D730)
#define HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO_GETCURVETYPENAMES_OFFSET UNITYSDK_OFFSET(0x11A4D640)
#define HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO_GETINPUTMETHODNAMES_OFFSET UNITYSDK_OFFSET(0x11A4D6C0)
#define HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11A4D630)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputCurveInfo_TypeDefinitionIndex = 39081;

	class HEU_InputCurveInfo : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_CurveType curveType; // 0x10
		::System::Int32 order; // 0x14
		::System::Boolean closed; // 0x18
		::System::Boolean reverse; // 0x19
		::HoudiniEngineUnity::HAPI_InputCurveMethod inputMethod; // 0x1C
		::HoudiniEngineUnity::HAPI_InputCurveParameterization breakpointParameterization; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO__CTOR_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_InputCurveInfo* CreateFromHAPI_InputCurveInfo(::HoudiniEngineUnity::HAPI_InputCurveInfo a1)
		{
			return ((::HoudiniEngineUnity::HEU_InputCurveInfo*(*)(::HoudiniEngineUnity::HAPI_InputCurveInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO_CREATEFROMHAPI_INPUTCURVEINFO_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* GetCurveTypeNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO_GETCURVETYPENAMES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* GetInputMethodNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO_GETINPUTMETHODNAMES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* GetBreakpointParameterizationNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTCURVEINFO_GETBREAKPOINTPARAMETERIZATIONNAMES_OFFSET))();
		}
	};
}
