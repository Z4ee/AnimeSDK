#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSoundActionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_CLASS_3_D08AF389A5359F5F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19083B20)
#define MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_CLASS_3_D08AF389A5359F5F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19083B30)
#define MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_CLASS_3_D08AF389A5359F5F_WRITE_OFFSET UNITYSDK_OFFSET(0x19083E40)
#define MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_CLASS_3_D08AF389A5359F5F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19084050)
#define MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_CLASS_3_D08AF389A5359F5F__CTOR_OFFSET UNITYSDK_OFFSET(0x19084010)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSoundActionNode_Class_3_D08AF389A5359F5F_TypeDefinitionIndex = 90780;

	class GalSoundActionNode_Class_3_D08AF389A5359F5F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalSoundActionNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalSoundActionNode_Class_3_D08AF389A5359F5F_TypeDefinitionIndex)->GetStaticField(0x4A850);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalSoundActionNode_Class_3_D08AF389A5359F5F_TypeDefinitionIndex)->GetStaticField(0x4A858);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalSoundActionNode_Class_3_D08AF389A5359F5F_TypeDefinitionIndex)->GetStaticField(0x4A860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_CLASS_3_D08AF389A5359F5F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_CLASS_3_D08AF389A5359F5F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_CLASS_3_D08AF389A5359F5F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSoundActionNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSoundActionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_CLASS_3_D08AF389A5359F5F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalSoundActionNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSoundActionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_CLASS_3_D08AF389A5359F5F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
