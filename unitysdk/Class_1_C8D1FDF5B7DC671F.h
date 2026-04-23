#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C8D1FDF5B7DC671F_Struct_2_EF71484D6161BCE0.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7D9075FD1A3992DE;
class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_CCB0D6744495158D;
namespace RPG::GameCore { class LevelPedestrianV2RoadInfo; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C8D1FDF5B7DC671F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12520DF0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_ENDCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x12522E00)
#define CLASS_1_C8D1FDF5B7DC671F_GET_HASINVISIBLESEGMENT_OFFSET UNITYSDK_OFFSET(0x12522FA0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_PEDESTRIANMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x12522E30)
#define CLASS_1_C8D1FDF5B7DC671F_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x12522C90)
#define CLASS_1_C8D1FDF5B7DC671F_GET_POINTENDINDEX_OFFSET UNITYSDK_OFFSET(0x12522CB0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_POINTSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x12522CA0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_ROADINDEX_OFFSET UNITYSDK_OFFSET(0x12522C80)
#define CLASS_1_C8D1FDF5B7DC671F_GET_STARTCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x12522DE0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_030D215FD570A70B_OFFSET UNITYSDK_OFFSET(0x12521640)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x12522EA0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_14E13B239161F445_OFFSET UNITYSDK_OFFSET(0x12521A60)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x12522E20)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_31B71B6D307F7F0C_1_OFFSET UNITYSDK_OFFSET(0x12522D50)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_31B71B6D307F7F0C_OFFSET UNITYSDK_OFFSET(0x12522CC0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0x12521B60)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_3976AB8D58C7574A_OFFSET UNITYSDK_OFFSET(0x12521F80)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_5F6398776E49CD87_1_OFFSET UNITYSDK_OFFSET(0x12521A00)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_5F6398776E49CD87_OFFSET UNITYSDK_OFFSET(0x12522BC0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6798E56998F469DB_OFFSET UNITYSDK_OFFSET(0x12521DD0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6B47CDE3B34D5A39_1_OFFSET UNITYSDK_OFFSET(0x12521410)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6B47CDE3B34D5A39_OFFSET UNITYSDK_OFFSET(0x12521390)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6CE471172CD2B7AA_OFFSET UNITYSDK_OFFSET(0x125220A0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_1_OFFSET UNITYSDK_OFFSET(0x12521110)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_2_OFFSET UNITYSDK_OFFSET(0x125211B0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_3_OFFSET UNITYSDK_OFFSET(0x12521250)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_4_OFFSET UNITYSDK_OFFSET(0x125212F0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_OFFSET UNITYSDK_OFFSET(0x12521070)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x12522E50)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_9E1615EC5DA5116E_OFFSET UNITYSDK_OFFSET(0x12521C60)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_A17B38030E623502_OFFSET UNITYSDK_OFFSET(0x125214B0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_B429CB2480CB0B1D_OFFSET UNITYSDK_OFFSET(0x125215B0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_BA1A163457250A51_OFFSET UNITYSDK_OFFSET(0x12521BF0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D38CD9F4ED9A008E_OFFSET UNITYSDK_OFFSET(0x12522400)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D40B9084A09E068D_OFFSET UNITYSDK_OFFSET(0x125227F0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D7DDA895983CCCB2_1_OFFSET UNITYSDK_OFFSET(0x125223B0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0x12521010)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_E4D7C1998AA82588_OFFSET UNITYSDK_OFFSET(0x12520E70)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_EFEBD2410784C1EC_OFFSET UNITYSDK_OFFSET(0x12521730)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F8ECF45606EE91F8_OFFSET UNITYSDK_OFFSET(0x12522C20)
#define CLASS_1_C8D1FDF5B7DC671F_SET_ENDCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x12522E10)
#define CLASS_1_C8D1FDF5B7DC671F_SET_PEDESTRIANMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x12522E40)
#define CLASS_1_C8D1FDF5B7DC671F_SET_STARTCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x12522DF0)
#define CLASS_1_C8D1FDF5B7DC671F__CTOR_OFFSET UNITYSDK_OFFSET(0x125201F0)

inline static constexpr unsigned int Class_1_C8D1FDF5B7DC671F_TypeDefinitionIndex = 63886;

