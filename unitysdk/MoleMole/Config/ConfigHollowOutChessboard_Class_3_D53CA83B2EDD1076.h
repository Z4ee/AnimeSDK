#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace MoleMole::Config { class ConfigHollowOutChessboard; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CLASS_3_D53CA83B2EDD1076_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4B35F0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CLASS_3_D53CA83B2EDD1076_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B3600)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CLASS_3_D53CA83B2EDD1076_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4B37A0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CLASS_3_D53CA83B2EDD1076__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B3900)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CLASS_3_D53CA83B2EDD1076__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B38C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowOutChessboard_Class_3_D53CA83B2EDD1076_TypeDefinitionIndex = 46295;

	class ConfigHollowOutChessboard_Class_3_D53CA83B2EDD1076 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowOutChessboard*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_Flash*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_Flash*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowOutChessboard_Class_3_D53CA83B2EDD1076_TypeDefinitionIndex)->GetStaticField(0x3C8B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CLASS_3_D53CA83B2EDD1076__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CLASS_3_D53CA83B2EDD1076__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CLASS_3_D53CA83B2EDD1076_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowOutChessboard*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowOutChessboard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CLASS_3_D53CA83B2EDD1076_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowOutChessboard*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowOutChessboard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CLASS_3_D53CA83B2EDD1076_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
