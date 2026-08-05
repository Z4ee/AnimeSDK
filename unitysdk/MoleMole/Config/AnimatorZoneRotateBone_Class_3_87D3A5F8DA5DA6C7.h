#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimFixedParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneRotateBone_LocalAxisType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneRotateBone; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CLASS_3_87D3A5F8DA5DA6C7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x143632D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CLASS_3_87D3A5F8DA5DA6C7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x143632E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CLASS_3_87D3A5F8DA5DA6C7_WRITE_OFFSET UNITYSDK_OFFSET(0x14364290)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CLASS_3_87D3A5F8DA5DA6C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x14364BF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CLASS_3_87D3A5F8DA5DA6C7__CTOR_OFFSET UNITYSDK_OFFSET(0x14364BB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex = 79213;

	class AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneRotateBone*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimType>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimFixedParam>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimFixedParam>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigPosRot*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::ProceduralAnimDamperParam>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneRotateBone_Class_3_87D3A5F8DA5DA6C7_TypeDefinitionIndex)->GetStaticField(0x363F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CLASS_3_87D3A5F8DA5DA6C7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CLASS_3_87D3A5F8DA5DA6C7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CLASS_3_87D3A5F8DA5DA6C7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneRotateBone*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneRotateBone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CLASS_3_87D3A5F8DA5DA6C7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneRotateBone*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneRotateBone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CLASS_3_87D3A5F8DA5DA6C7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
