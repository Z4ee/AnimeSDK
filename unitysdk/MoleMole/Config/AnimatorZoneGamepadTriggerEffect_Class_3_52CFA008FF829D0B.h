#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneGamepadTriggerEffect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_CLASS_3_52CFA008FF829D0B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD4B280)
#define MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_CLASS_3_52CFA008FF829D0B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BD4B290)
#define MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_CLASS_3_52CFA008FF829D0B_WRITE_OFFSET UNITYSDK_OFFSET(0x1BD4BB50)
#define MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_CLASS_3_52CFA008FF829D0B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD4C090)
#define MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_CLASS_3_52CFA008FF829D0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD4C050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneGamepadTriggerEffect_Class_3_52CFA008FF829D0B_TypeDefinitionIndex = 53665;

	class AnimatorZoneGamepadTriggerEffect_Class_3_52CFA008FF829D0B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneGamepadTriggerEffect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneGamepadTriggerEffect_Class_3_52CFA008FF829D0B_TypeDefinitionIndex)->GetStaticField(0x50BD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneGamepadTriggerEffect_Class_3_52CFA008FF829D0B_TypeDefinitionIndex)->GetStaticField(0x50BD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneGamepadTriggerEffect_Class_3_52CFA008FF829D0B_TypeDefinitionIndex)->GetStaticField(0x50BE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::InputType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::InputType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneGamepadTriggerEffect_Class_3_52CFA008FF829D0B_TypeDefinitionIndex)->GetStaticField(0x50BE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneGamepadTriggerEffect_Class_3_52CFA008FF829D0B_TypeDefinitionIndex)->GetStaticField(0x50BF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneGamepadTriggerEffect_Class_3_52CFA008FF829D0B_TypeDefinitionIndex)->GetStaticField(0x50BF8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_CLASS_3_52CFA008FF829D0B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_CLASS_3_52CFA008FF829D0B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_CLASS_3_52CFA008FF829D0B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneGamepadTriggerEffect*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneGamepadTriggerEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_CLASS_3_52CFA008FF829D0B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneGamepadTriggerEffect*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneGamepadTriggerEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEGAMEPADTRIGGEREFFECT_CLASS_3_52CFA008FF829D0B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
