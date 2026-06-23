#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MONOEFFECTPLUGINSORTDECALSIMPLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1582FF90)
#define MOLEMOLE_MONOEFFECTPLUGINSORTDECALSIMPLE_START_OFFSET UNITYSDK_OFFSET(0x1582F8D0)
#define MOLEMOLE_MONOEFFECTPLUGINSORTDECALSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x15830220)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginSortDecalSimple_TypeDefinitionIndex = 45596;

	class MonoEffectPluginSortDecalSimple : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		// static const ::System::String* Field_6_1; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_6_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSORTDECALSIMPLE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSORTDECALSIMPLE_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSORTDECALSIMPLE_ONDESTROY_OFFSET))(this);
		}
	};
}
