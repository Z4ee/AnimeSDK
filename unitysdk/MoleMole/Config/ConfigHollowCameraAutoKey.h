#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F674042AB3067BFB.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/HollowCameraAutoKey.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAAUTOKEY_GETHOLLOWCAMERAKEY_OFFSET UNITYSDK_OFFSET(0xE96B730)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAAUTOKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xE96B930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraAutoKey_TypeDefinitionIndex = 45934;

	class ConfigHollowCameraAutoKey : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single AutoKeyMaxDuration; // 0x58
		::System::String* BaselineStretchKey; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* HorizontalDis; // 0x68
		::System::Collections::Generic::List_1<::System::Single>* VerticalDis; // 0x70
		::Il2CppArray<::MoleMole::Config::HollowCameraAutoKey>* AutoKeyMatrix; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAAUTOKEY__CTOR_OFFSET))(this);
		}

		::System::String* GetHollowCameraKey(::Enum_3_F674042AB3067BFB type, ::System::Single horizontalOffset, ::System::Single verticalOffset)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_F674042AB3067BFB, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAAUTOKEY_GETHOLLOWCAMERAKEY_OFFSET))(this, type, horizontalOffset, verticalOffset);
		}
	};
}
