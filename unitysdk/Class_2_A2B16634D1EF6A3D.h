#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_2.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_2EC0EF10CE4B8713;
class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class ChoseSequencedSkillAxis; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A2B16634D1EF6A3D_METHOD_2_0A419096F0D0A134_OFFSET UNITYSDK_OFFSET(0x109B8DD0)
#define CLASS_2_A2B16634D1EF6A3D_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x109B9720)
#define CLASS_2_A2B16634D1EF6A3D_METHOD_2_4D9730941A81FE69_OFFSET UNITYSDK_OFFSET(0x109B96C0)
#define CLASS_2_A2B16634D1EF6A3D_METHOD_2_C4126FFE52BD722A_OFFSET UNITYSDK_OFFSET(0x109B9230)
#define CLASS_2_A2B16634D1EF6A3D_METHOD_2_D1F3CBCBF3CBBDDF_OFFSET UNITYSDK_OFFSET(0x109B9050)
#define CLASS_2_A2B16634D1EF6A3D__CTOR_OFFSET UNITYSDK_OFFSET(0x109B8DC0)

inline static constexpr unsigned int Class_2_A2B16634D1EF6A3D_TypeDefinitionIndex = 43459;

class Class_2_A2B16634D1EF6A3D : public ::Class_1_F9FBCC956DFCF137_2
{
public:
	::RPG::GameCore::ChoseSequencedSkillAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChoseSequencedSkillAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChoseSequencedSkillAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_A2B16634D1EF6A3D__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_0A419096F0D0A134()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2B16634D1EF6A3D_METHOD_2_0A419096F0D0A134_OFFSET))(this);
	}

	::System::Boolean Method_2_4D9730941A81FE69(::Class_1_BD800F5B29A08E1F* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A2B16634D1EF6A3D_METHOD_2_4D9730941A81FE69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C4126FFE52BD722A(::Class_1_BD800F5B29A08E1F* a1, ::Class_1_2EC0EF10CE4B8713* a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*, ::Class_1_2EC0EF10CE4B8713*, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_2_A2B16634D1EF6A3D_METHOD_2_C4126FFE52BD722A_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>* Method_2_D1F3CBCBF3CBBDDF(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A2B16634D1EF6A3D_METHOD_2_D1F3CBCBF3CBBDDF_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2B16634D1EF6A3D_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