class Class_1_C8D1FDF5B7DC671F : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::UnityEngine::GameObject* Field_1_10; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_9AAC3BB4FD7CE6FE*>* Field_1_14; // 0x18
	::Class_1_7D9075FD1A3992DE* Field_1_11; // 0x20
	::Class_1_CCB0D6744495158D* _EndConnectIntersection_k__BackingField; // 0x28
	::RPG::GameCore::LevelPedestrianV2RoadInfo* Field_1_12; // 0x30
	::Class_1_CCB0D6744495158D* _StartConnectIntersection_k__BackingField; // 0x38
	::Il2CppArray<::Class_1_C8D1FDF5B7DC671F_Struct_2_EF71484D6161BCE0>* Field_1_13; // 0x40
	::System::Int32 _RoadIndex_k__BackingField; // 0x48
	::System::Int32 _PointEndIndex_k__BackingField; // 0x4C
	::System::Int32 _PointCount_k__BackingField; // 0x50
	::System::Boolean _HasInvisibleSegment_k__BackingField; // 0x54
	::System::Int32 _PedestrianMaxCount_k__BackingField; // 0x58
	::System::Int32 _PointStartIndex_k__BackingField; // 0x5C

	::System::Void _ctor(::Class_1_7D9075FD1A3992DE* a1, ::RPG::GameCore::LevelPedestrianV2RoadInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D9075FD1A3992DE*, ::RPG::GameCore::LevelPedestrianV2RoadInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_1_E4D7C1998AA82588()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_E4D7C1998AA82588_OFFSET))(this);
	}

	::System::Boolean Method_1_D7DDA895983CCCB2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D7DDA895983CCCB2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_71DB3F326B4AC8CD(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_71DB3F326B4AC8CD_1(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_71DB3F326B4AC8CD_2(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_71DB3F326B4AC8CD_3(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_71DB3F326B4AC8CD_4(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_4_OFFSET))(this, a1);
	}

	::System::Single Method_1_6B47CDE3B34D5A39(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6B47CDE3B34D5A39_OFFSET))(this, a1);
	}

	::System::Single Method_1_6B47CDE3B34D5A39_1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6B47CDE3B34D5A39_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_A17B38030E623502(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_A17B38030E623502_OFFSET))(this, a1);
	}

	::System::Single Method_1_B429CB2480CB0B1D(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_B429CB2480CB0B1D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_030D215FD570A70B(::System::Int32 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_030D215FD570A70B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_EFEBD2410784C1EC(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_EFEBD2410784C1EC_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_14E13B239161F445(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_14E13B239161F445_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_36199BBD14A68CEC(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_36199BBD14A68CEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA1A163457250A51(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_BA1A163457250A51_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E1615EC5DA5116E(::System::Int32 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_9E1615EC5DA5116E_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_6798E56998F469DB(::Struct_2_085541A9CFF64383 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6798E56998F469DB_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_3976AB8D58C7574A(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_3976AB8D58C7574A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_6CE471172CD2B7AA(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6CE471172CD2B7AA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_D7DDA895983CCCB2_1(::System::Boolean a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D7DDA895983CCCB2_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D38CD9F4ED9A008E(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D38CD9F4ED9A008E_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_D40B9084A09E068D(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D40B9084A09E068D_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_5F6398776E49CD87(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_5F6398776E49CD87_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_5F6398776E49CD87_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_5F6398776E49CD87_1_OFFSET))(this, a1, a2);
	}

	::Class_1_CCB0D6744495158D* Method_1_F8ECF45606EE91F8(::System::Boolean a1)
	{
		return ((::Class_1_CCB0D6744495158D*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F8ECF45606EE91F8_OFFSET))(this, a1);
	}

	::System::Int32 get_RoadIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_ROADINDEX_OFFSET))(this);
	}

	::System::Int32 get_PointCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_POINTCOUNT_OFFSET))(this);
	}

	::System::Int32 get_PointStartIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_POINTSTARTINDEX_OFFSET))(this);
	}

	::System::Int32 get_PointEndIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_POINTENDINDEX_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_31B71B6D307F7F0C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_31B71B6D307F7F0C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_31B71B6D307F7F0C_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_31B71B6D307F7F0C_1_OFFSET))(this);
	}

	::Class_1_CCB0D6744495158D* get_StartConnectIntersection()
	{
		return ((::Class_1_CCB0D6744495158D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_STARTCONNECTINTERSECTION_OFFSET))(this);
	}

	::System::Void set_StartConnectIntersection(::Class_1_CCB0D6744495158D* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CCB0D6744495158D*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_SET_STARTCONNECTINTERSECTION_OFFSET))(this, value);
	}

	::Class_1_CCB0D6744495158D* get_EndConnectIntersection()
	{
		return ((::Class_1_CCB0D6744495158D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_ENDCONNECTINTERSECTION_OFFSET))(this);
	}

	::System::Void set_EndConnectIntersection(::Class_1_CCB0D6744495158D* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CCB0D6744495158D*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_SET_ENDCONNECTINTERSECTION_OFFSET))(this, value);
	}

	::Class_1_7D9075FD1A3992DE* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7D9075FD1A3992DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Int32 get_PedestrianMaxCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_PEDESTRIANMAXCOUNT_OFFSET))(this);
	}

	::System::Void set_PedestrianMaxCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_SET_PEDESTRIANMAXCOUNT_OFFSET))(this, value);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Single Method_1_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_124E7DAB85EAFECD_OFFSET))(this);
	}

	::System::Boolean get_HasInvisibleSegment()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_HASINVISIBLESEGMENT_OFFSET))(this);
	}
};
