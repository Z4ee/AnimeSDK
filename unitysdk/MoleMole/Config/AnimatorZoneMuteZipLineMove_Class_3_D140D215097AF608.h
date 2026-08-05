#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneMuteZipLineMove; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEZIPLINEMOVE_CLASS_3_D140D215097AF608_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11465790)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEZIPLINEMOVE_CLASS_3_D140D215097AF608_READMEMBER_OFFSET UNITYSDK_OFFSET(0x114657A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEZIPLINEMOVE_CLASS_3_D140D215097AF608_WRITE_OFFSET UNITYSDK_OFFSET(0x11465C90)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEZIPLINEMOVE_CLASS_3_D140D215097AF608__CCTOR_OFFSET UNITYSDK_OFFSET(0x11465FB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEZIPLINEMOVE_CLASS_3_D140D215097AF608__CTOR_OFFSET UNITYSDK_OFFSET(0x11465F70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteZipLineMove_Class_3_D140D215097AF608_TypeDefinitionIndex = 67616;

	class AnimatorZoneMuteZipLineMove_Class_3_D140D215097AF608 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneMuteZipLineMove*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneMuteZipLineMove_Class_3_D140D215097AF608_TypeDefinitionIndex)->GetStaticField(0x46AB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneMuteZipLineMove_Class_3_D140D215097AF608_TypeDefinitionIndex)->GetStaticField(0x46AB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneMuteZipLineMove_Class_3_D140D215097AF608_TypeDefinitionIndex)->GetStaticField(0x46AC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneMuteZipLineMove_Class_3_D140D215097AF608_TypeDefinitionIndex)->GetStaticField(0x46AC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEZIPLINEMOVE_CLASS_3_D140D215097AF608__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEZIPLINEMOVE_CLASS_3_D140D215097AF608__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEZIPLINEMOVE_CLASS_3_D140D215097AF608_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneMuteZipLineMove*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteZipLineMove*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEZIPLINEMOVE_CLASS_3_D140D215097AF608_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneMuteZipLineMove*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteZipLineMove*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEZIPLINEMOVE_CLASS_3_D140D215097AF608_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
