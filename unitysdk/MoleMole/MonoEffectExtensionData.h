#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectExtensionEnum.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_GETBOOLDATA_OFFSET UNITYSDK_OFFSET(0x191A5640)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_GETCOLORDATA_OFFSET UNITYSDK_OFFSET(0x191A5800)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_GETFLOATDATA_OFFSET UNITYSDK_OFFSET(0x191A5550)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_GETINTDATA_OFFSET UNITYSDK_OFFSET(0x191A5460)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA_GETSTRINGDATA_OFFSET UNITYSDK_OFFSET(0x191A5720)
#define MOLEMOLE_MONOEFFECTEXTENSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x191A5930)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectExtensionData_TypeDefinitionIndex = 52474;

	class MonoEffectExtensionData : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Boolean>* _boolData; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Int32>* _intData; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::Single>* _floatData; // 0x68
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::System::String*>* _stringData; // 0x70
		::System::Collections::Generic::Dictionary_2<::MoleMole::MonoEffectExtensionEnum, ::UnityEngine::Color>* _colorData; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> GetIntData(::MoleMole::MonoEffectExtensionEnum key)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::MoleMole::MonoEffectExtensionEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_GETINTDATA_OFFSET))(this, key);
		}

		::System::Nullable_1<::System::Single> GetFloatData(::MoleMole::MonoEffectExtensionEnum key)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::MoleMole::MonoEffectExtensionEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_GETFLOATDATA_OFFSET))(this, key);
		}

		::System::Nullable_1<::System::Boolean> GetBoolData(::MoleMole::MonoEffectExtensionEnum key)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::MoleMole::MonoEffectExtensionEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_GETBOOLDATA_OFFSET))(this, key);
		}

		::System::String* GetStringData(::MoleMole::MonoEffectExtensionEnum key)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::MonoEffectExtensionEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_GETSTRINGDATA_OFFSET))(this, key);
		}

		::System::Nullable_1<::UnityEngine::Color> GetColorData(::MoleMole::MonoEffectExtensionEnum key)
		{
			return ((::System::Nullable_1<::UnityEngine::Color>(*)(::PVOID, ::MoleMole::MonoEffectExtensionEnum))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTEXTENSIONDATA_GETCOLORDATA_OFFSET))(this, key);
		}
	};
}
