#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BC1F0DE405AE0D4.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_483ED67B5E0A21FB;
class Class_1_ACF89FC544029D07;
class Class_1_B87B48EBDCE76E87;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrosswalkInfo; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8E9B8283CEBC7A5C_METHOD_2_0224278F628C10FD_OFFSET UNITYSDK_OFFSET(0x18A4C9F0)
#define CLASS_2_8E9B8283CEBC7A5C_METHOD_2_113FFAAF3BF54124_1_OFFSET UNITYSDK_OFFSET(0x18A4CEF0)
#define CLASS_2_8E9B8283CEBC7A5C_METHOD_2_113FFAAF3BF54124_OFFSET UNITYSDK_OFFSET(0x18A4CD00)
#define CLASS_2_8E9B8283CEBC7A5C_METHOD_2_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x18A4CC60)
#define CLASS_2_8E9B8283CEBC7A5C_METHOD_2_3EE794BD9FDFF4D0_OFFSET UNITYSDK_OFFSET(0x18A4D230)
#define CLASS_2_8E9B8283CEBC7A5C_METHOD_2_47F50B259C23D1F5_OFFSET UNITYSDK_OFFSET(0x18A4CAC0)
#define CLASS_2_8E9B8283CEBC7A5C_METHOD_2_4FEB77743212E3E4_OFFSET UNITYSDK_OFFSET(0x18A4C910)
#define CLASS_2_8E9B8283CEBC7A5C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x18A4C7C0)
#define CLASS_2_8E9B8283CEBC7A5C_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x18A4C370)
#define CLASS_2_8E9B8283CEBC7A5C_METHOD_2_D08CE44D3CDE727E_OFFSET UNITYSDK_OFFSET(0x18A4CB80)
#define CLASS_2_8E9B8283CEBC7A5C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4C380)

inline static constexpr unsigned int Class_2_8E9B8283CEBC7A5C_TypeDefinitionIndex = 69279;

class Class_2_8E9B8283CEBC7A5C : public ::Class_1_2BC1F0DE405AE0D4
{
public:
	::Il2CppArray<::Class_1_ACF89FC544029D07*>* IHLBAMHPGFG; // 0x80
	::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::Class_1_ACF89FC544029D07*>* DGGPKCGDNOA; // 0x88
	::System::String* OHBCIGADKLL; // 0x90
	::RPG::Client::TwoKeyDictionary_3<::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383, ::Class_1_ACF89FC544029D07*>* CBJLIJPOBLP; // 0x98
	::System::Int32 DAGHBKPOEMM; // 0xA0

	::System::Void _ctor(::Class_1_483ED67B5E0A21FB* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_483ED67B5E0A21FB*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrosswalkInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::EPedestrianV2MotionState Method_2_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C_METHOD_2_C3C9BF311C318908_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Boolean Method_2_4FEB77743212E3E4(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C_METHOD_2_4FEB77743212E3E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0224278F628C10FD(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C_METHOD_2_0224278F628C10FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_47F50B259C23D1F5(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C_METHOD_2_47F50B259C23D1F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D08CE44D3CDE727E(::Class_1_B87B48EBDCE76E87* a1, ::Struct_2_085541A9CFF64383 a2, ::Struct_2_085541A9CFF64383 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C_METHOD_2_D08CE44D3CDE727E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3B10EBB5408EF02E(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C_METHOD_2_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_113FFAAF3BF54124(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C_METHOD_2_113FFAAF3BF54124_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_113FFAAF3BF54124_1(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C_METHOD_2_113FFAAF3BF54124_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3EE794BD9FDFF4D0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8E9B8283CEBC7A5C_METHOD_2_3EE794BD9FDFF4D0_OFFSET))(this, a1);
	}
};
