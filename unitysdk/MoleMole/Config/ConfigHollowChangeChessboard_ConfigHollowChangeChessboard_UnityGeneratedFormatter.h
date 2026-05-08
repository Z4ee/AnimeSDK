#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/DirectType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowChangeChessboard; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CONFIGHOLLOWCHANGECHESSBOARD_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1230BCD0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CONFIGHOLLOWCHANGECHESSBOARD_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1230BCE0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CONFIGHOLLOWCHANGECHESSBOARD_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1230BEC0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CONFIGHOLLOWCHANGECHESSBOARD_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1230C060)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CONFIGHOLLOWCHANGECHESSBOARD_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1230C020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeChessboard_ConfigHollowChangeChessboard_UnityGeneratedFormatter_TypeDefinitionIndex = 68515;

	class ConfigHollowChangeChessboard_ConfigHollowChangeChessboard_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChangeChessboard*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::DirectType, ::System::String*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::DirectType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChangeChessboard_ConfigHollowChangeChessboard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3C3E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CONFIGHOLLOWCHANGECHESSBOARD_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CONFIGHOLLOWCHANGECHESSBOARD_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CONFIGHOLLOWCHANGECHESSBOARD_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChangeChessboard*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChangeChessboard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CONFIGHOLLOWCHANGECHESSBOARD_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChangeChessboard*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChangeChessboard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CONFIGHOLLOWCHANGECHESSBOARD_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
