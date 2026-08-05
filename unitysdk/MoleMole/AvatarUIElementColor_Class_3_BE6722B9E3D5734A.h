#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class AvatarUIElementColor; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_AVATARUIELEMENTCOLOR_CLASS_3_BE6722B9E3D5734A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x167D4C60)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_CLASS_3_BE6722B9E3D5734A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x167D4C70)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_CLASS_3_BE6722B9E3D5734A_WRITE_OFFSET UNITYSDK_OFFSET(0x167D4E10)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_CLASS_3_BE6722B9E3D5734A__CCTOR_OFFSET UNITYSDK_OFFSET(0x167D4F80)
#define MOLEMOLE_AVATARUIELEMENTCOLOR_CLASS_3_BE6722B9E3D5734A__CTOR_OFFSET UNITYSDK_OFFSET(0x167D4F40)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarUIElementColor_Class_3_BE6722B9E3D5734A_TypeDefinitionIndex = 57899;

	class AvatarUIElementColor_Class_3_BE6722B9E3D5734A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::AvatarUIElementColor*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarUIElementColor_Class_3_BE6722B9E3D5734A_TypeDefinitionIndex)->GetStaticField(0x3C6D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(AvatarUIElementColor_Class_3_BE6722B9E3D5734A_TypeDefinitionIndex)->GetStaticField(0x3C6D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_CLASS_3_BE6722B9E3D5734A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_CLASS_3_BE6722B9E3D5734A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_CLASS_3_BE6722B9E3D5734A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::AvatarUIElementColor*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarUIElementColor*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_CLASS_3_BE6722B9E3D5734A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::AvatarUIElementColor*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AvatarUIElementColor*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR_CLASS_3_BE6722B9E3D5734A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
