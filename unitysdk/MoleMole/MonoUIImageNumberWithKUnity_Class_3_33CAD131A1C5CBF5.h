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

#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_CLASS_3_33CAD131A1C5CBF5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18091F40)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_CLASS_3_33CAD131A1C5CBF5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18091F50)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_CLASS_3_33CAD131A1C5CBF5_WRITE_OFFSET UNITYSDK_OFFSET(0x180920F0)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_CLASS_3_33CAD131A1C5CBF5__CCTOR_OFFSET UNITYSDK_OFFSET(0x18092250)
#define MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_CLASS_3_33CAD131A1C5CBF5__CTOR_OFFSET UNITYSDK_OFFSET(0x18092210)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageNumberWithKUnity_Class_3_33CAD131A1C5CBF5_TypeDefinitionIndex = 42079;

	class MonoUIImageNumberWithKUnity_Class_3_33CAD131A1C5CBF5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoUIImageNumberWithKUnity*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUITimerCounter_RandomConfig>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUITimerCounter_RandomConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIImageNumberWithKUnity_Class_3_33CAD131A1C5CBF5_TypeDefinitionIndex)->GetStaticField(0x4C430);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUITimerCounter_RollConfig>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoUITimerCounter_RollConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIImageNumberWithKUnity_Class_3_33CAD131A1C5CBF5_TypeDefinitionIndex)->GetStaticField(0x4C438);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_CLASS_3_33CAD131A1C5CBF5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_CLASS_3_33CAD131A1C5CBF5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_CLASS_3_33CAD131A1C5CBF5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoUIImageNumberWithKUnity*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoUIImageNumberWithKUnity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_CLASS_3_33CAD131A1C5CBF5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoUIImageNumberWithKUnity*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoUIImageNumberWithKUnity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIIMAGENUMBERWITHKUNITY_CLASS_3_33CAD131A1C5CBF5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
