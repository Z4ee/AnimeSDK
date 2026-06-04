#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_2EC0EF10CE4B8713;
class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class ChoseSequencedSkillAxis; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6D8C1A9F54348328_METHOD_2_33EDC6D24F93C7C3_OFFSET UNITYSDK_OFFSET(0xB001DC0)
#define CLASS_2_6D8C1A9F54348328_METHOD_2_512073A5E70F4E39_OFFSET UNITYSDK_OFFSET(0xB0025B0)
#define CLASS_2_6D8C1A9F54348328_METHOD_2_991F2DC604348C5E_OFFSET UNITYSDK_OFFSET(0xB002550)
#define CLASS_2_6D8C1A9F54348328_METHOD_2_F92CE1EC7A31AEC6_OFFSET UNITYSDK_OFFSET(0xB001FA0)
#define CLASS_2_6D8C1A9F54348328_METHOD_2_FC51B4F94EB4A6DF_OFFSET UNITYSDK_OFFSET(0xB001B90)
#define CLASS_2_6D8C1A9F54348328__CTOR_OFFSET UNITYSDK_OFFSET(0xB001B80)

inline static constexpr unsigned int Class_2_6D8C1A9F54348328_TypeDefinitionIndex = 50823;

class Class_2_6D8C1A9F54348328 : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::ChoseSequencedSkillAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChoseSequencedSkillAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChoseSequencedSkillAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_6D8C1A9F54348328__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_FC51B4F94EB4A6DF()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D8C1A9F54348328_METHOD_2_FC51B4F94EB4A6DF_OFFSET))(this);
	}

	::System::Boolean Method_2_991F2DC604348C5E(::Class_1_AC66714FF5876767* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_6D8C1A9F54348328_METHOD_2_991F2DC604348C5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F92CE1EC7A31AEC6(::Class_1_AC66714FF5876767* a1, ::Class_1_2EC0EF10CE4B8713* a2, ::System::Collections::Generic::List_1<::System::UInt32>*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC66714FF5876767*, ::Class_1_2EC0EF10CE4B8713*, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_2_6D8C1A9F54348328_METHOD_2_F92CE1EC7A31AEC6_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>* Method_2_33EDC6D24F93C7C3(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_6D8C1A9F54348328_METHOD_2_33EDC6D24F93C7C3_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_512073A5E70F4E39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D8C1A9F54348328_METHOD_2_512073A5E70F4E39_OFFSET))(this);
	}
};
