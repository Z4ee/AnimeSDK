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

#define MOLEMOLE_MONOACTIVITYRESSETTING_CLASS_3_DEAE2EF1958E2FC4_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19266F20)
#define MOLEMOLE_MONOACTIVITYRESSETTING_CLASS_3_DEAE2EF1958E2FC4_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19266F30)
#define MOLEMOLE_MONOACTIVITYRESSETTING_CLASS_3_DEAE2EF1958E2FC4_WRITE_OFFSET UNITYSDK_OFFSET(0x19267180)
#define MOLEMOLE_MONOACTIVITYRESSETTING_CLASS_3_DEAE2EF1958E2FC4__CCTOR_OFFSET UNITYSDK_OFFSET(0x19267340)
#define MOLEMOLE_MONOACTIVITYRESSETTING_CLASS_3_DEAE2EF1958E2FC4__CTOR_OFFSET UNITYSDK_OFFSET(0x19267300)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityResSetting_Class_3_DEAE2EF1958E2FC4_TypeDefinitionIndex = 88671;

	class MonoActivityResSetting_Class_3_DEAE2EF1958E2FC4 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoActivityResSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Material*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoActivityResSetting_Class_3_DEAE2EF1958E2FC4_TypeDefinitionIndex)->GetStaticField(0x4FDF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::System::Collections::Generic::List_1<::MoleMole::ActivityColorImageSetting*>*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::System::Collections::Generic::List_1<::MoleMole::ActivityColorImageSetting*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoActivityResSetting_Class_3_DEAE2EF1958E2FC4_TypeDefinitionIndex)->GetStaticField(0x4FDF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Color>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ActivityResSettingTag, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoActivityResSetting_Class_3_DEAE2EF1958E2FC4_TypeDefinitionIndex)->GetStaticField(0x4FE00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_CLASS_3_DEAE2EF1958E2FC4__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_CLASS_3_DEAE2EF1958E2FC4__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_CLASS_3_DEAE2EF1958E2FC4_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoActivityResSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoActivityResSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_CLASS_3_DEAE2EF1958E2FC4_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoActivityResSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoActivityResSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYRESSETTING_CLASS_3_DEAE2EF1958E2FC4_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
