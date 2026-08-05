#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayableSegment; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_CLASS_3_16406B82B1CDF61D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1924D0C0)
#define MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_CLASS_3_16406B82B1CDF61D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1924D0D0)
#define MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_CLASS_3_16406B82B1CDF61D_WRITE_OFFSET UNITYSDK_OFFSET(0x1924D260)
#define MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_CLASS_3_16406B82B1CDF61D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1924D3C0)
#define MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_CLASS_3_16406B82B1CDF61D__CTOR_OFFSET UNITYSDK_OFFSET(0x1924D380)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayableSegment_Class_3_16406B82B1CDF61D_TypeDefinitionIndex = 59744;

	class GalPlayableSegment_Class_3_16406B82B1CDF61D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalPlayableSegment*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayableSegment_Class_3_16406B82B1CDF61D_TypeDefinitionIndex)->GetStaticField(0x4FD00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_CLASS_3_16406B82B1CDF61D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_CLASS_3_16406B82B1CDF61D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_CLASS_3_16406B82B1CDF61D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayableSegment*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayableSegment*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_CLASS_3_16406B82B1CDF61D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayableSegment*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableSegment*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYABLESEGMENT_CLASS_3_16406B82B1CDF61D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
