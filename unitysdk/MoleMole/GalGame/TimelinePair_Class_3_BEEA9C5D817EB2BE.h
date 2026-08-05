#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TimelinePair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_TIMELINEPAIR_CLASS_3_BEEA9C5D817EB2BE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B191D0)
#define MOLEMOLE_GALGAME_TIMELINEPAIR_CLASS_3_BEEA9C5D817EB2BE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B191E0)
#define MOLEMOLE_GALGAME_TIMELINEPAIR_CLASS_3_BEEA9C5D817EB2BE_WRITE_OFFSET UNITYSDK_OFFSET(0x19B192B0)
#define MOLEMOLE_GALGAME_TIMELINEPAIR_CLASS_3_BEEA9C5D817EB2BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B193A0)
#define MOLEMOLE_GALGAME_TIMELINEPAIR_CLASS_3_BEEA9C5D817EB2BE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B19360)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TimelinePair_Class_3_BEEA9C5D817EB2BE_TypeDefinitionIndex = 82667;

	class TimelinePair_Class_3_BEEA9C5D817EB2BE : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::TimelinePair*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TimelinePair_Class_3_BEEA9C5D817EB2BE_TypeDefinitionIndex)->GetStaticField(0x51970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TIMELINEPAIR_CLASS_3_BEEA9C5D817EB2BE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TIMELINEPAIR_CLASS_3_BEEA9C5D817EB2BE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TIMELINEPAIR_CLASS_3_BEEA9C5D817EB2BE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TimelinePair*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TimelinePair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TIMELINEPAIR_CLASS_3_BEEA9C5D817EB2BE_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::TimelinePair*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TimelinePair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TIMELINEPAIR_CLASS_3_BEEA9C5D817EB2BE_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
