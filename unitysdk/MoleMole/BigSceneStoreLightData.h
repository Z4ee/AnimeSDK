#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUILightParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENESTORELIGHTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x167EBAA0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneStoreLightData_TypeDefinitionIndex = 50376;

	class BigSceneStoreLightData : public ::System::Object
	{
	public:
		::System::Boolean isUse; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ConfigUILightParam*>* List; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENESTORELIGHTDATA__CTOR_OFFSET))(this);
		}
	};
}
