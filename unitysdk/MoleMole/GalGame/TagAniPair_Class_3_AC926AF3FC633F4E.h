#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TagAniPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_TAGANIPAIR_CLASS_3_AC926AF3FC633F4E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A7A00)
#define MOLEMOLE_GALGAME_TAGANIPAIR_CLASS_3_AC926AF3FC633F4E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A7A10)
#define MOLEMOLE_GALGAME_TAGANIPAIR_CLASS_3_AC926AF3FC633F4E_WRITE_OFFSET UNITYSDK_OFFSET(0x136A7BA0)
#define MOLEMOLE_GALGAME_TAGANIPAIR_CLASS_3_AC926AF3FC633F4E__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A7D00)
#define MOLEMOLE_GALGAME_TAGANIPAIR_CLASS_3_AC926AF3FC633F4E__CTOR_OFFSET UNITYSDK_OFFSET(0x136A7CC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagAniPair_Class_3_AC926AF3FC633F4E_TypeDefinitionIndex = 75377;

	class TagAniPair_Class_3_AC926AF3FC633F4E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::TagAniPair*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TagAniPair_Class_3_AC926AF3FC633F4E_TypeDefinitionIndex)->GetStaticField(0x4D6B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TagAniPair_Class_3_AC926AF3FC633F4E_TypeDefinitionIndex)->GetStaticField(0x4D6B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGANIPAIR_CLASS_3_AC926AF3FC633F4E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGANIPAIR_CLASS_3_AC926AF3FC633F4E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGANIPAIR_CLASS_3_AC926AF3FC633F4E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TagAniPair*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TagAniPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGANIPAIR_CLASS_3_AC926AF3FC633F4E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::TagAniPair*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TagAniPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGANIPAIR_CLASS_3_AC926AF3FC633F4E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
