#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4156D5F344F828BD.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"

class Class_1_05BD9C87E93CA0F8;
class Class_2_7BF3BC6025EDB88C;
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelSetActiveSkill; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_3_6BC3D8E00A651E53_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1845A630)
#define CLASS_3_6BC3D8E00A651E53_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1845A870)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_09F5F09901EB55E9_OFFSET UNITYSDK_OFFSET(0x1845A3A0)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0x18458700)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x18458650)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_22FAC251A3FE2A30_OFFSET UNITYSDK_OFFSET(0x18459B00)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x1845A2C0)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x1845A350)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x18458AE0)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x184596E0)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x1845A440)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x18459C20)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_A01F987742BD20DA_OFFSET UNITYSDK_OFFSET(0x184588B0)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x18458A20)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x18459850)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18458510)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_DF2A78D8DB25ED05_1_OFFSET UNITYSDK_OFFSET(0x18459CF0)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x18459790)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_E08D45F1BEDD78A7_OFFSET UNITYSDK_OFFSET(0x18459E70)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x18459DB0)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_E808EC7A4D91DAFA_OFFSET UNITYSDK_OFFSET(0x18458760)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x1845A560)
#define CLASS_3_6BC3D8E00A651E53_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x1845A4A0)
#define CLASS_3_6BC3D8E00A651E53_ONRETURN_OFFSET UNITYSDK_OFFSET(0x18458580)
#define CLASS_3_6BC3D8E00A651E53__CTOR_OFFSET UNITYSDK_OFFSET(0x1845AAB0)
#define CLASS_3_6BC3D8E00A651E53__ONBIND_OFFSET UNITYSDK_OFFSET(0x184582B0)

inline static constexpr unsigned int Class_3_6BC3D8E00A651E53_TypeDefinitionIndex = 68674;

class Class_3_6BC3D8E00A651E53 : public ::Class_2_4156D5F344F828BD
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	::UnityEngine::Animation* Field_3_7; // 0xB8
	::UnityEngine::UI::Image* Field_3_8; // 0xC0
	::UnityEngine::UI::Image* Field_3_9; // 0xC8
	::UnityEngine::UI::Image* Field_3_10; // 0xD0
	::UnityEngine::UI::Image* Field_3_11; // 0xD8
	::UnityEngine::UI::Image* Field_3_12; // 0xE0
	::Class_2_7BF3BC6025EDB88C* Field_3_13; // 0xE8
	::UnityEngine::ParticleSystem* Field_3_14; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_2_7BF3BC6025EDB88C* Method_3_E808EC7A4D91DAFA(::RPG::GameCore::SkillSPProgressType a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_2_7BF3BC6025EDB88C*(*)(::PVOID, ::RPG::GameCore::SkillSPProgressType, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_E808EC7A4D91DAFA_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_A01F987742BD20DA(::RPG::GameCore::DamageTypeRow* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DamageTypeRow*))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_A01F987742BD20DA_OFFSET))(this, a1);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_3_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_3_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_3_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_22FAC251A3FE2A30(::RPG::Client::SPProgress* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SPProgress*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_22FAC251A3FE2A30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Void Method_3_DF2A78D8DB25ED05_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_DF2A78D8DB25ED05_1_OFFSET))(this);
	}

	::System::Void Method_3_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_3_E08D45F1BEDD78A7(::Class_1_05BD9C87E93CA0F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05BD9C87E93CA0F8*))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_E08D45F1BEDD78A7_OFFSET))(this, a1);
	}

	::System::Void Method_3_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void Method_3_09F5F09901EB55E9(::RPG::GameCore::LevelSetActiveSkill* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSetActiveSkill*))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_09F5F09901EB55E9_OFFSET))(this, a1);
	}

	::System::Void Method_3_70484F0C4668EBF2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_70484F0C4668EBF2_OFFSET))(this);
	}

	::System::Void Method_3_14045882BC5C6CA9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_14045882BC5C6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_3_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_3_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_METHOD_3_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6BC3D8E00A651E53_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
