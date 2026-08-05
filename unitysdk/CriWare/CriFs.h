#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIFS_GETMAXPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1F4D49B0)
#define CRIWARE_CRIFS_GETNUMUSEDINSTALLERS_OFFSET UNITYSDK_OFFSET(0x1F4D4910)
#define CRIWARE_CRIFS_GETNUMUSEDLOADERS_OFFSET UNITYSDK_OFFSET(0x1F4D4870)
#define CRIWARE_CRIFS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D4A40)

namespace CriWare
{
	inline static constexpr unsigned int CriFs_TypeDefinitionIndex = 34951;

	class CriFs : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS__CTOR_OFFSET))(this);
		}

		static ::System::Boolean GetNumUsedLoaders(::System::Int32& curNum, ::System::Int32& maxNum, ::System::Int32& limit)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_GETNUMUSEDLOADERS_OFFSET))(curNum, maxNum, limit);
		}

		static ::System::Boolean GetNumUsedInstallers(::System::Int32& curNum, ::System::Int32& maxNum, ::System::Int32& limit)
		{
			return ((::System::Boolean(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_GETNUMUSEDINSTALLERS_OFFSET))(curNum, maxNum, limit);
		}

		static ::System::Boolean GetMaxPathLength(::System::Int32& length)
		{
			return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFS_GETMAXPATHLENGTH_OFFSET))(length);
		}
	};
}
