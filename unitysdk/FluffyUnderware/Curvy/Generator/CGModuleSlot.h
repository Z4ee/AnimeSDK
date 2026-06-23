#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class IExternalInput; }
namespace FluffyUnderware::Curvy::Generator { class IOnRequestProcessing; }
namespace FluffyUnderware::Curvy::Generator { class IPathProvider; }
namespace FluffyUnderware::Curvy::Generator { class SlotInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_CANLINKTO_OFFSET UNITYSDK_OFFSET(0x1DB51550)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GETLINKEDMODULES_OFFSET UNITYSDK_OFFSET(0x1DB51BF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_CANVASSPACEDROPZONE_OFFSET UNITYSDK_OFFSET(0x1DB51740)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DB51180)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_DROPZONE_OFFSET UNITYSDK_OFFSET(0x1DB51720)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_EXTERNALINPUT_OFFSET UNITYSDK_OFFSET(0x1DB51B60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DB516E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_ISLINKEDANDCONFIGURED_OFFSET UNITYSDK_OFFSET(0x1DB518C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_ISLINKED_OFFSET UNITYSDK_OFFSET(0x1DB51790)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_ISONREQUEST_OFFSET UNITYSDK_OFFSET(0x1DB4FCA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_LINKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x1DB51220)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1DB516C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DB51BA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_ONREQUESTMODULE_OFFSET UNITYSDK_OFFSET(0x1DB51AE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1DB51700)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_PATHPROVIDER_OFFSET UNITYSDK_OFFSET(0x1DB51B20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_HASLINKTO_OFFSET UNITYSDK_OFFSET(0x1DB501C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_LINKINPUTANDOUTPUT_OFFSET UNITYSDK_OFFSET(0x1DB50380)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_LINKTO_OFFSET UNITYSDK_OFFSET(0x1DB50790)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_LOADLINKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x1DB50160)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DB51540)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_REINITIALIZELINKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x1DB50170)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_SETINFOFROMFIELD_OFFSET UNITYSDK_OFFSET(0x1DB52010)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_SET_DROPZONE_OFFSET UNITYSDK_OFFSET(0x1DB51730)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x1DB516F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_SET_MODULE_OFFSET UNITYSDK_OFFSET(0x1DB516D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1DB51710)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB52280)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_UNLINKALL_OFFSET UNITYSDK_OFFSET(0x1DB51E30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_UNLINKFROM_OFFSET UNITYSDK_OFFSET(0x1DB50B90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB51650)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModuleSlot_TypeDefinitionIndex = 38966;

	class CGModuleSlot : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModule* _Module_k__BackingField; // 0x10
		::FluffyUnderware::Curvy::Generator::SlotInfo* _Info_k__BackingField; // 0x18
		::UnityEngine::Vector2 _Origin_k__BackingField; // 0x20
		::UnityEngine::Rect _DropZone_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>* mLinkedSlots; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGModule* get_Module()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_MODULE_OFFSET))(this);
		}

		::System::Void set_Module(::FluffyUnderware::Curvy::Generator::CGModule* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_SET_MODULE_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::SlotInfo* get_Info()
		{
			return ((::FluffyUnderware::Curvy::Generator::SlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_INFO_OFFSET))(this);
		}

		::System::Void set_Info(::FluffyUnderware::Curvy::Generator::SlotInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::SlotInfo*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_SET_INFO_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_Origin()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_ORIGIN_OFFSET))(this);
		}

		::System::Void set_Origin(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_SET_ORIGIN_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_DropZone()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_DROPZONE_OFFSET))(this);
		}

		::System::Void set_DropZone(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_SET_DROPZONE_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_CanvasSpaceDropZone()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_CANVASSPACEDROPZONE_OFFSET))(this);
		}

		::System::Boolean get_IsLinked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_ISLINKED_OFFSET))(this);
		}

		::System::Boolean get_IsLinkedAndConfigured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_ISLINKEDANDCONFIGURED_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::IOnRequestProcessing* get_OnRequestModule()
		{
			return ((::FluffyUnderware::Curvy::Generator::IOnRequestProcessing*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_ONREQUESTMODULE_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::IPathProvider* get_PathProvider()
		{
			return ((::FluffyUnderware::Curvy::Generator::IPathProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_PATHPROVIDER_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::IExternalInput* get_ExternalInput()
		{
			return ((::FluffyUnderware::Curvy::Generator::IExternalInput*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_EXTERNALINPUT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>* get_LinkedSlots()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_LINKEDSLOTS_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_COUNT_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsOnRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GET_ISONREQUEST_OFFSET))(this);
		}

		::System::Boolean HasLinkTo(::FluffyUnderware::Curvy::Generator::CGModuleSlot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_HASLINKTO_OFFSET))(this, other);
		}

		::System::Boolean CanLinkTo(::FluffyUnderware::Curvy::Generator::CGModuleSlot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_CANLINKTO_OFFSET))(this, other);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>* GetLinkedModules()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModule*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_GETLINKEDMODULES_OFFSET))(this);
		}

		::System::Void LinkTo(::FluffyUnderware::Curvy::Generator::CGModuleSlot* other)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_LINKTO_OFFSET))(this, other);
		}

		static ::System::Void LinkInputAndOutput(::FluffyUnderware::Curvy::Generator::CGModuleSlot* inputSlot, ::FluffyUnderware::Curvy::Generator::CGModuleSlot* outputSlot)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGModuleSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_LINKINPUTANDOUTPUT_OFFSET))(inputSlot, outputSlot);
		}

		::System::Void UnlinkFrom(::FluffyUnderware::Curvy::Generator::CGModuleSlot* other)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_UNLINKFROM_OFFSET))(this, other);
		}

		::System::Void UnlinkAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_UNLINKALL_OFFSET))(this);
		}

		::System::Void ReInitializeLinkedSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_REINITIALIZELINKEDSLOTS_OFFSET))(this);
		}

		::System::Void LoadLinkedSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_LOADLINKEDSLOTS_OFFSET))(this);
		}

		::System::Void SetInfoFromField(::System::Reflection::FieldInfo* fieldInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_SETINFOFROMFIELD_OFFSET))(this, fieldInfo);
		}

		static ::System::Boolean op_Implicit(::FluffyUnderware::Curvy::Generator::CGModuleSlot* a)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_OP_IMPLICIT_OFFSET))(a);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULESLOT_TOSTRING_OFFSET))(this);
		}
	};
}
