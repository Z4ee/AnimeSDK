#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TeamPropertyEnumComparer.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_CLASS_3_EBBB1B0E87FFC976_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136F2B00)
#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_CLASS_3_EBBB1B0E87FFC976_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136F2B10)
#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_CLASS_3_EBBB1B0E87FFC976_WRITE_OFFSET UNITYSDK_OFFSET(0x136F2B20)
#define MOLEMOLE_TEAMPROPERTYENUMCOMPARER_CLASS_3_EBBB1B0E87FFC976__CTOR_OFFSET UNITYSDK_OFFSET(0x136F2B30)

namespace MoleMole
{
	inline static constexpr unsigned int TeamPropertyEnumComparer_Class_3_EBBB1B0E87FFC976_TypeDefinitionIndex = 74519;

	class TeamPropertyEnumComparer_Class_3_EBBB1B0E87FFC976 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::TeamPropertyEnumComparer>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_CLASS_3_EBBB1B0E87FFC976__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_CLASS_3_EBBB1B0E87FFC976_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::TeamPropertyEnumComparer& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamPropertyEnumComparer&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_CLASS_3_EBBB1B0E87FFC976_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::TeamPropertyEnumComparer& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TeamPropertyEnumComparer&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEAMPROPERTYENUMCOMPARER_CLASS_3_EBBB1B0E87FFC976_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
