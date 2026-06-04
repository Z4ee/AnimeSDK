#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATAREXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3838D0)
#define RPG_CLIENT_AVATAREXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB383900)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__176_0_OFFSET UNITYSDK_OFFSET(0xB383910)
#define RPG_CLIENT_AVATAREXTENSIONS___C__GETTRACETREELEVELS_B__177_1_OFFSET UNITYSDK_OFFSET(0xB383950)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarExtensions___c_TypeDefinitionIndex = 58537;

	class AvatarExtensions___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Struct_2_BAC064D277DD99F1, ::System::UInt32>** StaticGet___9__177_1()
		{
			return (::System::Func_2<::Struct_2_BAC064D277DD99F1, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExtensions___c_TypeDefinitionIndex)->GetStaticField(0x632A0);
		}
		static ::RPG::Client::AvatarExtensions___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarExtensions___c_TypeDefinitionIndex)->GetStaticField(0x632A8);
		}
		static ::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>** StaticGet___9__176_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarSkillTreeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExtensions___c_TypeDefinitionIndex)->GetStaticField(0x632B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRecommendTraceNodeRowDataList_b__176_0(::RPG::GameCore::AvatarSkillTreeRow* a1, ::RPG::GameCore::AvatarSkillTreeRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__GETRECOMMENDTRACENODEROWDATALIST_B__176_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetTraceTreeLevels_b__177_1(::Struct_2_BAC064D277DD99F1 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Struct_2_BAC064D277DD99F1))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREXTENSIONS___C__GETTRACETREELEVELS_B__177_1_OFFSET))(this, a1);
		}
	};
}
