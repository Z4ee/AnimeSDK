#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityResSettingTag.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class ActivityColorImageSetting; }
namespace MoleMole { class MonoActivityResSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MONOACTIVITYRESSETTING_MONOACTIVITYRESSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1513A8D0)
#define MOLEMOLE_MONOACTIVITYRESSETTING_MONOACTIVITYRESSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1513A8E0)
#define MOLEMOLE_MONOACTIVITYRESSETTING_MONOACTIVITYRESSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1513AB80)
#define MOLEMOLE_MONOACTIVITYRESSETTING_MONOACTIVITYRESSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1513AD70)
#define MOLEMOLE_MONOACTIVITYRESSETTING_MONOACTIVITYRESSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1513AD30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityResSetting_MonoActivityResSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 49888;

	class MonoActivityResSetting_MonoActivityResSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoActivityResSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::System::Collections::Generic::List_1<::MoleMole::ActivityColorImageSetting*>*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::System::Collections::Generic::List_1<::MoleMole::ActivityColorImageSetting*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoActivityResSetting_MonoActivityResSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41160);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Color>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoActivityResSetting_MonoActivityResSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41168);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Material*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoActivityResSetting_MonoActivityResSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41170);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_MONOACTIVITYRESSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_MONOACTIVITYRESSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_MONOACTIVITYRESSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoActivityResSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoActivityResSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_MONOACTIVITYRESSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MonoActivityResSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoActivityResSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_MONOACTIVITYRESSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
