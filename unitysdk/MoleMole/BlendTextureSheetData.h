#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_183;
class Class_1_5A6771CD0CA2718D;
namespace MoleMole { class ITextureSheetConfig; }
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BLENDTEXTURESHEETDATA_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0x11C86670)
#define MOLEMOLE_BLENDTEXTURESHEETDATA_GET_HASONEPLAYSLOT_OFFSET UNITYSDK_OFFSET(0x11C864D0)
#define MOLEMOLE_BLENDTEXTURESHEETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11C866C0)

namespace MoleMole
{
	inline static constexpr unsigned int BlendTextureSheetData_TypeDefinitionIndex = 68242;

	class BlendTextureSheetData : public ::System::Object
	{
	public:
		::MoleMole::TextureSheetAnimCurveParam* FadeOut; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ITextureSheetConfig*>* Items; // 0x18
		::MoleMole::TextureSheetAnimCurveParam* TextureSheetFadeOut; // 0x20
		::MoleMole::TextureSheetAnimCurveParam* FadeIn; // 0x28
		::System::Boolean EnableFadeIn; // 0x30
		::System::Boolean EnableFadeOut; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLENDTEXTURESHEETDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasOnePlaySlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLENDTEXTURESHEETDATA_GET_HASONEPLAYSLOT_OFFSET))(this);
		}

		::Class_1_5A6771CD0CA2718D* CreatePlayer(::Class_0_16E4307DCC419505_183* textureSheetImpl)
		{
			return ((::Class_1_5A6771CD0CA2718D*(*)(::PVOID, ::Class_0_16E4307DCC419505_183*))((::PBYTE)hIl2Cpp + MOLEMOLE_BLENDTEXTURESHEETDATA_CREATEPLAYER_OFFSET))(this, textureSheetImpl);
		}
	};
}
