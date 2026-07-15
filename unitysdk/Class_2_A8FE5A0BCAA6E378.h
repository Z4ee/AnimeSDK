#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3207B23A0433048D.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_83AB3963F9C15714;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_1F47CAD86E555F5A_OFFSET UNITYSDK_OFFSET(0x14A0D250)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_3DC1F35F3A8C5912_OFFSET UNITYSDK_OFFSET(0x14A0D940)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_4BF19A449ABF5E03_OFFSET UNITYSDK_OFFSET(0x14A0D840)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_A83FE9776667762E_OFFSET UNITYSDK_OFFSET(0x14A0D400)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_B48AECDEFBFDB070_OFFSET UNITYSDK_OFFSET(0x14A0D6D0)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_ED52DB814317F086_OFFSET UNITYSDK_OFFSET(0x14A0DAA0)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_FB8896218BBE5890_OFFSET UNITYSDK_OFFSET(0x14A0D5C0)
#define CLASS_2_A8FE5A0BCAA6E378__CTOR_OFFSET UNITYSDK_OFFSET(0x14A0DF30)

inline static constexpr unsigned int Class_2_A8FE5A0BCAA6E378_TypeDefinitionIndex = 51268;

class Class_2_A8FE5A0BCAA6E378 : public ::Class_1_3207B23A0433048D
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::Class_1_83AB3963F9C15714*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1F47CAD86E555F5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_1F47CAD86E555F5A_OFFSET))(this);
	}

	::System::Int32 Method_2_A83FE9776667762E(::RPG::GameCore::RtBehaviorFlag a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_A83FE9776667762E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FB8896218BBE5890(::RPG::GameCore::RtBehaviorFlag a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_FB8896218BBE5890_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B48AECDEFBFDB070(::RPG::GameCore::RtBehaviorFlag a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_B48AECDEFBFDB070_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Method_2_4BF19A449ABF5E03(::RPG::GameCore::RtBehaviorFlag a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_4BF19A449ABF5E03_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_3DC1F35F3A8C5912(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_3DC1F35F3A8C5912_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_ED52DB814317F086(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_ED52DB814317F086_OFFSET))(this, a1, a2);
	}
};
