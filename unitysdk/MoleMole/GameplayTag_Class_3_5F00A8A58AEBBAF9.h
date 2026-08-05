#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GAMEPLAYTAG_CLASS_3_5F00A8A58AEBBAF9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13A92260)
#define MOLEMOLE_GAMEPLAYTAG_CLASS_3_5F00A8A58AEBBAF9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13A92270)
#define MOLEMOLE_GAMEPLAYTAG_CLASS_3_5F00A8A58AEBBAF9_WRITE_OFFSET UNITYSDK_OFFSET(0x13A92330)
#define MOLEMOLE_GAMEPLAYTAG_CLASS_3_5F00A8A58AEBBAF9__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A92440)
#define MOLEMOLE_GAMEPLAYTAG_CLASS_3_5F00A8A58AEBBAF9__CTOR_OFFSET UNITYSDK_OFFSET(0x13A923E0)

namespace MoleMole
{
	inline static constexpr unsigned int GameplayTag_Class_3_5F00A8A58AEBBAF9_TypeDefinitionIndex = 44719;

	class GameplayTag_Class_3_5F00A8A58AEBBAF9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GameplayTag>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayTag_Class_3_5F00A8A58AEBBAF9_TypeDefinitionIndex)->GetStaticField(0x46DB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_CLASS_3_5F00A8A58AEBBAF9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_CLASS_3_5F00A8A58AEBBAF9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_CLASS_3_5F00A8A58AEBBAF9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GameplayTag& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_CLASS_3_5F00A8A58AEBBAF9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GameplayTag& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GameplayTag&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYTAG_CLASS_3_5F00A8A58AEBBAF9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
