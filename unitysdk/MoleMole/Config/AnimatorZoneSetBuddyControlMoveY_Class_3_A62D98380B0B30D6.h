#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneSetBuddyControlMoveY; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CLASS_3_A62D98380B0B30D6_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x148558F0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CLASS_3_A62D98380B0B30D6_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14855900)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CLASS_3_A62D98380B0B30D6_WRITE_OFFSET UNITYSDK_OFFSET(0x14856080)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CLASS_3_A62D98380B0B30D6__CCTOR_OFFSET UNITYSDK_OFFSET(0x14856510)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CLASS_3_A62D98380B0B30D6__CTOR_OFFSET UNITYSDK_OFFSET(0x148564D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetBuddyControlMoveY_Class_3_A62D98380B0B30D6_TypeDefinitionIndex = 83186;

	class AnimatorZoneSetBuddyControlMoveY_Class_3_A62D98380B0B30D6 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneSetBuddyControlMoveY*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetBuddyControlMoveY_Class_3_A62D98380B0B30D6_TypeDefinitionIndex)->GetStaticField(0x42230);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetBuddyControlMoveY_Class_3_A62D98380B0B30D6_TypeDefinitionIndex)->GetStaticField(0x42238);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetBuddyControlMoveY_Class_3_A62D98380B0B30D6_TypeDefinitionIndex)->GetStaticField(0x42240);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetBuddyControlMoveY_Class_3_A62D98380B0B30D6_TypeDefinitionIndex)->GetStaticField(0x42248);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetBuddyControlMoveY_Class_3_A62D98380B0B30D6_TypeDefinitionIndex)->GetStaticField(0x42250);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneSetBuddyControlMoveY_Class_3_A62D98380B0B30D6_TypeDefinitionIndex)->GetStaticField(0x42258);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CLASS_3_A62D98380B0B30D6__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CLASS_3_A62D98380B0B30D6__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CLASS_3_A62D98380B0B30D6_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetBuddyControlMoveY*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetBuddyControlMoveY*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CLASS_3_A62D98380B0B30D6_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetBuddyControlMoveY*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetBuddyControlMoveY*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_CLASS_3_A62D98380B0B30D6_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
