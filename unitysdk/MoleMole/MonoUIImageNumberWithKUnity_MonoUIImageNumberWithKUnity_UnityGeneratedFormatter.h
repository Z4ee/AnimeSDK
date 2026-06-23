#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_RandomConfig.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_RollConfig.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoUIImageNumberWithKUnity; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_MONOUIIMAGENUMBERWITHKUNITY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13F168C0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_MONOUIIMAGENUMBERWITHKUNITY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13F168D0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_MONOUIIMAGENUMBERWITHKUNITY_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13F16AB0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_MONOUIIMAGENUMBERWITHKUNITY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F16C50)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_MONOUIIMAGENUMBERWITHKUNITY_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13F16C10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageNumberWithKUnity_MonoUIImageNumberWithKUnity_UnityGeneratedFormatter_TypeDefinitionIndex = 41980;

	class MonoUIImageNumberWithKUnity_MonoUIImageNumberWithKUnity_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoUIImageNumberWithKUnity*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUITimerCounter_RandomConfig>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUITimerCounter_RandomConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIImageNumberWithKUnity_MonoUIImageNumberWithKUnity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D990);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUITimerCounter_RollConfig>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUITimerCounter_RollConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIImageNumberWithKUnity_MonoUIImageNumberWithKUnity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4D998);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_MONOUIIMAGENUMBERWITHKUNITY_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_MONOUIIMAGENUMBERWITHKUNITY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_MONOUIIMAGENUMBERWITHKUNITY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUIImageNumberWithKUnity*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUIImageNumberWithKUnity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_MONOUIIMAGENUMBERWITHKUNITY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MonoUIImageNumberWithKUnity*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUIImageNumberWithKUnity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_MONOUIIMAGENUMBERWITHKUNITY_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
