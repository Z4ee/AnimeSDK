#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_912CC478F2B21832___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B446A0)
#define CLASS_3_912CC478F2B21832___C__CREATECAMERAVIEW_B__119_0_OFFSET UNITYSDK_OFFSET(0x16B446F0)
#define CLASS_3_912CC478F2B21832___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B446E0)
#define CLASS_3_912CC478F2B21832___C__REPORTGAMEEND_B__319_0_OFFSET UNITYSDK_OFFSET(0x16B44710)

inline static constexpr unsigned int Class_3_912CC478F2B21832___c_TypeDefinitionIndex = 76211;

class Class_3_912CC478F2B21832___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>** StaticGet___9__319_0()
	{
		return (::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_912CC478F2B21832___c_TypeDefinitionIndex)->GetStaticField(0x5F6F0);
	}
	static ::System::Action_2<::Class_3_912CC478F2B21832*, ::Class_2_B8E38BF47138A2E5*>** StaticGet___9__119_0()
	{
		return (::System::Action_2<::Class_3_912CC478F2B21832*, ::Class_2_B8E38BF47138A2E5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_912CC478F2B21832___c_TypeDefinitionIndex)->GetStaticField(0x5F6F8);
	}
	static ::Class_3_912CC478F2B21832___c** StaticGet___9()
	{
		return (::Class_3_912CC478F2B21832___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_912CC478F2B21832___c_TypeDefinitionIndex)->GetStaticField(0x5F700);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__CTOR_OFFSET))(this);
	}

	::System::Void _CreateCameraView_b__119_0(::Class_3_912CC478F2B21832* a1, ::Class_2_B8E38BF47138A2E5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_912CC478F2B21832*, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__CREATECAMERAVIEW_B__119_0_OFFSET))(this, a1, a2);
	}

	::System::String* _ReportGameEnd_b__319_0(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__REPORTGAMEEND_B__319_0_OFFSET))(this, a1);
	}
};
