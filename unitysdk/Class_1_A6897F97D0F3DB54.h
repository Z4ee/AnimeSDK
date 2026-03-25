#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ScenenLightManager { class BlockEnvExportDataHeader; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A6897F97D0F3DB54_METHOD_1_DCA5AE7D7A1D296F_OFFSET UNITYSDK_OFFSET(0x1169CD00)
#define CLASS_1_A6897F97D0F3DB54__CTOR_OFFSET UNITYSDK_OFFSET(0x1169CF20)

inline static constexpr unsigned int Class_1_A6897F97D0F3DB54_TypeDefinitionIndex = 39856;

class Class_1_A6897F97D0F3DB54 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6897F97D0F3DB54__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_DCA5AE7D7A1D296F(::ScenenLightManager::BlockEnvExportDataHeader* a1, ::ScenenLightManager::BlockEnvExportDataHeader* a2)
	{
		return ((::System::Boolean(*)(::ScenenLightManager::BlockEnvExportDataHeader*, ::ScenenLightManager::BlockEnvExportDataHeader*))((::PBYTE)hIl2Cpp + CLASS_1_A6897F97D0F3DB54_METHOD_1_DCA5AE7D7A1D296F_OFFSET))(a1, a2);
	}
};
