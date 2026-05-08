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

#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_GETSHEETURL_OFFSET UNITYSDK_OFFSET(0x13FCDA10)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x13FCD8F0)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_REFRESHLANGUAGE_OFFSET UNITYSDK_OFFSET(0x13FCD9A0)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETAVATAR_OFFSET UNITYSDK_OFFSET(0x13FCDB10)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER_SETCOLORBYID_OFFSET UNITYSDK_OFFSET(0x13FCDC30)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13FCE070)
#define MOLEMOLE_UIMINDSCAPEENTRANCECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13FCDFC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeEntranceController_TypeDefinitionIndex = 76922;

	class UIMindscapeEntranceController : public ::MoleMole::UIMonoController
	{
	public:
		static ::System::Int32* StaticGet__Hue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0xFF20);
		}
		static ::System::Int32* StaticGet__Gamma()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0xFF24);
		}
		static ::System::Int32* StaticGet__Brightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0xFF28);
		}
		static ::System::Int32* StaticGet__Saturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeEntranceController_TypeDefinitionIndex)->GetStaticField(0xFF2C);
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
