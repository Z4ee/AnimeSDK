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

#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_FOOTPRINTCONFIGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12723690)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_FOOTPRINTCONFIGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x127236A0)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_FOOTPRINTCONFIGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12723880)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_FOOTPRINTCONFIGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12723A20)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_FOOTPRINTCONFIGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x127239E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FootPrintConfigs_FootPrintConfigs_UnityGeneratedFormatter_TypeDefinitionIndex = 56312;

	class FootPrintConfigs_FootPrintConfigs_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::FootPrintConfigs*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(FootPrintConfigs_FootPrintConfigs_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CB60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_FOOTPRINTCONFIGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_FOOTPRINTCONFIGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_FOOTPRINTCONFIGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::FootPrintConfigs*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::FootPrintConfigs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_FOOTPRINTCONFIGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::FootPrintConfigs*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FootPrintConfigs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_FOOTPRINTCONFIGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
