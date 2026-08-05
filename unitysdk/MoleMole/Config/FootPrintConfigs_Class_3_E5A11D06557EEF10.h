#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class FootPrintConfig; }
namespace MoleMole::Config { class FootPrintConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_CLASS_3_E5A11D06557EEF10_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19ACE040)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_CLASS_3_E5A11D06557EEF10_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19ACE050)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_CLASS_3_E5A11D06557EEF10_WRITE_OFFSET UNITYSDK_OFFSET(0x19ACE1E0)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_CLASS_3_E5A11D06557EEF10__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ACE340)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_CLASS_3_E5A11D06557EEF10__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACE300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FootPrintConfigs_Class_3_E5A11D06557EEF10_TypeDefinitionIndex = 81283;

	class FootPrintConfigs_Class_3_E5A11D06557EEF10 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::FootPrintConfigs*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(FootPrintConfigs_Class_3_E5A11D06557EEF10_TypeDefinitionIndex)->GetStaticField(0x51860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_CLASS_3_E5A11D06557EEF10__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_CLASS_3_E5A11D06557EEF10__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_CLASS_3_E5A11D06557EEF10_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::FootPrintConfigs*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::FootPrintConfigs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_CLASS_3_E5A11D06557EEF10_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::FootPrintConfigs*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FootPrintConfigs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_CLASS_3_E5A11D06557EEF10_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
