#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_CLASS_3_74D6D767588E831C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x118C7E10)
#define MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_CLASS_3_74D6D767588E831C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x118C7E20)
#define MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_CLASS_3_74D6D767588E831C_WRITE_OFFSET UNITYSDK_OFFSET(0x118C7FB0)
#define MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_CLASS_3_74D6D767588E831C__CCTOR_OFFSET UNITYSDK_OFFSET(0x118C8110)
#define MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_CLASS_3_74D6D767588E831C__CTOR_OFFSET UNITYSDK_OFFSET(0x118C80D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagGroupBoolPair_Class_3_74D6D767588E831C_TypeDefinitionIndex = 44878;

	class TagGroupBoolPair_Class_3_74D6D767588E831C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::TagGroupBoolPair*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TagGroupBoolPair_Class_3_74D6D767588E831C_TypeDefinitionIndex)->GetStaticField(0x3CB30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TagGroupBoolPair_Class_3_74D6D767588E831C_TypeDefinitionIndex)->GetStaticField(0x3CB38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_CLASS_3_74D6D767588E831C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_CLASS_3_74D6D767588E831C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_CLASS_3_74D6D767588E831C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TagGroupBoolPair*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TagGroupBoolPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_CLASS_3_74D6D767588E831C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::TagGroupBoolPair*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TagGroupBoolPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPBOOLPAIR_CLASS_3_74D6D767588E831C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
