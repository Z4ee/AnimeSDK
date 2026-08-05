#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemUpdatePhase.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsSystem; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class Assembly; }

#define NAP_NAPECS_ECSSYSTEMMETA_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1C8487E0)
#define NAP_NAPECS_ECSSYSTEMMETA_INITSYSTEMMETA_OFFSET UNITYSDK_OFFSET(0x1C851190)
#define NAP_NAPECS_ECSSYSTEMMETA_SETFLAG_OFFSET UNITYSDK_OFFSET(0x1C84FCC0)
#define NAP_NAPECS_ECSSYSTEMMETA_SETSYSTEMMETAFLAG_OFFSET UNITYSDK_OFFSET(0x1C84FD20)
#define NAP_NAPECS_ECSSYSTEMMETA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C851880)
#define NAP_NAPECS_ECSSYSTEMMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C851870)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemMeta_TypeDefinitionIndex = 37930;

	class EcsSystemMeta : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Nap::NapECS::EcsSystemMeta*>** StaticGet_MetaIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Nap::NapECS::EcsSystemMeta*>**)Il2CppClass::FromTypeDefinitionIndex(EcsSystemMeta_TypeDefinitionIndex)->GetStaticField(0x2A3D0);
		}
		::System::Type* SystemType; // 0x10
		::System::UInt32 Phase; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMMETA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMMETA__CCTOR_OFFSET))();
		}

		::System::Boolean HasFlag(::Nap::NapECS::EcsSystemUpdatePhase phaseFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsSystemUpdatePhase))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMMETA_HASFLAG_OFFSET))(this, phaseFlag);
		}

		::System::Void SetFlag(::Nap::NapECS::EcsSystemUpdatePhase phaseFlag)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsSystemUpdatePhase))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMMETA_SETFLAG_OFFSET))(this, phaseFlag);
		}

		static ::System::Void SetSystemMetaFlag(::Nap::NapECS::EcsSystemMeta* meta, ::Nap::NapECS::EcsSystem* system, ::Nap::NapECS::EcsSystem* dummyInstance)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsSystemMeta*, ::Nap::NapECS::EcsSystem*, ::Nap::NapECS::EcsSystem*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMMETA_SETSYSTEMMETAFLAG_OFFSET))(meta, system, dummyInstance);
		}

		static ::System::Void InitSystemMeta(::System::Reflection::Assembly* assembly)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEMMETA_INITSYSTEMMETA_OFFSET))(assembly);
		}
	};
}
