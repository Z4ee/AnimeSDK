#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ActivitBGAnimationSequence; }
namespace MoleMole { class ActivitBGSpineSequence; }
namespace MoleMole { class MonoActivityBGSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOACTIVITYBGSETTING_CLASS_3_18D476D7E082A539_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x129AF9C0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_CLASS_3_18D476D7E082A539_READMEMBER_OFFSET UNITYSDK_OFFSET(0x129AF9D0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_CLASS_3_18D476D7E082A539_WRITE_OFFSET UNITYSDK_OFFSET(0x129AFB60)
#define MOLEMOLE_MONOACTIVITYBGSETTING_CLASS_3_18D476D7E082A539__CCTOR_OFFSET UNITYSDK_OFFSET(0x129AFCC0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_CLASS_3_18D476D7E082A539__CTOR_OFFSET UNITYSDK_OFFSET(0x129AFC80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityBGSetting_Class_3_18D476D7E082A539_TypeDefinitionIndex = 62945;

	class MonoActivityBGSetting_Class_3_18D476D7E082A539 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoActivityBGSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGSpineSequence*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGSpineSequence*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoActivityBGSetting_Class_3_18D476D7E082A539_TypeDefinitionIndex)->GetStaticField(0x50F20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGAnimationSequence*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGAnimationSequence*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoActivityBGSetting_Class_3_18D476D7E082A539_TypeDefinitionIndex)->GetStaticField(0x50F28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_CLASS_3_18D476D7E082A539__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_CLASS_3_18D476D7E082A539__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_CLASS_3_18D476D7E082A539_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoActivityBGSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoActivityBGSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_CLASS_3_18D476D7E082A539_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::MonoActivityBGSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoActivityBGSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_CLASS_3_18D476D7E082A539_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
