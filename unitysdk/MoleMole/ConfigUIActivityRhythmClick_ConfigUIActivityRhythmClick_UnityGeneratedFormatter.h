#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityRhythmClickCurveParamsStruct.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIActivityRhythmClick; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_CONFIGUIACTIVITYRHYTHMCLICK_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x189E4640)
#define MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_CONFIGUIACTIVITYRHYTHMCLICK_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x189E4650)
#define MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_CONFIGUIACTIVITYRHYTHMCLICK_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x189E4830)
#define MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_CONFIGUIACTIVITYRHYTHMCLICK_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x189E49D0)
#define MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_CONFIGUIACTIVITYRHYTHMCLICK_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x189E4990)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIActivityRhythmClick_ConfigUIActivityRhythmClick_UnityGeneratedFormatter_TypeDefinitionIndex = 69973;

	class ConfigUIActivityRhythmClick_ConfigUIActivityRhythmClick_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUIActivityRhythmClick*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigCameraNoise*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIActivityRhythmClick_ConfigUIActivityRhythmClick_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x403A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ActivityRhythmClickCurveParamsStruct>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ActivityRhythmClickCurveParamsStruct>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIActivityRhythmClick_ConfigUIActivityRhythmClick_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x403A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_CONFIGUIACTIVITYRHYTHMCLICK_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_CONFIGUIACTIVITYRHYTHMCLICK_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_CONFIGUIACTIVITYRHYTHMCLICK_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIActivityRhythmClick*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIActivityRhythmClick*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_CONFIGUIACTIVITYRHYTHMCLICK_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUIActivityRhythmClick*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIActivityRhythmClick*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIACTIVITYRHYTHMCLICK_CONFIGUIACTIVITYRHYTHMCLICK_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
