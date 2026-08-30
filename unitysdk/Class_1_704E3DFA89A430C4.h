#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_704E3DFA89A430C4_Class_1_E76D45654B2DA8D9;
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TeamBuildRecipe; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_704E3DFA89A430C4_GET_HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0x1537B460)
#define CLASS_1_704E3DFA89A430C4_GET_TEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0x1537B440)
#define CLASS_1_704E3DFA89A430C4_METHOD_1_36726F9E10ADB55F_OFFSET UNITYSDK_OFFSET(0x1537B760)
#define CLASS_1_704E3DFA89A430C4_METHOD_1_6823B2499C7AC739_OFFSET UNITYSDK_OFFSET(0x1537C620)
#define CLASS_1_704E3DFA89A430C4_METHOD_1_6D8E8D1FC2488E6B_OFFSET UNITYSDK_OFFSET(0x1537BA20)
#define CLASS_1_704E3DFA89A430C4_METHOD_1_B0BD4DA8C36CF181_OFFSET UNITYSDK_OFFSET(0x1537C970)
#define CLASS_1_704E3DFA89A430C4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1537B480)
#define CLASS_1_704E3DFA89A430C4_METHOD_1_D6C1C883463BD436_OFFSET UNITYSDK_OFFSET(0x1537BE00)
#define CLASS_1_704E3DFA89A430C4_METHOD_1_E4650AE9F3C4C883_OFFSET UNITYSDK_OFFSET(0x1537B4D0)
#define CLASS_1_704E3DFA89A430C4_METHOD_1_E9AD8FDC7FC92DD0_OFFSET UNITYSDK_OFFSET(0x1537B340)
#define CLASS_1_704E3DFA89A430C4_METHOD_1_FE2DEA3D3DDA31BA_OFFSET UNITYSDK_OFFSET(0x1537C430)
#define CLASS_1_704E3DFA89A430C4_SET_HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0x1537B470)
#define CLASS_1_704E3DFA89A430C4_SET_TEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0x1537B450)
#define CLASS_1_704E3DFA89A430C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1537CB20)

inline static constexpr unsigned int Class_1_704E3DFA89A430C4_TypeDefinitionIndex = 68079;

class Class_1_704E3DFA89A430C4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_704E3DFA89A430C4_Class_1_E76D45654B2DA8D9*>* JCNCCBIKFJA; // 0x10
	::RPG::Client::TeamBuildRecipe* _TeamBuildRecipe_k__BackingField; // 0x18
	::System::Func_2<::System::UInt32, ::System::Boolean>* _HasAvatarChecker_k__BackingField; // 0x20
	::System::Nullable_1<::System::Int32> FALBKBBEAHG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_E9AD8FDC7FC92DD0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_METHOD_1_E9AD8FDC7FC92DD0_OFFSET))(this);
	}

	::RPG::Client::TeamBuildRecipe* get_TeamBuildRecipe()
	{
		return ((::RPG::Client::TeamBuildRecipe*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_GET_TEAMBUILDRECIPE_OFFSET))(this);
	}

	::System::Void set_TeamBuildRecipe(::RPG::Client::TeamBuildRecipe* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_SET_TEAMBUILDRECIPE_OFFSET))(this, a1);
	}

	::System::Func_2<::System::UInt32, ::System::Boolean>* get_HasAvatarChecker()
	{
		return ((::System::Func_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_GET_HASAVATARCHECKER_OFFSET))(this);
	}

	::System::Void set_HasAvatarChecker(::System::Func_2<::System::UInt32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_SET_HASAVATARCHECKER_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E4650AE9F3C4C883(::System::Collections::Generic::ICollection_1<::RPG::Client::TeamBuild*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::TeamBuild*>*))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_METHOD_1_E4650AE9F3C4C883_OFFSET))(this, a1);
	}

	::System::Void Method_1_36726F9E10ADB55F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_METHOD_1_36726F9E10ADB55F_OFFSET))(this);
	}

	::System::Void Method_1_6D8E8D1FC2488E6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_METHOD_1_6D8E8D1FC2488E6B_OFFSET))(this);
	}

	::RPG::Client::TeamBuild* Method_1_D6C1C883463BD436()
	{
		return ((::RPG::Client::TeamBuild*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_METHOD_1_D6C1C883463BD436_OFFSET))(this);
	}

	::System::Boolean Method_1_FE2DEA3D3DDA31BA(::RPG::Client::TeamBuild* a1, ::System::Int32& a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*, ::System::Int32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_METHOD_1_FE2DEA3D3DDA31BA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6823B2499C7AC739(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_METHOD_1_6823B2499C7AC739_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B0BD4DA8C36CF181(::System::Int32 a1, ::Class_1_704E3DFA89A430C4_Class_1_E76D45654B2DA8D9*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_704E3DFA89A430C4_Class_1_E76D45654B2DA8D9*&))((::PBYTE)hIl2Cpp + CLASS_1_704E3DFA89A430C4_METHOD_1_B0BD4DA8C36CF181_OFFSET))(this, a1, a2);
	}
};
