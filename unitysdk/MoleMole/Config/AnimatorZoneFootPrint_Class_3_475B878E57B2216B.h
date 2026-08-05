#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FootType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneFootPrint; }
namespace MoleMole::Config { class AnimatorZoneFootPrint_FrameStepOnGroundData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CLASS_3_475B878E57B2216B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177C5D10)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CLASS_3_475B878E57B2216B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177C5D20)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CLASS_3_475B878E57B2216B_WRITE_OFFSET UNITYSDK_OFFSET(0x177C6210)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CLASS_3_475B878E57B2216B__CCTOR_OFFSET UNITYSDK_OFFSET(0x177C6530)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CLASS_3_475B878E57B2216B__CTOR_OFFSET UNITYSDK_OFFSET(0x177C64F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFootPrint_Class_3_475B878E57B2216B_TypeDefinitionIndex = 90789;

	class AnimatorZoneFootPrint_Class_3_475B878E57B2216B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneFootPrint*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_Class_3_475B878E57B2216B_TypeDefinitionIndex)->GetStaticField(0x44900);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*>*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_Class_3_475B878E57B2216B_TypeDefinitionIndex)->GetStaticField(0x44908);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_Class_3_475B878E57B2216B_TypeDefinitionIndex)->GetStaticField(0x44910);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneFootPrint_FootType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneFootPrint_FootType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_Class_3_475B878E57B2216B_TypeDefinitionIndex)->GetStaticField(0x44918);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_Class_3_475B878E57B2216B_TypeDefinitionIndex)->GetStaticField(0x44920);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneFootPrint_Class_3_475B878E57B2216B_TypeDefinitionIndex)->GetStaticField(0x44928);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CLASS_3_475B878E57B2216B__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CLASS_3_475B878E57B2216B__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CLASS_3_475B878E57B2216B_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneFootPrint*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CLASS_3_475B878E57B2216B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneFootPrint*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneFootPrint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_CLASS_3_475B878E57B2216B_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
