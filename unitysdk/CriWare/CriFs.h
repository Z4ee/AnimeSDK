#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIFS_GETMAXPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x167107B0)
#define CRIWARE_CRIFS_GETNUMBINDS_OFFSET UNITYSDK_OFFSET(0x16707450)
#define CRIWARE_CRIFS_GETNUMOPENEDFILES_OFFSET UNITYSDK_OFFSET(0x16707500)
#define CRIWARE_CRIFS_GETNUMUSEDBINDERS_OFFSET UNITYSDK_OFFSET(0x16710380)
#define CRIWARE_CRIFS_GETNUMUSEDINSTALLERS_OFFSET UNITYSDK_OFFSET(0x16710550)
#define CRIWARE_CRIFS_GETNUMUSEDLOADERS_OFFSET UNITYSDK_OFFSET(0x167075B0)
#define CRIWARE_CRIFS__CTOR_OFFSET UNITYSDK_OFFSET(0x167108C0)

namespace CriWare
{
	inline static constexpr unsigned int CriFs_TypeDefinitionIndex = 40095;

	class CriFs : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS__CTOR_OFFSET))(this);
		}

		static ::System::Boolean GetNumUsedBinders(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_GETNUMUSEDBINDERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetNumUsedLoaders(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_GETNUMUSEDLOADERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetNumUsedInstallers(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_GETNUMUSEDINSTALLERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetNumBinds(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_GETNUMBINDS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetNumOpenedFiles(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_GETNUMOPENEDFILES_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetMaxPathLength(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_GETMAXPATHLENGTH_OFFSET))(a1);
		}
	};
}
