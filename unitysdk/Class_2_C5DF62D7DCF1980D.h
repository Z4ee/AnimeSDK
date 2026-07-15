#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_A474572029D08468;
class Class_2_51BFA7C7D45F9465;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C5DF62D7DCF1980D_METHOD_2_199F6D49E7588415_OFFSET UNITYSDK_OFFSET(0x185EEAA0)
#define CLASS_2_C5DF62D7DCF1980D_METHOD_2_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x185EE8B0)
#define CLASS_2_C5DF62D7DCF1980D_METHOD_2_69329D34001B92B1_OFFSET UNITYSDK_OFFSET(0x185EEB30)
#define CLASS_2_C5DF62D7DCF1980D_METHOD_2_9711F41B1D434DE5_OFFSET UNITYSDK_OFFSET(0x185EF0A0)
#define CLASS_2_C5DF62D7DCF1980D_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x185EE9A0)
#define CLASS_2_C5DF62D7DCF1980D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x185EEA60)
#define CLASS_2_C5DF62D7DCF1980D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x185EEA20)
#define CLASS_2_C5DF62D7DCF1980D__CTOR_OFFSET UNITYSDK_OFFSET(0x185EF2E0)
#define CLASS_2_C5DF62D7DCF1980D__ONBIND_OFFSET UNITYSDK_OFFSET(0x185EE910)

inline static constexpr unsigned int Class_2_C5DF62D7DCF1980D_TypeDefinitionIndex = 68613;

class Class_2_C5DF62D7DCF1980D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::List_1<::Class_2_51BFA7C7D45F9465*>* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::RPG::GameCore::BattleInstance* Field_2_2; // 0x70
	::Class_1_A474572029D08468* Field_2_3; // 0x78
	::System::Int32 Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5DF62D7DCF1980D__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5DF62D7DCF1980D_METHOD_2_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5DF62D7DCF1980D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_C5DF62D7DCF1980D_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5DF62D7DCF1980D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5DF62D7DCF1980D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_199F6D49E7588415(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_C5DF62D7DCF1980D_METHOD_2_199F6D49E7588415_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9711F41B1D434DE5(::RPG::Client::UISkillIndex a1, ::RPG::Client::UISkillIndex a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + CLASS_2_C5DF62D7DCF1980D_METHOD_2_9711F41B1D434DE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_69329D34001B92B1(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>*))((::PBYTE)hIl2Cpp + CLASS_2_C5DF62D7DCF1980D_METHOD_2_69329D34001B92B1_OFFSET))(this, a1, a2);
	}
};
