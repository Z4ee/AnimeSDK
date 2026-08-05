#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/BuddyMoveStatus.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneBuddySwitchMoveState; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_CLASS_3_C0776F5CFC50C18A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD47170)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_CLASS_3_C0776F5CFC50C18A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD47180)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_CLASS_3_C0776F5CFC50C18A_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD47670)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_CLASS_3_C0776F5CFC50C18A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD47990)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_CLASS_3_C0776F5CFC50C18A__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD47950)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBuddySwitchMoveState_Class_3_C0776F5CFC50C18A_TypeDefinitionIndex = 57005;

	class AnimatorZoneBuddySwitchMoveState_Class_3_C0776F5CFC50C18A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneBuddySwitchMoveState*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneBuddySwitchMoveState_Class_3_C0776F5CFC50C18A_TypeDefinitionIndex)->GetStaticField(0x50AB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneBuddySwitchMoveState_Class_3_C0776F5CFC50C18A_TypeDefinitionIndex)->GetStaticField(0x50AB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::BuddyMoveStatus>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::BuddyMoveStatus>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneBuddySwitchMoveState_Class_3_C0776F5CFC50C18A_TypeDefinitionIndex)->GetStaticField(0x50AC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneBuddySwitchMoveState_Class_3_C0776F5CFC50C18A_TypeDefinitionIndex)->GetStaticField(0x50AC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneBuddySwitchMoveState_Class_3_C0776F5CFC50C18A_TypeDefinitionIndex)->GetStaticField(0x50AD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_CLASS_3_C0776F5CFC50C18A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_CLASS_3_C0776F5CFC50C18A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_CLASS_3_C0776F5CFC50C18A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneBuddySwitchMoveState*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneBuddySwitchMoveState*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_CLASS_3_C0776F5CFC50C18A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneBuddySwitchMoveState*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneBuddySwitchMoveState*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHMOVESTATE_CLASS_3_C0776F5CFC50C18A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
