#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dCalcType.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dParamType.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CRIWARE_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1BF2E8A0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1BF2E9A0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1BF2EB20)
#define CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFFILE_OFFSET UNITYSDK_OFFSET(0x1BF2E6A0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1BF2EC80)
#define CRIWARE_CRIATOMEX_CRIATOMEX_UNREGISTERACF_OFFSET UNITYSDK_OFFSET(0x1BF2E820)
#define CRIWARE_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1BF2EA50)
#define CRIWARE_CRIATOMEX_REGISTERACF_OFFSET UNITYSDK_OFFSET(0x1BF2E580)
#define CRIWARE_CRIATOMEX_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1BF2EBA0)
#define CRIWARE_CRIATOMEX_UNREGISTERACF_OFFSET UNITYSDK_OFFSET(0x1BF2E750)
#define CRIWARE_CRIATOMEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF2ED00)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_TypeDefinitionIndex = 32704;

	class CriAtomEx : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::CriWare::CriAtomEx_Randomize3dCalcType, ::Il2CppArray<::CriWare::CriAtomEx_Randomize3dParamType>*>** StaticGet_randomize3dParamTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::CriWare::CriAtomEx_Randomize3dCalcType, ::Il2CppArray<::CriWare::CriAtomEx_Randomize3dParamType>*>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomEx_TypeDefinitionIndex)->GetStaticField(0x25F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterAcf(::CriWare::CriFsBinder* binder, ::System::String* acfPath)
		{
			return ((::System::Void(*)(::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_REGISTERACF_OFFSET))(binder, acfPath);
		}

		static ::System::Void UnregisterAcf()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_UNREGISTERACF_OFFSET))();
		}

		static ::System::Void AttachDspBusSetting(::System::String* settingName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET))(settingName);
		}

		static ::System::Void DetachDspBusSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET))();
		}

		static ::System::Void SetRandomSeed(::System::UInt32 seed)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETRANDOMSEED_OFFSET))(seed);
		}

		static ::System::Boolean criAtomEx_RegisterAcfFile(::System::IntPtr binder, ::System::String* path, ::System::IntPtr work, ::System::Int32 workSize)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFFILE_OFFSET))(binder, path, work, workSize);
		}

		static ::System::Void criAtomEx_UnregisterAcf()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_UNREGISTERACF_OFFSET))();
		}

		static ::System::Void criAtomEx_AttachDspBusSetting(::System::String* settingName, ::System::IntPtr work, ::System::Int32 workSize)
		{
			return ((::System::Void(*)(::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET))(settingName, work, workSize);
		}

		static ::System::Void criAtomEx_DetachDspBusSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET))();
		}

		static ::System::Void criAtomEx_SetRandomSeed(::System::UInt32 seed)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETRANDOMSEED_OFFSET))(seed);
		}
	};
}
