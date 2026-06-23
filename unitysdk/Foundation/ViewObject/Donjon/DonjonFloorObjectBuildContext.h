#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8726C3723B428F0;
class Class_1_D2BA87226C48A494;
class Class_1_F8A4F21F742B6836;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace Foundation::ViewObject::Donjon { class IDonjonFloorComponent; }
namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11720040)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_1_OFFSET UNITYSDK_OFFSET(0x117201A0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_2_OFFSET UNITYSDK_OFFSET(0x11720200)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_OFFSET UNITYSDK_OFFSET(0x11720140)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATEDONJONFLOOROBJECT_OFFSET UNITYSDK_OFFSET(0x11720260)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_TRACKDECORTYPE_OFFSET UNITYSDK_OFFSET(0x117200F0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11720530)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorObjectBuildContext_TypeDefinitionIndex = 74575;

	class DonjonFloorObjectBuildContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::Foundation::ViewObject::Donjon::IDonjonFloorComponent*>* ObjectComponents; // 0x10
		::System::Int32 FloorID; // 0x18
		::System::Int32 DungeonID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void TrackDecorType(::MoleMole::Config::ConfigDecorBase* decor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_TRACKDECORTYPE_OFFSET))(this, decor);
		}

		::System::Void GenerateComponentByConfig(::Class_1_B8726C3723B428F0* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8726C3723B428F0*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_OFFSET))(this, config);
		}

		::System::Void GenerateComponentByConfig_1(::Class_1_D2BA87226C48A494* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2BA87226C48A494*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_1_OFFSET))(this, config);
		}

		::System::Void GenerateComponentByConfig_2(::Class_1_F8A4F21F742B6836* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F8A4F21F742B6836*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_2_OFFSET))(this, config);
		}

		::Foundation::ViewObject::Donjon::DonjonFloorObject* GenerateDonjonFloorObject(::System::String* name)
		{
			return ((::Foundation::ViewObject::Donjon::DonjonFloorObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATEDONJONFLOOROBJECT_OFFSET))(this, name);
		}
	};
}
