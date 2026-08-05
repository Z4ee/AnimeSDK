#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TagBoolPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_TAGBOOLPAIR_CLASS_3_9083C98D47E19714_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1737AEB0)
#define MOLEMOLE_GALGAME_TAGBOOLPAIR_CLASS_3_9083C98D47E19714_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1737AEC0)
#define MOLEMOLE_GALGAME_TAGBOOLPAIR_CLASS_3_9083C98D47E19714_WRITE_OFFSET UNITYSDK_OFFSET(0x1737B050)
#define MOLEMOLE_GALGAME_TAGBOOLPAIR_CLASS_3_9083C98D47E19714__CCTOR_OFFSET UNITYSDK_OFFSET(0x1737B1B0)
#define MOLEMOLE_GALGAME_TAGBOOLPAIR_CLASS_3_9083C98D47E19714__CTOR_OFFSET UNITYSDK_OFFSET(0x1737B170)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagBoolPair_Class_3_9083C98D47E19714_TypeDefinitionIndex = 88102;

	class TagBoolPair_Class_3_9083C98D47E19714 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::TagBoolPair*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TagBoolPair_Class_3_9083C98D47E19714_TypeDefinitionIndex)->GetStaticField(0x44DA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TagBoolPair_Class_3_9083C98D47E19714_TypeDefinitionIndex)->GetStaticField(0x44DA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGBOOLPAIR_CLASS_3_9083C98D47E19714__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGBOOLPAIR_CLASS_3_9083C98D47E19714__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGBOOLPAIR_CLASS_3_9083C98D47E19714_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TagBoolPair*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TagBoolPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGBOOLPAIR_CLASS_3_9083C98D47E19714_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::TagBoolPair*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TagBoolPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGBOOLPAIR_CLASS_3_9083C98D47E19714_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
