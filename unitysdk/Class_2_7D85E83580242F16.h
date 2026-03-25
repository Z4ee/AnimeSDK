#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_838558A14E485175.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_ACF89FC544029D07;
class Class_1_B91D144796FC50A3;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrosswalkInfo; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7D85E83580242F16_METHOD_2_0224278F628C10FD_OFFSET UNITYSDK_OFFSET(0x11801280)
#define CLASS_2_7D85E83580242F16_METHOD_2_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x117F0EA0)
#define CLASS_2_7D85E83580242F16_METHOD_2_51BB781957D7506D_OFFSET UNITYSDK_OFFSET(0x117F0C50)
#define CLASS_2_7D85E83580242F16_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11801680)
#define CLASS_2_7D85E83580242F16_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x118010B0)
#define CLASS_2_7D85E83580242F16_METHOD_2_BC9F2E27E6E0A1AD_1_OFFSET UNITYSDK_OFFSET(0x117F1970)
#define CLASS_2_7D85E83580242F16_METHOD_2_BC9F2E27E6E0A1AD_OFFSET UNITYSDK_OFFSET(0x117F1700)
#define CLASS_2_7D85E83580242F16_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x11800C70)
#define CLASS_2_7D85E83580242F16_METHOD_2_F58A78F2B0C6CF07_OFFSET UNITYSDK_OFFSET(0x117F0D00)
#define CLASS_2_7D85E83580242F16_METHOD_2_FC3616C85645FB00_OFFSET UNITYSDK_OFFSET(0x11801350)
#define CLASS_2_7D85E83580242F16__CTOR_OFFSET UNITYSDK_OFFSET(0x11800C80)

inline static constexpr unsigned int Class_2_7D85E83580242F16_TypeDefinitionIndex = 56653;

class Class_2_7D85E83580242F16 : public ::Class_1_838558A14E485175
{
public:
	::RPG::Client::TwoKeyDictionary_3<::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383, ::Class_1_ACF89FC544029D07*>* Field_2_2; // 0x80
	::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::Class_1_ACF89FC544029D07*>* Field_2_3; // 0x88
	::System::String* Field_2_0; // 0x90
	::Il2CppArray<::Class_1_ACF89FC544029D07*>* Field_2_1; // 0x98

	::System::Void _ctor(::Class_1_B91D144796FC50A3* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B91D144796FC50A3*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::EPedestrianV2MotionState Method_2_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16_METHOD_2_C3C9BF311C318908_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Boolean Method_2_51BB781957D7506D(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16_METHOD_2_51BB781957D7506D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0224278F628C10FD(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16_METHOD_2_0224278F628C10FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F58A78F2B0C6CF07(::Class_1_9AAC3BB4FD7CE6FE* a1, ::Struct_2_085541A9CFF64383 a2, ::Struct_2_085541A9CFF64383 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16_METHOD_2_F58A78F2B0C6CF07_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3B10EBB5408EF02E(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16_METHOD_2_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_BC9F2E27E6E0A1AD(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16_METHOD_2_BC9F2E27E6E0A1AD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_BC9F2E27E6E0A1AD_1(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16_METHOD_2_BC9F2E27E6E0A1AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC3616C85645FB00(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16_METHOD_2_FC3616C85645FB00_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D85E83580242F16_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
