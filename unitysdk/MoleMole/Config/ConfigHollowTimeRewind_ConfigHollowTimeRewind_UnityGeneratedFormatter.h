#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole::Config { class ConfigHollowTimeRewind; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CONFIGHOLLOWTIMEREWIND_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12717820)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CONFIGHOLLOWTIMEREWIND_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12717830)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CONFIGHOLLOWTIMEREWIND_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12717A80)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CONFIGHOLLOWTIMEREWIND_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12717C80)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CONFIGHOLLOWTIMEREWIND_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12717C40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowTimeRewind_ConfigHollowTimeRewind_UnityGeneratedFormatter_TypeDefinitionIndex = 43469;

	class ConfigHollowTimeRewind_ConfigHollowTimeRewind_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowTimeRewind*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ColorModifyInfo>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowChessboard::ColorModifyInfo>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowTimeRewind_ConfigHollowTimeRewind_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CA60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData>>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData>>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowTimeRewind_ConfigHollowTimeRewind_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CA68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CONFIGHOLLOWTIMEREWIND_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CONFIGHOLLOWTIMEREWIND_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CONFIGHOLLOWTIMEREWIND_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowTimeRewind*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CONFIGHOLLOWTIMEREWIND_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowTimeRewind*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_CONFIGHOLLOWTIMEREWIND_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
