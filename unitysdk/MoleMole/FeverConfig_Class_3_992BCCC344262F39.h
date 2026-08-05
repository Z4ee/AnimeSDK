#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/MoleMole/Config/FeverSoundType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class FeverConfig; }
namespace MoleMole::Config { class ConfigInspireZoneOperation; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FEVERCONFIG_CLASS_3_992BCCC344262F39_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x118AA710)
#define MOLEMOLE_FEVERCONFIG_CLASS_3_992BCCC344262F39_READMEMBER_OFFSET UNITYSDK_OFFSET(0x118AA720)
#define MOLEMOLE_FEVERCONFIG_CLASS_3_992BCCC344262F39_WRITE_OFFSET UNITYSDK_OFFSET(0x118AA8B0)
#define MOLEMOLE_FEVERCONFIG_CLASS_3_992BCCC344262F39__CCTOR_OFFSET UNITYSDK_OFFSET(0x118AAA10)
#define MOLEMOLE_FEVERCONFIG_CLASS_3_992BCCC344262F39__CTOR_OFFSET UNITYSDK_OFFSET(0x118AA9D0)

namespace MoleMole
{
	inline static constexpr unsigned int FeverConfig_Class_3_992BCCC344262F39_TypeDefinitionIndex = 90245;

	class FeverConfig_Class_3_992BCCC344262F39 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::FeverConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(FeverConfig_Class_3_992BCCC344262F39_TypeDefinitionIndex)->GetStaticField(0x3CAD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::InspireZoneOperationType, ::MoleMole::Config::ConfigInspireZoneOperation*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::InspireZoneOperationType, ::MoleMole::Config::ConfigInspireZoneOperation*>*>**)Il2CppClass::FromTypeDefinitionIndex(FeverConfig_Class_3_992BCCC344262F39_TypeDefinitionIndex)->GetStaticField(0x3CAD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_CLASS_3_992BCCC344262F39__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_CLASS_3_992BCCC344262F39__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_CLASS_3_992BCCC344262F39_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::FeverConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FeverConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_CLASS_3_992BCCC344262F39_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::FeverConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FeverConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_CLASS_3_992BCCC344262F39_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
