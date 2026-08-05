#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_TAGGROUPANIPAIR_CLASS_3_3DC01DDC521F753A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149EC870)
#define MOLEMOLE_GALGAME_TAGGROUPANIPAIR_CLASS_3_3DC01DDC521F753A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149EC880)
#define MOLEMOLE_GALGAME_TAGGROUPANIPAIR_CLASS_3_3DC01DDC521F753A_WRITE_OFFSET UNITYSDK_OFFSET(0x149ECA10)
#define MOLEMOLE_GALGAME_TAGGROUPANIPAIR_CLASS_3_3DC01DDC521F753A__CCTOR_OFFSET UNITYSDK_OFFSET(0x149ECB70)
#define MOLEMOLE_GALGAME_TAGGROUPANIPAIR_CLASS_3_3DC01DDC521F753A__CTOR_OFFSET UNITYSDK_OFFSET(0x149ECB30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagGroupAniPair_Class_3_3DC01DDC521F753A_TypeDefinitionIndex = 56523;

	class TagGroupAniPair_Class_3_3DC01DDC521F753A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::TagGroupAniPair*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TagGroupAniPair_Class_3_3DC01DDC521F753A_TypeDefinitionIndex)->GetStaticField(0x32710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPANIPAIR_CLASS_3_3DC01DDC521F753A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPANIPAIR_CLASS_3_3DC01DDC521F753A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPANIPAIR_CLASS_3_3DC01DDC521F753A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TagGroupAniPair*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TagGroupAniPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPANIPAIR_CLASS_3_3DC01DDC521F753A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::TagGroupAniPair*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TagGroupAniPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPANIPAIR_CLASS_3_3DC01DDC521F753A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
