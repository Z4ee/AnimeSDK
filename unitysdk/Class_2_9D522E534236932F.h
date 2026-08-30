#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/Class_1_BF2B522AC5DB4E39.h"
#include "unitysdk/RPG/Client/UpdatePreloadTypeMethod.h"

class Class_0_16E4307DCC419505_460;
class Class_1_D294488719556168;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9D522E534236932F_METHOD_2_08651AC4FCBBC1F7_OFFSET UNITYSDK_OFFSET(0x15BB6AB0)
#define CLASS_2_9D522E534236932F_METHOD_2_1ED83D503A2FF06D_OFFSET UNITYSDK_OFFSET(0x15BB6BD0)
#define CLASS_2_9D522E534236932F_METHOD_2_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x15BB5D60)
#define CLASS_2_9D522E534236932F_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x15BB5E30)
#define CLASS_2_9D522E534236932F_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x15BB58A0)
#define CLASS_2_9D522E534236932F_METHOD_2_686EA160220C1A22_OFFSET UNITYSDK_OFFSET(0x15BB5F30)
#define CLASS_2_9D522E534236932F_METHOD_2_8F9CBB9701813BD7_OFFSET UNITYSDK_OFFSET(0x15BB6C70)
#define CLASS_2_9D522E534236932F_METHOD_2_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0x15BB6A60)
#define CLASS_2_9D522E534236932F_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x15BB5850)
#define CLASS_2_9D522E534236932F_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x15BB5B80)
#define CLASS_2_9D522E534236932F__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB6D50)

inline static constexpr unsigned int Class_2_9D522E534236932F_TypeDefinitionIndex = 59855;

class Class_2_9D522E534236932F : public ::Class_1_BF2B522AC5DB4E39
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::SkillData*>* EMEIEIDPNLI; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::SkillData*>* KBJHKEFOMKN; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* BLOELFIJHHE; // 0x30
	::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x38
	::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F_METHOD_2_B9A97467188E4B69_1_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F_METHOD_2_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_2_686EA160220C1A22(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D294488719556168*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D294488719556168*>*))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F_METHOD_2_686EA160220C1A22_OFFSET))(this, a1);
	}

	::System::Void Method_2_08651AC4FCBBC1F7(::RPG::GameCore::SkillData* a1, ::Class_1_2C2DA62D5BBB20B1_PreloadType a2, ::RPG::Client::UpdatePreloadTypeMethod a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::RPG::Client::UpdatePreloadTypeMethod))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F_METHOD_2_08651AC4FCBBC1F7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1ED83D503A2FF06D(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F_METHOD_2_1ED83D503A2FF06D_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Type*>* Method_2_8F9CBB9701813BD7()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D522E534236932F_METHOD_2_8F9CBB9701813BD7_OFFSET))(this);
	}
};
