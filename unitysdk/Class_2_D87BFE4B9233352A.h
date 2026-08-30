#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/Class_2_D87BFE4B9233352A_ClimbMoveResult.h"
#include "unitysdk/Class_2_D87BFE4B9233352A_ClimbSegmentPassType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class ClimbableLinearWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define CLASS_2_D87BFE4B9233352A_GET_FIRSTFRAMEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x17D2E380)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_064D10072154189E_OFFSET UNITYSDK_OFFSET(0x17D2D000)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_0F6506BADFC93779_OFFSET UNITYSDK_OFFSET(0x17D2D880)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_1A8E27A3DA815532_OFFSET UNITYSDK_OFFSET(0x17D2E090)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x17D2BFE0)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_5484D998764BDD60_OFFSET UNITYSDK_OFFSET(0x17D2C1F0)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_5AEC8C9EE262F230_OFFSET UNITYSDK_OFFSET(0x17D2E280)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_62EF504AE512C429_OFFSET UNITYSDK_OFFSET(0x17D2C790)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_67FE1E45920BC538_OFFSET UNITYSDK_OFFSET(0x17D2CB40)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_75E7CAAFEC7D5918_OFFSET UNITYSDK_OFFSET(0x17D2D630)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_7C9C322C96F3C4A6_OFFSET UNITYSDK_OFFSET(0x17D2CDE0)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_A835AB0FF207BB42_OFFSET UNITYSDK_OFFSET(0x17D2DE50)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_C59EE4BEDFED23F9_OFFSET UNITYSDK_OFFSET(0x17D2D1C0)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_C821E92C9A44CF30_OFFSET UNITYSDK_OFFSET(0x17D2E1C0)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_C8448179FEB34E1E_OFFSET UNITYSDK_OFFSET(0x17D2CCA0)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x17D2BD80)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_DF249C0E36759C3F_OFFSET UNITYSDK_OFFSET(0x17D2C100)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_E270A10BE3BCF880_OFFSET UNITYSDK_OFFSET(0x17D2E2E0)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_E52B7F78B553D90D_OFFSET UNITYSDK_OFFSET(0x17D2D6E0)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_F647B6F9507BF73F_OFFSET UNITYSDK_OFFSET(0x17D2E160)
#define CLASS_2_D87BFE4B9233352A_METHOD_2_FDCD653AD53D337B_OFFSET UNITYSDK_OFFSET(0x17D2CAD0)
#define CLASS_2_D87BFE4B9233352A_SET_FIRSTFRAMEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x17D2E390)
#define CLASS_2_D87BFE4B9233352A__CTOR_OFFSET UNITYSDK_OFFSET(0x17D2BD00)

inline static constexpr unsigned int Class_2_D87BFE4B9233352A_TypeDefinitionIndex = 54949;

class Class_2_D87BFE4B9233352A : public ::Class_1_1835888C1E19F013
{
public:
	// static const ::System::Single CDDEJJJPJMK; // 0x0
	// static const ::System::Single OGCGNELOMGM; // 0x0
	// static const ::System::Single OKDALACEEMK; // 0x0
	// static const ::System::Single FFANMOCKNNG; // 0x0
	// static const ::System::Single FOGOLBMLLJN; // 0x0
	// static const ::System::Single MLPPPACHEAL; // 0x0
	// static const ::System::Single KDIMMLNHOFH; // 0x0
	// static const ::System::Single DBPAACNIKIJ; // 0x0
	// static const ::System::Single IFJOIDKIPGD; // 0x0
	// static const ::System::Single AGHGNAOIAHD; // 0x0
	// static const ::System::Single NKGFHFIOOPH; // 0x0
	// static const ::System::Single LKGOOKAFGJP; // 0x0
	// static const ::System::Single AEHNGHBDLDK; // 0x0
	// static const ::System::Single IKJOMJLFKEF; // 0x0
	// static const ::System::Single OBENKPKNOLP; // 0x0
	// static const ::System::Single JLMIKICFILL; // 0x0
	// static const ::System::Single PKNOOHGAEOG; // 0x0
	::RPG::GameCore::ClimbableLinearWithDetectProjectileData* FPGPHIEOMFL; // 0x48
	::UnityEngine::Collider* NDAFFIDEPKJ; // 0x50
	::System::Single GNIPNKGBDNO; // 0x58
	::System::Single LMCBEIHGLDF; // 0x5C
	::System::Single NOPMHDHPOOH; // 0x60
	::UnityEngine::Vector3 LOLDFFJAKEB; // 0x64
	::UnityEngine::Vector3 DNPILOMHEFL; // 0x70
	::System::Single DHKMOEJJJGJ; // 0x7C
	::UnityEngine::Vector3 JCACOMLOPAB; // 0x80
	::System::Boolean JENGAMCDOPC; // 0x8C
	::System::Boolean FOHBHIHFLMD; // 0x8D
	::System::Boolean _FirstFrameOcclusion_k__BackingField; // 0x8E
	::System::Boolean OGNJMLNMEMH; // 0x8F

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_DF249C0E36759C3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_DF249C0E36759C3F_OFFSET))(this, a1);
	}

	::System::Void Method_2_5484D998764BDD60(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_5484D998764BDD60_OFFSET))(this, a1, a2);
	}

	::Class_2_D87BFE4B9233352A_ClimbMoveResult Method_2_62EF504AE512C429(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Boolean& a4, ::System::Single& a5)
	{
		return ((::Class_2_D87BFE4B9233352A_ClimbMoveResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Boolean&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_62EF504AE512C429_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_67FE1E45920BC538(::UnityEngine::Vector3 a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_67FE1E45920BC538_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C8448179FEB34E1E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_C8448179FEB34E1E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_E52B7F78B553D90D(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_E52B7F78B553D90D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_75E7CAAFEC7D5918(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_75E7CAAFEC7D5918_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0F6506BADFC93779(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_0F6506BADFC93779_OFFSET))(this, a1, a2);
	}

	::Class_2_D87BFE4B9233352A_ClimbSegmentPassType Method_2_C59EE4BEDFED23F9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::Class_2_D87BFE4B9233352A_ClimbSegmentPassType(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_C59EE4BEDFED23F9_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_7C9C322C96F3C4A6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_7C9C322C96F3C4A6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_064D10072154189E(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_064D10072154189E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1A8E27A3DA815532(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_1A8E27A3DA815532_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F647B6F9507BF73F(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_F647B6F9507BF73F_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDCD653AD53D337B(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_FDCD653AD53D337B_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_C821E92C9A44CF30(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_C821E92C9A44CF30_OFFSET))(a1);
	}

	::System::Boolean Method_2_A835AB0FF207BB42(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_A835AB0FF207BB42_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_5AEC8C9EE262F230(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_5AEC8C9EE262F230_OFFSET))(a1);
	}

	static ::System::Single Method_2_E270A10BE3BCF880(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_METHOD_2_E270A10BE3BCF880_OFFSET))(a1);
	}

	::System::Boolean get_FirstFrameOcclusion()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_GET_FIRSTFRAMEOCCLUSION_OFFSET))(this);
	}

	::System::Void set_FirstFrameOcclusion(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D87BFE4B9233352A_SET_FIRSTFRAMEOCCLUSION_OFFSET))(this, a1);
	}
};
