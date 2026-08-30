#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_619E8122C498BEBB_METHOD_1_35ED9546DAE5BC5C_OFFSET UNITYSDK_OFFSET(0x15931850)
#define CLASS_1_619E8122C498BEBB_METHOD_1_3BB6253F5FF6E09C_OFFSET UNITYSDK_OFFSET(0x15931770)
#define CLASS_1_619E8122C498BEBB_METHOD_1_6DAF1B5C72AE3C40_OFFSET UNITYSDK_OFFSET(0x159318C0)
#define CLASS_1_619E8122C498BEBB_METHOD_1_A0A3160555248791_OFFSET UNITYSDK_OFFSET(0x159317F0)

inline static constexpr unsigned int Class_1_619E8122C498BEBB_TypeDefinitionIndex = 62657;

class Class_1_619E8122C498BEBB : public ::System::Object
{
public:
	static ::RPG::GameCore::IAvatarCommonRowWrap* Method_1_3BB6253F5FF6E09C(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_619E8122C498BEBB_METHOD_1_3BB6253F5FF6E09C_OFFSET))(a1);
	}

	static ::RPG::GameCore::AvatarUltraSkillConfigRow* Method_1_A0A3160555248791(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_619E8122C498BEBB_METHOD_1_A0A3160555248791_OFFSET))(a1);
	}

	static ::Struct_2_F1C4ECC5EFDCA1EF Method_1_35ED9546DAE5BC5C(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::Struct_2_F1C4ECC5EFDCA1EF(*)(::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_619E8122C498BEBB_METHOD_1_35ED9546DAE5BC5C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6DAF1B5C72AE3C40(::Struct_2_BC950E36747FB4C9 a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>*& a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>*& a3)
	{
		return ((::System::Boolean(*)(::Struct_2_BC950E36747FB4C9, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>*&, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>*&))((::PBYTE)hIl2Cpp + CLASS_1_619E8122C498BEBB_METHOD_1_6DAF1B5C72AE3C40_OFFSET))(a1, a2, a3);
	}
};
