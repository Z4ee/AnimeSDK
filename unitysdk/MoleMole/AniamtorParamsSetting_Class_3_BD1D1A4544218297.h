#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AniamtorParamsSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ANIAMTORPARAMSSETTING_CLASS_3_BD1D1A4544218297_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12A12670)
#define MOLEMOLE_ANIAMTORPARAMSSETTING_CLASS_3_BD1D1A4544218297_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12A12680)
#define MOLEMOLE_ANIAMTORPARAMSSETTING_CLASS_3_BD1D1A4544218297_WRITE_OFFSET UNITYSDK_OFFSET(0x12A12990)
#define MOLEMOLE_ANIAMTORPARAMSSETTING_CLASS_3_BD1D1A4544218297__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A12BA0)
#define MOLEMOLE_ANIAMTORPARAMSSETTING_CLASS_3_BD1D1A4544218297__CTOR_OFFSET UNITYSDK_OFFSET(0x12A12B60)

namespace MoleMole
{
	inline static constexpr unsigned int AniamtorParamsSetting_Class_3_BD1D1A4544218297_TypeDefinitionIndex = 75249;

	class AniamtorParamsSetting_Class_3_BD1D1A4544218297 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AniamtorParamsSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(AniamtorParamsSetting_Class_3_BD1D1A4544218297_TypeDefinitionIndex)->GetStaticField(0x4A330);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AniamtorParamsSetting_Class_3_BD1D1A4544218297_TypeDefinitionIndex)->GetStaticField(0x4A338);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(AniamtorParamsSetting_Class_3_BD1D1A4544218297_TypeDefinitionIndex)->GetStaticField(0x4A340);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING_CLASS_3_BD1D1A4544218297__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING_CLASS_3_BD1D1A4544218297__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING_CLASS_3_BD1D1A4544218297_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AniamtorParamsSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AniamtorParamsSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING_CLASS_3_BD1D1A4544218297_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::AniamtorParamsSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AniamtorParamsSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIAMTORPARAMSSETTING_CLASS_3_BD1D1A4544218297_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
