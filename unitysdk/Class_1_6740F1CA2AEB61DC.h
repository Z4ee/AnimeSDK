#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Struct_2_6E1B724B14572104_2.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_BB861A5968D84F20;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Config { class CharacterAimControlConfig; }
namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_00609F3E254A4EAC_OFFSET UNITYSDK_OFFSET(0x12849210)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_06618C2A694360FD_OFFSET UNITYSDK_OFFSET(0x128490A0)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_0D80A297A36BD8A2_OFFSET UNITYSDK_OFFSET(0x12849E90)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_14185594048863EE_OFFSET UNITYSDK_OFFSET(0x128050E0)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_193534FFD5DAEE80_OFFSET UNITYSDK_OFFSET(0x12848DC0)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_233CEE2ABE432C44_OFFSET UNITYSDK_OFFSET(0x128051D0)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_26E0D35AADD7ED9A_OFFSET UNITYSDK_OFFSET(0x128057A0)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_341C1F64D723B884_OFFSET UNITYSDK_OFFSET(0x1284AF70)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_4A6AFCD42E5B9D9B_OFFSET UNITYSDK_OFFSET(0x1284B1E0)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_4EAB7C2A7753C576_OFFSET UNITYSDK_OFFSET(0x1284A010)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_58084A478B1653C0_OFFSET UNITYSDK_OFFSET(0x1284B710)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_729D817C512DA11F_OFFSET UNITYSDK_OFFSET(0x12849E20)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_8A55DFBFB3FFF117_OFFSET UNITYSDK_OFFSET(0x1284A270)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_8CA200EBF017B8D9_OFFSET UNITYSDK_OFFSET(0x12849E00)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_9A2B864345CCC14F_OFFSET UNITYSDK_OFFSET(0x128055F0)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_9DB074C1F006C6A5_OFFSET UNITYSDK_OFFSET(0x128480D0)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_A6290C42660A6943_OFFSET UNITYSDK_OFFSET(0x12848620)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_B281FF939CCC24D0_OFFSET UNITYSDK_OFFSET(0x12848CD0)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_D9B9508FC0D7F1FC_OFFSET UNITYSDK_OFFSET(0x12808400)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_DE274B3DAD50EEB1_OFFSET UNITYSDK_OFFSET(0x12808020)
#define CLASS_1_6740F1CA2AEB61DC_METHOD_1_FF7EAF6C5AF8FBF2_OFFSET UNITYSDK_OFFSET(0x1284A240)

inline static constexpr unsigned int Class_1_6740F1CA2AEB61DC_TypeDefinitionIndex = 49718;

class Class_1_6740F1CA2AEB61DC : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0

	static ::UnityEngine::Vector3 Method_1_9DB074C1F006C6A5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Collider*& a5, ::System::Single a6)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Collider*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_9DB074C1F006C6A5_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::UnityEngine::Quaternion Method_1_A6290C42660A6943(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_A6290C42660A6943_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector2 Method_1_26E0D35AADD7ED9A(::Enum_3_A019F766F8C74696 a1, ::MoleMole::Config::CharacterAimControlConfig* a2)
	{
		return ((::UnityEngine::Vector2(*)(::Enum_3_A019F766F8C74696, ::MoleMole::Config::CharacterAimControlConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_26E0D35AADD7ED9A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B281FF939CCC24D0(::UnityEngine::Vector2& a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_B281FF939CCC24D0_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_193534FFD5DAEE80(::Class_3_BB861A5968D84F20* a1)
	{
		return ((::System::Void(*)(::Class_3_BB861A5968D84F20*))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_193534FFD5DAEE80_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_06618C2A694360FD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_06618C2A694360FD_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::ValueTuple_2<::System::Single, ::UnityEngine::Quaternion> Method_1_00609F3E254A4EAC(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::MoleMole::Config::CharacterAimModeConfig* a3)
	{
		return ((::System::ValueTuple_2<::System::Single, ::UnityEngine::Quaternion>(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::MoleMole::Config::CharacterAimModeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_00609F3E254A4EAC_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_8CA200EBF017B8D9(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_8CA200EBF017B8D9_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_233CEE2ABE432C44(::Struct_2_6E1B724B14572104_2& a1, ::System::Single a2, ::Enum_3_A019F766F8C74696 a3, ::UnityEngine::Vector2 a4, ::MoleMole::Config::CharacterAimControlConfig* a5)
	{
		return ((::UnityEngine::Vector2(*)(::Struct_2_6E1B724B14572104_2&, ::System::Single, ::Enum_3_A019F766F8C74696, ::UnityEngine::Vector2, ::MoleMole::Config::CharacterAimControlConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_233CEE2ABE432C44_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_4EAB7C2A7753C576(::System::Single a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::System::Single, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_4EAB7C2A7753C576_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_FF7EAF6C5AF8FBF2(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Single(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_FF7EAF6C5AF8FBF2_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Quaternion Method_1_0D80A297A36BD8A2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_0D80A297A36BD8A2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8A55DFBFB3FFF117(::Class_3_BB861A5968D84F20* a1, ::MoleMole::Config::CharacterAimModeConfig* a2)
	{
		return ((::System::Void(*)(::Class_3_BB861A5968D84F20*, ::MoleMole::Config::CharacterAimModeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_8A55DFBFB3FFF117_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_14185594048863EE(::Enum_3_A019F766F8C74696 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::Enum_3_A019F766F8C74696, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_14185594048863EE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_729D817C512DA11F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_729D817C512DA11F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_341C1F64D723B884(::UnityEngine::Quaternion a1, ::Class_3_BB861A5968D84F20* a2, ::Class_3_DFD5D1FDB9D2A4AC* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Quaternion, ::Class_3_BB861A5968D84F20*, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_341C1F64D723B884_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_9A2B864345CCC14F(::Enum_3_A019F766F8C74696 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Single(*)(::Enum_3_A019F766F8C74696, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_9A2B864345CCC14F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9B9508FC0D7F1FC(::Class_3_BB861A5968D84F20* a1, ::Struct_2_FA5F50563E60AFBA a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_BB861A5968D84F20*, ::Struct_2_FA5F50563E60AFBA, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_D9B9508FC0D7F1FC_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_4A6AFCD42E5B9D9B(::Class_3_BB861A5968D84F20* a1, ::Struct_2_FA5F50563E60AFBA a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_BB861A5968D84F20*, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_4A6AFCD42E5B9D9B_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_DE274B3DAD50EEB1(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Single(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_DE274B3DAD50EEB1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_58084A478B1653C0(::Enum_3_A019F766F8C74696 a1, ::UnityEngine::Vector2 a2, ::MoleMole::Config::CharacterAimControlConfig* a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector2(*)(::Enum_3_A019F766F8C74696, ::UnityEngine::Vector2, ::MoleMole::Config::CharacterAimControlConfig*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_METHOD_1_58084A478B1653C0_OFFSET))(a1, a2, a3, a4);
	}
};
