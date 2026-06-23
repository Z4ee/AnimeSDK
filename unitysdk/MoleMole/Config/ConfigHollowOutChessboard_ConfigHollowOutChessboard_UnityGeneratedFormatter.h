#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace MoleMole::Config { class ConfigHollowOutChessboard; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CONFIGHOLLOWOUTCHESSBOARD_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B3CB00)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CONFIGHOLLOWOUTCHESSBOARD_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B3CB10)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CONFIGHOLLOWOUTCHESSBOARD_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12B3CCF0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CONFIGHOLLOWOUTCHESSBOARD_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B3CE90)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CONFIGHOLLOWOUTCHESSBOARD_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3CE50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowOutChessboard_ConfigHollowOutChessboard_UnityGeneratedFormatter_TypeDefinitionIndex = 59085;

	class ConfigHollowOutChessboard_ConfigHollowOutChessboard_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowOutChessboard*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_Flash*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowChessboard_Flash*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowOutChessboard_ConfigHollowOutChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BCF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CONFIGHOLLOWOUTCHESSBOARD_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CONFIGHOLLOWOUTCHESSBOARD_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CONFIGHOLLOWOUTCHESSBOARD_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowOutChessboard*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowOutChessboard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CONFIGHOLLOWOUTCHESSBOARD_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowOutChessboard*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowOutChessboard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWOUTCHESSBOARD_CONFIGHOLLOWOUTCHESSBOARD_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
