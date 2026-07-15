#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETMAXPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1B7AD380)
#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMBINDS_OFFSET UNITYSDK_OFFSET(0x1B7AD1D0)
#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMOPENEDFILES_OFFSET UNITYSDK_OFFSET(0x1B7AD260)
#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDBINDERS_OFFSET UNITYSDK_OFFSET(0x1B7ACF70)
#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDGROUPLOADERS_OFFSET UNITYSDK_OFFSET(0x1B7AD410)
#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDINSTALLERS_OFFSET UNITYSDK_OFFSET(0x1B7AD140)
#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDLOADERS_OFFSET UNITYSDK_OFFSET(0x1B7AD000)
#define CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDSTDIOHANDLES_OFFSET UNITYSDK_OFFSET(0x1B7AD4A0)
#define CRIWARE_CRIFS_NATIVEMETHODS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AD530)

namespace CriWare
{
	inline static constexpr unsigned int CriFs_NativeMethods_TypeDefinitionIndex = 37940;

	class CriFs_NativeMethods : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 criFs_GetNumUsedBinders(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDBINDERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFs_GetNumUsedLoaders(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDLOADERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFs_GetNumUsedGroupLoaders(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDGROUPLOADERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFs_GetNumUsedStdioHandles(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDSTDIOHANDLES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFs_GetNumUsedInstallers(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMUSEDINSTALLERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFs_GetNumBinds(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMBINDS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFs_GetNumOpenedFiles(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETNUMOPENEDFILES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFs_GetMaxPathLength(::System::Int32& a1)
		{
			return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_NATIVEMETHODS_CRIFS_GETMAXPATHLENGTH_OFFSET))(a1);
		}
	};
}
