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

#define MOLEMOLE_MONOUITIMERCOUNTER_CLASS_3_FFCBD6759F8A79A8_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11903E50)
#define MOLEMOLE_MONOUITIMERCOUNTER_CLASS_3_FFCBD6759F8A79A8_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11903E60)
#define MOLEMOLE_MONOUITIMERCOUNTER_CLASS_3_FFCBD6759F8A79A8_WRITE_OFFSET UNITYSDK_OFFSET(0x11904170)
#define MOLEMOLE_MONOUITIMERCOUNTER_CLASS_3_FFCBD6759F8A79A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x11904390)
#define MOLEMOLE_MONOUITIMERCOUNTER_CLASS_3_FFCBD6759F8A79A8__CTOR_OFFSET UNITYSDK_OFFSET(0x11904350)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_Class_3_FFCBD6759F8A79A8_TypeDefinitionIndex = 79335;

	class MonoUITimerCounter_Class_3_FFCBD6759F8A79A8 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoUITimerCounter*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::UnityEngine::UI::Image*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::UnityEngine::UI::Image*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITimerCounter_Class_3_FFCBD6759F8A79A8_TypeDefinitionIndex)->GetStaticField(0x3CC80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RollConfig>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RollConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITimerCounter_Class_3_FFCBD6759F8A79A8_TypeDefinitionIndex)->GetStaticField(0x3CC88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RandomConfig>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::MonoUITimerCounter_TimePartType, ::MoleMole::MonoUITimerCounter_RandomConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITimerCounter_Class_3_FFCBD6759F8A79A8_TypeDefinitionIndex)->GetStaticField(0x3CC90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_CLASS_3_FFCBD6759F8A79A8__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_CLASS_3_FFCBD6759F8A79A8__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_CLASS_3_FFCBD6759F8A79A8_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUITimerCounter*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUITimerCounter*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_CLASS_3_FFCBD6759F8A79A8_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoUITimerCounter*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUITimerCounter*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITIMERCOUNTER_CLASS_3_FFCBD6759F8A79A8_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
