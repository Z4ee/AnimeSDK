#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_64668C03C204855E.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSEFEVERSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1B930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigActivityLiveHouseFeverScene_TypeDefinitionIndex = 55022;

	class ConfigActivityLiveHouseFeverScene : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* decoLightEffectList; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* audioMaterialList; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* lambEffectList; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* liveLightEffectList; // 0x70
		::Enum_3_64668C03C204855E feverLightBeam; // 0x78
		::System::String* feverLightBeamScreen; // 0x80
		::System::String* feverLightKey; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSEFEVERSCENE__CTOR_OFFSET))(this);
		}
	};
}
