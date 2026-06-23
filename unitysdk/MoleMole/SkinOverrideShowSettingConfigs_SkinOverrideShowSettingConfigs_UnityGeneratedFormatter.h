#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SkinOverrideShowSetting; }
namespace MoleMole { class SkinOverrideShowSettingConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SKINOVERRIDESHOWSETTINGCONFIGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18715390)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SKINOVERRIDESHOWSETTINGCONFIGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x187153A0)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SKINOVERRIDESHOWSETTINGCONFIGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x187154D0)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SKINOVERRIDESHOWSETTINGCONFIGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18715610)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SKINOVERRIDESHOWSETTINGCONFIGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x187155D0)

namespace MoleMole
{
	inline static constexpr unsigned int SkinOverrideShowSettingConfigs_SkinOverrideShowSettingConfigs_UnityGeneratedFormatter_TypeDefinitionIndex = 42271;

	class SkinOverrideShowSettingConfigs_SkinOverrideShowSettingConfigs_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkinOverrideShowSettingConfigs*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SkinOverrideShowSetting*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SkinOverrideShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkinOverrideShowSettingConfigs_SkinOverrideShowSettingConfigs_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44EE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SKINOVERRIDESHOWSETTINGCONFIGS_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SKINOVERRIDESHOWSETTINGCONFIGS_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SKINOVERRIDESHOWSETTINGCONFIGS_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkinOverrideShowSettingConfigs*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkinOverrideShowSettingConfigs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SKINOVERRIDESHOWSETTINGCONFIGS_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::SkinOverrideShowSettingConfigs*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkinOverrideShowSettingConfigs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SKINOVERRIDESHOWSETTINGCONFIGS_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
