#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dCalcType.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dParamType.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CRIWARE_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1F4D02C0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1F4D03C0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1F4D0540)
#define CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFFILE_OFFSET UNITYSDK_OFFSET(0x1F4D00B0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1F4D06A0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_UNREGISTERACF_OFFSET UNITYSDK_OFFSET(0x1F4D0240)
#define CRIWARE_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1F4D0470)
#define CRIWARE_CRIATOMEX_REGISTERACF_OFFSET UNITYSDK_OFFSET(0x1F4CFF90)
#define CRIWARE_CRIATOMEX_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1F4D05C0)
#define CRIWARE_CRIATOMEX_UNREGISTERACF_OFFSET UNITYSDK_OFFSET(0x1F4D0170)
#define CRIWARE_CRIATOMEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4D0720)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_TypeDefinitionIndex = 34903;

	class CriAtomEx : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::CriWare::CriAtomEx_Randomize3dCalcType, ::Il2CppArray<::CriWare::CriAtomEx_Randomize3dParamType>*>** StaticGet_randomize3dParamTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::CriWare::CriAtomEx_Randomize3dCalcType, ::Il2CppArray<::CriWare::CriAtomEx_Randomize3dParamType>*>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomEx_TypeDefinitionIndex)->GetStaticField(0x29200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX__CCTOR_OFFSET))();
		}

		static ::System::Boolean RegisterAcf(::CriWare::CriFsBinder* binder, ::System::String* acfPath)
		{
			return ((::System::Boolean(*)(::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_REGISTERACF_OFFSET))(binder, acfPath);
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
