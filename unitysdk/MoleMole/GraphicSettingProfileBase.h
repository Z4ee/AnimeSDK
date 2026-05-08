#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"
#include "unitysdk/System/Object.h"

class Class_1_480FC3B3774489BF;
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace System { class String; }

#define MOLEMOLE_GRAPHICSETTINGPROFILEBASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x10E1A030)
#define MOLEMOLE_GRAPHICSETTINGPROFILEBASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x10E1A0D0)
#define MOLEMOLE_GRAPHICSETTINGPROFILEBASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10E1A1A0)
#define MOLEMOLE_GRAPHICSETTINGPROFILEBASE_GETPOWERCOST_OFFSET UNITYSDK_OFFSET(0x10E20970)
#define MOLEMOLE_GRAPHICSETTINGPROFILEBASE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x10E20960)
#define MOLEMOLE_GRAPHICSETTINGPROFILEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E19FD0)

namespace MoleMole
{
	inline static constexpr unsigned int GraphicSettingProfileBase_TypeDefinitionIndex = 66804;

	class GraphicSettingProfileBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRAPHICSETTINGPROFILEBASE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRAPHICSETTINGPROFILEBASE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::Class_1_480FC3B3774489BF* GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRAPHICSETTINGPROFILEBASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GRAPHICSETTINGPROFILEBASE_CONTAINSKEY_OFFSET))(this, key);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GRAPHICSETTINGPROFILEBASE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Single GetPowerCost(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GRAPHICSETTINGPROFILEBASE_GETPOWERCOST_OFFSET))(this, key);
		}
	};
}
