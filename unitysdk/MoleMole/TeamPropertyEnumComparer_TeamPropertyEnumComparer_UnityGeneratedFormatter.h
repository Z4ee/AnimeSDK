#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TeamPropertyEnumComparer.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_TEAMPROPERTYENUMCOMPARER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15E5C730)
#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_TEAMPROPERTYENUMCOMPARER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15E5C740)
#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_TEAMPROPERTYENUMCOMPARER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x15E5C7B0)
#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_TEAMPROPERTYENUMCOMPARER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5C800)

namespace MoleMole
{
	inline static constexpr unsigned int TeamPropertyEnumComparer_TeamPropertyEnumComparer_UnityGeneratedFormatter_TypeDefinitionIndex = 58612;

	class TeamPropertyEnumComparer_TeamPropertyEnumComparer_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::TeamPropertyEnumComparer>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_TEAMPROPERTYENUMCOMPARER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_TEAMPROPERTYENUMCOMPARER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::TeamPropertyEnumComparer& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamPropertyEnumComparer&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_TEAMPROPERTYENUMCOMPARER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::TeamPropertyEnumComparer& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TeamPropertyEnumComparer&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_TEAMPROPERTYENUMCOMPARER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
