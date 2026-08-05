#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayableNodeBase; }
namespace MoleMole::GalGame { class GalPlayableSegment; }
namespace MoleMole::GalGame { class GalScript; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALSCRIPT_CLASS_3_87AAF7E49CE9DE59_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B1B5690)
#define MOLEMOLE_GALGAME_GALSCRIPT_CLASS_3_87AAF7E49CE9DE59_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B1B56A0)
#define MOLEMOLE_GALGAME_GALSCRIPT_CLASS_3_87AAF7E49CE9DE59_WRITE_OFFSET UNITYSDK_OFFSET(0x1B1B5830)
#define MOLEMOLE_GALGAME_GALSCRIPT_CLASS_3_87AAF7E49CE9DE59__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1B5990)
#define MOLEMOLE_GALGAME_GALSCRIPT_CLASS_3_87AAF7E49CE9DE59__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B5950)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalScript_Class_3_87AAF7E49CE9DE59_TypeDefinitionIndex = 53407;

	class GalScript_Class_3_87AAF7E49CE9DE59 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalScript*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalPlayableNodeBase*>*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalPlayableNodeBase*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalScript_Class_3_87AAF7E49CE9DE59_TypeDefinitionIndex)->GetStaticField(0x425F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalPlayableSegment*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalPlayableSegment*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalScript_Class_3_87AAF7E49CE9DE59_TypeDefinitionIndex)->GetStaticField(0x425F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSCRIPT_CLASS_3_87AAF7E49CE9DE59__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSCRIPT_CLASS_3_87AAF7E49CE9DE59__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSCRIPT_CLASS_3_87AAF7E49CE9DE59_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalScript*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalScript*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSCRIPT_CLASS_3_87AAF7E49CE9DE59_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalScript*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalScript*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSCRIPT_CLASS_3_87AAF7E49CE9DE59_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
