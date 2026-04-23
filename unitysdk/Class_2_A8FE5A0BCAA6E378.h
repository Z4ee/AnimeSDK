#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DFEED9E47A49175.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_83AB3963F9C15714;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_4BF19A449ABF5E03_OFFSET UNITYSDK_OFFSET(0x9759810)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9759EC0)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_84EA8BA1F0C08025_OFFSET UNITYSDK_OFFSET(0x9759930)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_A74F1CF3E25BC135_OFFSET UNITYSDK_OFFSET(0x97591E0)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_A83FE9776667762E_OFFSET UNITYSDK_OFFSET(0x97593A0)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_B48AECDEFBFDB070_OFFSET UNITYSDK_OFFSET(0x9759690)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_EA2B12C0E07DB810_OFFSET UNITYSDK_OFFSET(0x9759BD0)
#define CLASS_2_A8FE5A0BCAA6E378_METHOD_2_FB8896218BBE5890_OFFSET UNITYSDK_OFFSET(0x9759570)
#define CLASS_2_A8FE5A0BCAA6E378__CTOR_OFFSET UNITYSDK_OFFSET(0x9759E30)

inline static constexpr unsigned int Class_2_A8FE5A0BCAA6E378_TypeDefinitionIndex = 49519;

class Class_2_A8FE5A0BCAA6E378 : public ::Class_1_9DFEED9E47A49175
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::Class_1_83AB3963F9C15714*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A74F1CF3E25BC135()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_A74F1CF3E25BC135_OFFSET))(this);
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

	::RPG::GameCore::FixPoint Method_2_84EA8BA1F0C08025(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_84EA8BA1F0C08025_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_EA2B12C0E07DB810(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_EA2B12C0E07DB810_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8FE5A0BCAA6E378_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
