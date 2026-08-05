#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class BranchItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_BRANCHITEM_CLASS_3_4DE94C96F9535E84_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19083320)
#define MOLEMOLE_GALGAME_BRANCHITEM_CLASS_3_4DE94C96F9535E84_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19083330)
#define MOLEMOLE_GALGAME_BRANCHITEM_CLASS_3_4DE94C96F9535E84_WRITE_OFFSET UNITYSDK_OFFSET(0x19083580)
#define MOLEMOLE_GALGAME_BRANCHITEM_CLASS_3_4DE94C96F9535E84__CCTOR_OFFSET UNITYSDK_OFFSET(0x19083740)
#define MOLEMOLE_GALGAME_BRANCHITEM_CLASS_3_4DE94C96F9535E84__CTOR_OFFSET UNITYSDK_OFFSET(0x19083700)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int BranchItem_Class_3_4DE94C96F9535E84_TypeDefinitionIndex = 60090;

	class BranchItem_Class_3_4DE94C96F9535E84 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::BranchItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BranchItem_Class_3_4DE94C96F9535E84_TypeDefinitionIndex)->GetStaticField(0x4A830);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_BRANCHITEM_CLASS_3_4DE94C96F9535E84__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_BRANCHITEM_CLASS_3_4DE94C96F9535E84__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_BRANCHITEM_CLASS_3_4DE94C96F9535E84_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::BranchItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::BranchItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_BRANCHITEM_CLASS_3_4DE94C96F9535E84_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::BranchItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::BranchItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_BRANCHITEM_CLASS_3_4DE94C96F9535E84_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
