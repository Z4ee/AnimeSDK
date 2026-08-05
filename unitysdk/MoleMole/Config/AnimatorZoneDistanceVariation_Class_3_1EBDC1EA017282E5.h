#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneDistanceVariation; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLASS_3_1EBDC1EA017282E5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1624E0D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLASS_3_1EBDC1EA017282E5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1624E0E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLASS_3_1EBDC1EA017282E5_WRITE_OFFSET UNITYSDK_OFFSET(0x1624F1F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLASS_3_1EBDC1EA017282E5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1624FBD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLASS_3_1EBDC1EA017282E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1624FB90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDistanceVariation_Class_3_1EBDC1EA017282E5_TypeDefinitionIndex = 73083;

	class AnimatorZoneDistanceVariation_Class_3_1EBDC1EA017282E5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneDistanceVariation*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDistanceVariation_Class_3_1EBDC1EA017282E5_TypeDefinitionIndex)->GetStaticField(0x32300);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDistanceVariation_Class_3_1EBDC1EA017282E5_TypeDefinitionIndex)->GetStaticField(0x32308);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDistanceVariation_Class_3_1EBDC1EA017282E5_TypeDefinitionIndex)->GetStaticField(0x32310);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDistanceVariation_Class_3_1EBDC1EA017282E5_TypeDefinitionIndex)->GetStaticField(0x32318);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDistanceVariation_Class_3_1EBDC1EA017282E5_TypeDefinitionIndex)->GetStaticField(0x32320);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDistanceVariation_Class_3_1EBDC1EA017282E5_TypeDefinitionIndex)->GetStaticField(0x32328);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLASS_3_1EBDC1EA017282E5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLASS_3_1EBDC1EA017282E5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLASS_3_1EBDC1EA017282E5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneDistanceVariation*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDistanceVariation*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLASS_3_1EBDC1EA017282E5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneDistanceVariation*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDistanceVariation*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDISTANCEVARIATION_CLASS_3_1EBDC1EA017282E5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
