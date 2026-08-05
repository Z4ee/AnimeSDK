#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/GalSplitScreenParam.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class UIGalgameConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_UIGALGAMECONFIG_CLASS_3_54A19970FA0E24D2_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19213050)
#define MOLEMOLE_CONFIG_UIGALGAMECONFIG_CLASS_3_54A19970FA0E24D2_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19213060)
#define MOLEMOLE_CONFIG_UIGALGAMECONFIG_CLASS_3_54A19970FA0E24D2_WRITE_OFFSET UNITYSDK_OFFSET(0x192132E0)
#define MOLEMOLE_CONFIG_UIGALGAMECONFIG_CLASS_3_54A19970FA0E24D2__CCTOR_OFFSET UNITYSDK_OFFSET(0x192134D0)
#define MOLEMOLE_CONFIG_UIGALGAMECONFIG_CLASS_3_54A19970FA0E24D2__CTOR_OFFSET UNITYSDK_OFFSET(0x19213490)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIGalgameConfig_Class_3_54A19970FA0E24D2_TypeDefinitionIndex = 72722;

	class UIGalgameConfig_Class_3_54A19970FA0E24D2 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::UIGalgameConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::GalSplitScreenParam>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::GalSplitScreenParam>**)Il2CppClass::FromTypeDefinitionIndex(UIGalgameConfig_Class_3_54A19970FA0E24D2_TypeDefinitionIndex)->GetStaticField(0x4FA30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIGALGAMECONFIG_CLASS_3_54A19970FA0E24D2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIGALGAMECONFIG_CLASS_3_54A19970FA0E24D2__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIGALGAMECONFIG_CLASS_3_54A19970FA0E24D2_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::UIGalgameConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::UIGalgameConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIGALGAMECONFIG_CLASS_3_54A19970FA0E24D2_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::UIGalgameConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::UIGalgameConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIGALGAMECONFIG_CLASS_3_54A19970FA0E24D2_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
