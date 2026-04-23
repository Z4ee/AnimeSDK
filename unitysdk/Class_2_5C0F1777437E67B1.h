#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CCB0D6744495158D.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7D9075FD1A3992DE;
class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_ACF89FC544029D07;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrosswalkInfo; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_5C0F1777437E67B1_METHOD_2_0224278F628C10FD_OFFSET UNITYSDK_OFFSET(0x9E2E880)
#define CLASS_2_5C0F1777437E67B1_METHOD_2_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x9E2EAC0)
#define CLASS_2_5C0F1777437E67B1_METHOD_2_51BB781957D7506D_OFFSET UNITYSDK_OFFSET(0x9E2E7D0)
#define CLASS_2_5C0F1777437E67B1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9E2F370)
#define CLASS_2_5C0F1777437E67B1_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x9E2E600)
#define CLASS_2_5C0F1777437E67B1_METHOD_2_AFACD0CEE3C0705F_OFFSET UNITYSDK_OFFSET(0x9E2E950)
#define CLASS_2_5C0F1777437E67B1_METHOD_2_BC9F2E27E6E0A1AD_1_OFFSET UNITYSDK_OFFSET(0x9E2ED30)
#define CLASS_2_5C0F1777437E67B1_METHOD_2_BC9F2E27E6E0A1AD_OFFSET UNITYSDK_OFFSET(0x9E2EB70)
#define CLASS_2_5C0F1777437E67B1_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x9E2E1B0)
#define CLASS_2_5C0F1777437E67B1_METHOD_2_F58A78F2B0C6CF07_OFFSET UNITYSDK_OFFSET(0x9E2EA10)
#define CLASS_2_5C0F1777437E67B1_METHOD_2_FC3616C85645FB00_OFFSET UNITYSDK_OFFSET(0x9E2F040)
#define CLASS_2_5C0F1777437E67B1__CTOR_OFFSET UNITYSDK_OFFSET(0x9E2E1C0)

inline static constexpr unsigned int Class_2_5C0F1777437E67B1_TypeDefinitionIndex = 63897;

class Class_2_5C0F1777437E67B1 : public ::Class_1_CCB0D6744495158D
{
public:
	::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::Class_1_ACF89FC544029D07*>* Field_2_4; // 0x80
	::Il2CppArray<::Class_1_ACF89FC544029D07*>* Field_2_1; // 0x88
	::RPG::Client::TwoKeyDictionary_3<::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383, ::Class_1_ACF89FC544029D07*>* Field_2_3; // 0x90
	::System::String* Field_2_0; // 0x98
	::System::Int32 Field_2_2; // 0xA0

	::System::Void _ctor(::Class_1_7D9075FD1A3992DE* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D9075FD1A3992DE*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::EPedestrianV2MotionState Method_2_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_C3C9BF311C318908_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Boolean Method_2_51BB781957D7506D(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_51BB781957D7506D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0224278F628C10FD(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_0224278F628C10FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AFACD0CEE3C0705F(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_AFACD0CEE3C0705F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F58A78F2B0C6CF07(::Class_1_9AAC3BB4FD7CE6FE* a1, ::Struct_2_085541A9CFF64383 a2, ::Struct_2_085541A9CFF64383 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_F58A78F2B0C6CF07_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3B10EBB5408EF02E(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_BC9F2E27E6E0A1AD(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_BC9F2E27E6E0A1AD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_BC9F2E27E6E0A1AD_1(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_BC9F2E27E6E0A1AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC3616C85645FB00(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_FC3616C85645FB00_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C0F1777437E67B1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
