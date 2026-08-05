#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalArgueGoalMode.h"
#include "unitysdk/MoleMole/GalGame/GalArgueStageLocation.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayArgueStartNode; }
namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_CLASS_3_717BE06CD78799AB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BECA10)
#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_CLASS_3_717BE06CD78799AB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BECA20)
#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_CLASS_3_717BE06CD78799AB_WRITE_OFFSET UNITYSDK_OFFSET(0x19BED230)
#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_CLASS_3_717BE06CD78799AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BED710)
#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_CLASS_3_717BE06CD78799AB__CTOR_OFFSET UNITYSDK_OFFSET(0x19BED6D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayArgueStartNode_Class_3_717BE06CD78799AB_TypeDefinitionIndex = 84445;

	class GalPlayArgueStartNode_Class_3_717BE06CD78799AB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalPlayArgueStartNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueStartNode_Class_3_717BE06CD78799AB_TypeDefinitionIndex)->GetStaticField(0x48C80);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalArgueGoalMode>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalArgueGoalMode>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueStartNode_Class_3_717BE06CD78799AB_TypeDefinitionIndex)->GetStaticField(0x48C88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueStartNode_Class_3_717BE06CD78799AB_TypeDefinitionIndex)->GetStaticField(0x48C90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalArgueStageLocation>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalArgueStageLocation>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueStartNode_Class_3_717BE06CD78799AB_TypeDefinitionIndex)->GetStaticField(0x48C98);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueStartNode_Class_3_717BE06CD78799AB_TypeDefinitionIndex)->GetStaticField(0x48CA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueStartNode_Class_3_717BE06CD78799AB_TypeDefinitionIndex)->GetStaticField(0x48CA8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_CLASS_3_717BE06CD78799AB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_CLASS_3_717BE06CD78799AB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_CLASS_3_717BE06CD78799AB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayArgueStartNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueStartNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_CLASS_3_717BE06CD78799AB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayArgueStartNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueStartNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_CLASS_3_717BE06CD78799AB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
