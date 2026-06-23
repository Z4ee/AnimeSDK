#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"

class Class_2_1824EF69C8E376A3;
class Class_2_1A39E1B51756BF41;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class GradientColor; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_GETSHEETURL_OFFSET UNITYSDK_OFFSET(0x152F6D50)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x152F6C30)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_REFRESHLANGUAGE_OFFSET UNITYSDK_OFFSET(0x152F6CE0)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETAVATAR_OFFSET UNITYSDK_OFFSET(0x152F6E50)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETCOLORBYID_OFFSET UNITYSDK_OFFSET(0x152F6F70)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x152F73B0)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152F7300)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeEntranceController_TypeDefinitionIndex = 59421;

	class UIMindscapeEntranceController : public ::MoleMole::UIMonoController
	{
	public:
		static ::System::Int32* StaticGet__Hue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0x10B30);
		}
		static ::System::Int32* StaticGet__Saturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0x10B34);
		}
		static ::System::Int32* StaticGet__Brightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0x10B38);
		}
		static ::System::Int32* StaticGet__Gamma()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0x10B3C);
		}
		// static const ::System::String* numPath; // 0x0
		// static const ::System::String* sheetRawPath; // 0x0
		::UnityEngine::UI::Image* NumImage; // 0x80
		::UnityEngine::UI::RawImage* SheetRawImage; // 0x88
		::MoleMole::GradientColor* LightBg; // 0x90
		::Class_2_1A39E1B51756BF41* _numImage; // 0x98
		::Class_2_CA67A9CEB871FFD3* _sheetRawImage; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void RefreshLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_REFRESHLANGUAGE_OFFSET))(this);
		}

		::System::Void SetAvatar(::Class_2_1824EF69C8E376A3* avatarItem, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETAVATAR_OFFSET))(this, avatarItem, withAni);
		}

		::System::Void SetColorByID(::Class_2_1824EF69C8E376A3* avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETCOLORBYID_OFFSET))(this, avatarID);
		}

		::System::String* GetSheetUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_GETSHEETURL_OFFSET))(this);
		}
	};
}
