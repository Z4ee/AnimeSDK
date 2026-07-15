#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6B57C0CB1CF5E075.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1077;
class Class_1_2A97E60807F449E7;
class Class_1_47C4FB84CDFFA751;
class Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C;
class Class_2_6FB71C8A93137451;
class Class_2_BE0CF97972975587;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIParticleClippable; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_3_009C566F26613044_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1625D740)
#define CLASS_3_009C566F26613044_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1625DA00)
#define CLASS_3_009C566F26613044_METHOD_3_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x1625C590)
#define CLASS_3_009C566F26613044_METHOD_3_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x1625CCE0)
#define CLASS_3_009C566F26613044_METHOD_3_34D5F4DBE622AF88_OFFSET UNITYSDK_OFFSET(0x1625C3D0)
#define CLASS_3_009C566F26613044_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1625C1A0)
#define CLASS_3_009C566F26613044_METHOD_3_44794AA20DCEA08E_OFFSET UNITYSDK_OFFSET(0x1625C8F0)
#define CLASS_3_009C566F26613044_METHOD_3_46086E8B47AC77A0_OFFSET UNITYSDK_OFFSET(0x1625D3B0)
#define CLASS_3_009C566F26613044_METHOD_3_56A1C36F6B66CD4A_OFFSET UNITYSDK_OFFSET(0x1625CD90)
#define CLASS_3_009C566F26613044_METHOD_3_5CF28DBBCC35E87D_OFFSET UNITYSDK_OFFSET(0x1625CA20)
#define CLASS_3_009C566F26613044_METHOD_3_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x1625BFD0)
#define CLASS_3_009C566F26613044_METHOD_3_761CDF0F76D066F1_OFFSET UNITYSDK_OFFSET(0x1625C6C0)
#define CLASS_3_009C566F26613044_METHOD_3_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x1625C080)
#define CLASS_3_009C566F26613044_METHOD_3_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x1625CE60)
#define CLASS_3_009C566F26613044_METHOD_3_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x1625CC20)
#define CLASS_3_009C566F26613044_METHOD_3_9F88E35FE931B81A_OFFSET UNITYSDK_OFFSET(0x1625CF10)
#define CLASS_3_009C566F26613044_METHOD_3_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x1625D590)
#define CLASS_3_009C566F26613044_METHOD_3_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x1625CBD0)
#define CLASS_3_009C566F26613044_METHOD_3_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x1625CEB0)
#define CLASS_3_009C566F26613044_METHOD_3_E6C3760A97595BE1_OFFSET UNITYSDK_OFFSET(0x1625C310)
#define CLASS_3_009C566F26613044_METHOD_3_E6E7B3944D652BA8_OFFSET UNITYSDK_OFFSET(0x1625D000)
#define CLASS_3_009C566F26613044_METHOD_3_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1625D680)
#define CLASS_3_009C566F26613044_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1625D4D0)
#define CLASS_3_009C566F26613044_METHOD_3_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0x1625C290)
#define CLASS_3_009C566F26613044__CTOR_OFFSET UNITYSDK_OFFSET(0x1625DC80)
#define CLASS_3_009C566F26613044__ONBIND_OFFSET UNITYSDK_OFFSET(0x1625BD90)

inline static constexpr unsigned int Class_3_009C566F26613044_TypeDefinitionIndex = 68971;

class Class_3_009C566F26613044 : public ::Class_2_6B57C0CB1CF5E075
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	::UnityEngine::UI::Text* Field_3_6; // 0xE0
	::Class_2_BE0CF97972975587* Field_3_7; // 0xE8
	::UnityEngine::UI::Text* Field_3_8; // 0xF0
	::UnityEngine::Animation* Field_3_9; // 0xF8
	::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C* Field_3_10; // 0x100
	::UnityEngine::Transform* Field_3_11; // 0x108
	::RPG::Client::PrefabLoadMeta* Field_3_12; // 0x110
	::RPG::Client::UIParticleClippable* Field_3_13; // 0x118
	::UnityEngine::UI::Text* Field_3_14; // 0x120
	::UnityEngine::Animation* Field_3_15; // 0x128
	::UnityEngine::UI::Text* Field_3_16; // 0x130
	::System::Collections::Generic::Queue_1<::Class_2_6FB71C8A93137451*>* Field_3_17; // 0x138
	::UnityEngine::Transform* Field_3_18; // 0x140
	::UnityEngine::Animation* Field_3_19; // 0x148
	::System::String* Field_3_20; // 0x150
	::System::Int32 Field_3_21; // 0x158
	::RPG::GameCore::FixPoint Field_3_22; // 0x160

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_3_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Void Method_3_E6C3760A97595BE1(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_E6C3760A97595BE1_OFFSET))(this, a1);
	}

	::System::Void Method_3_34D5F4DBE622AF88(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_34D5F4DBE622AF88_OFFSET))(this, a1);
	}

	::System::Void Method_3_761CDF0F76D066F1(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_761CDF0F76D066F1_OFFSET))(this, a1);
	}

	::System::Void Method_3_44794AA20DCEA08E(::Class_1_47C4FB84CDFFA751* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47C4FB84CDFFA751*))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_44794AA20DCEA08E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_0AB718BEE9EA06D7(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_3_9F88E35FE931B81A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_9F88E35FE931B81A_OFFSET))(this, a1);
	}

	::System::Void Method_3_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_3_56A1C36F6B66CD4A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_56A1C36F6B66CD4A_OFFSET))(this);
	}

	::System::Void Method_3_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_3_5CF28DBBCC35E87D(::Class_1_47C4FB84CDFFA751* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47C4FB84CDFFA751*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_5CF28DBBCC35E87D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_3_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_D1305BC17A89C222_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1077* Method_3_E6E7B3944D652BA8(::RPG::GameCore::GridFightBattleEventHintType a1)
	{
		return ((::Class_0_16E4307DCC419505_1077*(*)(::PVOID, ::RPG::GameCore::GridFightBattleEventHintType))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_E6E7B3944D652BA8_OFFSET))(this, a1);
	}

	::System::Void Method_3_46086E8B47AC77A0(::Class_0_16E4307DCC419505_1077* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1077*))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_46086E8B47AC77A0_OFFSET))(this, a1);
	}

	::System::Void Method_3_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_3_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_3_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_METHOD_3_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_009C566F26613044_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
