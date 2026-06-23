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

#define MOLEMOLE_MONOACTIVITYBGSETTING_MONOACTIVITYBGSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x182FE520)
#define MOLEMOLE_MONOACTIVITYBGSETTING_MONOACTIVITYBGSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x182FE530)
#define MOLEMOLE_MONOACTIVITYBGSETTING_MONOACTIVITYBGSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x182FE710)
#define MOLEMOLE_MONOACTIVITYBGSETTING_MONOACTIVITYBGSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x182FE8B0)
#define MOLEMOLE_MONOACTIVITYBGSETTING_MONOACTIVITYBGSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x182FE870)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityBGSetting_MonoActivityBGSetting_UnityGeneratedFormatter_TypeDefinitionIndex = 67760;

	class MonoActivityBGSetting_MonoActivityBGSetting_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::MonoActivityBGSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGAnimationSequence*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGAnimationSequence*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoActivityBGSetting_MonoActivityBGSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4B070);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGSpineSequence*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::ActivitBGSpineSequence*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoActivityBGSetting_MonoActivityBGSetting_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4B078);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_MONOACTIVITYBGSETTING_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_MONOACTIVITYBGSETTING_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_MONOACTIVITYBGSETTING_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoActivityBGSetting*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoActivityBGSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_MONOACTIVITYBGSETTING_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::MonoActivityBGSetting*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoActivityBGSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYBGSETTING_MONOACTIVITYBGSETTING_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
