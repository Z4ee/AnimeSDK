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

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CLASS_3_6A23CB21C38AB594_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF13B2A0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CLASS_3_6A23CB21C38AB594_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF13B2B0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CLASS_3_6A23CB21C38AB594_WRITE_OFFSET UNITYSDK_OFFSET(0xF13B440)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CLASS_3_6A23CB21C38AB594__CCTOR_OFFSET UNITYSDK_OFFSET(0xF13B5A0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CLASS_3_6A23CB21C38AB594__CTOR_OFFSET UNITYSDK_OFFSET(0xF13B560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeChessboard_Class_3_6A23CB21C38AB594_TypeDefinitionIndex = 44162;

	class ConfigHollowChangeChessboard_Class_3_6A23CB21C38AB594 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowChangeChessboard*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::DirectType, ::System::String*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::ProtoScript::DirectType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChangeChessboard_Class_3_6A23CB21C38AB594_TypeDefinitionIndex)->GetStaticField(0x517B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CLASS_3_6A23CB21C38AB594__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CLASS_3_6A23CB21C38AB594__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CLASS_3_6A23CB21C38AB594_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChangeChessboard*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChangeChessboard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CLASS_3_6A23CB21C38AB594_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChangeChessboard*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChangeChessboard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CLASS_3_6A23CB21C38AB594_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
