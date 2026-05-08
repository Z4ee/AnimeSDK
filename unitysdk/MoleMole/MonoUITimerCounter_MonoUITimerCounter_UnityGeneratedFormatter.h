#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_RandomConfig.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_RollConfig.h"
#include "unitysdk/MoleMole/MonoUITimerCounter_TimePartType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoUITimerCounter; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOUITIMERCOUNTER_MONOUITIMERCOUNTER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10E48F60)
#define MOLEMOLE_MONOUITIMERCOUNTER_MONOUITIMERCOUNTER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10E48F70)
#define MOLEMOLE_MONOUITIMERCOUNTER_MONOUITIMERCOUNTER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10E492D0)
#define MOLEMOLE_MONOUITIMERCOUNTER_MONOUITIMERCOUNTER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E49520)
#define MOLEMOLE_MONOUITIMERCOUNTER_MONOUITIMERCOUNTER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10E494E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_MonoUITimerCounter_UnityGeneratedFormatter_TypeDefinitionIndex = 48182;

	class MonoUITimerCounter_MonoUITimerCounter_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoUITimerCounter*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RollConfig>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RollConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITimerCounter_MonoUITimerCounter_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37A30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RandomConfig>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RandomConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITimerCounter_MonoUITimerCounter_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37A38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::UnityEngine::UI::Image*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::UnityEngine::UI::Image*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITimerCounter_MonoUITimerCounter_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37A40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_MONOUITIMERCOUNTER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_MONOUITIMERCOUNTER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_MONOUITIMERCOUNTER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUITimerCounter*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUITimerCounter*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_MONOUITIMERCOUNTER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MonoUITimerCounter*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUITimerCounter*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_MONOUITIMERCOUNTER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
