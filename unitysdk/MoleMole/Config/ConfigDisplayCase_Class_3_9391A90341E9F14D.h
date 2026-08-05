#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayBoundsCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayCaseCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayManualCfg.h"
#include "unitysdk/MoleMole/DisplayCase/EDisplayItemSubType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigDisplayCase; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CLASS_3_9391A90341E9F14D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x116FE6F0)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CLASS_3_9391A90341E9F14D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x116FE700)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CLASS_3_9391A90341E9F14D_WRITE_OFFSET UNITYSDK_OFFSET(0x116FEAC0)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CLASS_3_9391A90341E9F14D__CCTOR_OFFSET UNITYSDK_OFFSET(0x116FED40)
#define MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CLASS_3_9391A90341E9F14D__CTOR_OFFSET UNITYSDK_OFFSET(0x116FED00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDisplayCase_Class_3_9391A90341E9F14D_TypeDefinitionIndex = 58795;

	class ConfigDisplayCase_Class_3_9391A90341E9F14D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigDisplayCase*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDisplayCase_Class_3_9391A90341E9F14D_TypeDefinitionIndex)->GetStaticField(0x4F8B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDisplayCase_Class_3_9391A90341E9F14D_TypeDefinitionIndex)->GetStaticField(0x4F8B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayBoundsCfgData>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::DisplayCase::DisplayBoundsCfgData>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDisplayCase_Class_3_9391A90341E9F14D_TypeDefinitionIndex)->GetStaticField(0x4F8C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::DisplayCase::EDisplayItemSubType, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::DisplayCase::EDisplayItemSubType, ::MoleMole::Config::DisplayCase::DisplayManualCfg>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDisplayCase_Class_3_9391A90341E9F14D_TypeDefinitionIndex)->GetStaticField(0x4F8C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigDisplayCase_Class_3_9391A90341E9F14D_TypeDefinitionIndex)->GetStaticField(0x4F8D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CLASS_3_9391A90341E9F14D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CLASS_3_9391A90341E9F14D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CLASS_3_9391A90341E9F14D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigDisplayCase*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigDisplayCase*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CLASS_3_9391A90341E9F14D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigDisplayCase*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDisplayCase*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDISPLAYCASE_CLASS_3_9391A90341E9F14D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
