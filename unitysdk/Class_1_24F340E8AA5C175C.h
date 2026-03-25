#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ProjectileMoveBehavior.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class BGCurveWithDetectProjectileData; }
namespace RPG::GameCore { class BezierProjectileData; }
namespace RPG::GameCore { class BoomerangProjectileData; }
namespace RPG::GameCore { class BouncyProjectileData; }
namespace RPG::GameCore { class FollowWithDetectProjectileData; }
namespace RPG::GameCore { class HalfBoomerangProjectileData; }
namespace RPG::GameCore { class HalfBoomerangWithDetectProjectileData; }
namespace RPG::GameCore { class LinearProjectileData; }
namespace RPG::GameCore { class LinearWithDetectProjectileData; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ParabolaProjectileData; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class RandomTraceProjectileData; }
namespace RPG::GameCore { class StaticProjectileData; }
namespace RPG::GameCore { class TraceWithDetectProjectileData; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_24F340E8AA5C175C_METHOD_1_3E4E4A8AC68605CA_OFFSET UNITYSDK_OFFSET(0x10598960)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_48D620CC2A765657_OFFSET UNITYSDK_OFFSET(0x105997D0)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_5E07C51FC80B4009_OFFSET UNITYSDK_OFFSET(0x10599730)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_6CB6FA7E4B3A7DC2_OFFSET UNITYSDK_OFFSET(0x105992E0)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_7184B0F519FCE6FF_OFFSET UNITYSDK_OFFSET(0x10599910)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_768FDE3C6D6EC407_OFFSET UNITYSDK_OFFSET(0x105996A0)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_8C6B71BDF88C27C5_OFFSET UNITYSDK_OFFSET(0x10599440)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_975A0F71412900B4_OFFSET UNITYSDK_OFFSET(0x10599870)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_9CAC8DAED8190895_OFFSET UNITYSDK_OFFSET(0x105991C0)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_A37FA21E8405FB6A_OFFSET UNITYSDK_OFFSET(0x10599A40)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_A940E7DEC171F113_OFFSET UNITYSDK_OFFSET(0x10599380)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_AD20C358C54F5D30_OFFSET UNITYSDK_OFFSET(0x10599250)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_B341F81716F38C1F_OFFSET UNITYSDK_OFFSET(0x10599AE0)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_CBEDAF0B8946E403_OFFSET UNITYSDK_OFFSET(0x105999B0)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_CFFF17105B772C3D_OFFSET UNITYSDK_OFFSET(0x105994F0)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_F6385A121A8965BE_OFFSET UNITYSDK_OFFSET(0x105987F0)
#define CLASS_1_24F340E8AA5C175C_METHOD_1_F7E192B657B4AEC3_OFFSET UNITYSDK_OFFSET(0x105995F0)
#define CLASS_1_24F340E8AA5C175C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10599C50)

inline static constexpr unsigned int Class_1_24F340E8AA5C175C_TypeDefinitionIndex = 43813;

class Class_1_24F340E8AA5C175C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::GameCore::ProjectileMoveBehavior>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::GameCore::ProjectileMoveBehavior>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24F340E8AA5C175C_TypeDefinitionIndex)->GetStaticField(0x1A160);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::ProjectileMoveBehavior Method_1_F6385A121A8965BE(::RPG::GameCore::NewProjectileConfig* a1)
	{
		return ((::RPG::GameCore::ProjectileMoveBehavior(*)(::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_F6385A121A8965BE_OFFSET))(a1);
	}

	static ::RPG::GameCore::NewProjectileConfig* Method_1_3E4E4A8AC68605CA(::RPG::GameCore::ProjectileData* a1)
	{
		return ((::RPG::GameCore::NewProjectileConfig*(*)(::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_3E4E4A8AC68605CA_OFFSET))(a1);
	}

	static ::System::Void Method_1_AD20C358C54F5D30(::RPG::GameCore::HalfBoomerangProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::HalfBoomerangProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_AD20C358C54F5D30_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CAC8DAED8190895(::RPG::GameCore::BoomerangProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BoomerangProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_9CAC8DAED8190895_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6CB6FA7E4B3A7DC2(::RPG::GameCore::LinearProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LinearProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_6CB6FA7E4B3A7DC2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A940E7DEC171F113(::RPG::GameCore::StaticProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::StaticProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_A940E7DEC171F113_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8C6B71BDF88C27C5(::RPG::GameCore::BouncyProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BouncyProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_8C6B71BDF88C27C5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CFFF17105B772C3D(::RPG::GameCore::RandomTraceProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::RandomTraceProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_CFFF17105B772C3D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7E192B657B4AEC3(::RPG::GameCore::LinearWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::LinearWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_F7E192B657B4AEC3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_768FDE3C6D6EC407(::RPG::GameCore::FollowWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::FollowWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_768FDE3C6D6EC407_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5E07C51FC80B4009(::RPG::GameCore::HalfBoomerangWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::HalfBoomerangWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_5E07C51FC80B4009_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48D620CC2A765657(::RPG::GameCore::ParabolaProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::ParabolaProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_48D620CC2A765657_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_975A0F71412900B4(::RPG::GameCore::BezierProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BezierProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_975A0F71412900B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7184B0F519FCE6FF(::RPG::GameCore::TraceWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TraceWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_7184B0F519FCE6FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CBEDAF0B8946E403(::RPG::GameCore::BGCurveProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BGCurveProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_CBEDAF0B8946E403_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A37FA21E8405FB6A(::RPG::GameCore::BGCurveWithDetectProjectileData* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::BGCurveWithDetectProjectileData*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_A37FA21E8405FB6A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B341F81716F38C1F(::RPG::GameCore::NewProjectileConfig* a1, ::RPG::GameCore::ProjectileData* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::NewProjectileConfig*, ::RPG::GameCore::ProjectileData*))((::PBYTE)hIl2Cpp + CLASS_1_24F340E8AA5C175C_METHOD_1_B341F81716F38C1F_OFFSET))(a1, a2);
	}
};
