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

#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_CLASS_3_1B3A2C40079C8BAE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11D70520)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_CLASS_3_1B3A2C40079C8BAE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11D70530)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_CLASS_3_1B3A2C40079C8BAE_WRITE_OFFSET UNITYSDK_OFFSET(0x11D70600)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_CLASS_3_1B3A2C40079C8BAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D706F0)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_CLASS_3_1B3A2C40079C8BAE__CTOR_OFFSET UNITYSDK_OFFSET(0x11D706B0)

namespace MoleMole
{
	inline static constexpr unsigned int SkinOverrideShowSettingConfigs_Class_3_1B3A2C40079C8BAE_TypeDefinitionIndex = 90342;

	class SkinOverrideShowSettingConfigs_Class_3_1B3A2C40079C8BAE : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::SkinOverrideShowSettingConfigs*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SkinOverrideShowSetting*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SkinOverrideShowSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(SkinOverrideShowSettingConfigs_Class_3_1B3A2C40079C8BAE_TypeDefinitionIndex)->GetStaticField(0x4FE40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_CLASS_3_1B3A2C40079C8BAE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_CLASS_3_1B3A2C40079C8BAE__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_CLASS_3_1B3A2C40079C8BAE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SkinOverrideShowSettingConfigs*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SkinOverrideShowSettingConfigs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_CLASS_3_1B3A2C40079C8BAE_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::SkinOverrideShowSettingConfigs*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkinOverrideShowSettingConfigs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_CLASS_3_1B3A2C40079C8BAE_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
