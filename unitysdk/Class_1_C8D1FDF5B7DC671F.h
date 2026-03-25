#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C8D1FDF5B7DC671F_Struct_2_337F30C7300DA789.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_838558A14E485175;
class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_B91D144796FC50A3;
namespace RPG::GameCore { class LevelPedestrianV2RoadInfo; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C8D1FDF5B7DC671F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ABB650)
#define CLASS_1_C8D1FDF5B7DC671F_GET_ENDCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x8ABD640)
#define CLASS_1_C8D1FDF5B7DC671F_GET_HASINVISIBLESEGMENT_OFFSET UNITYSDK_OFFSET(0x8ABD7E0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_PEDESTRIANMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x8ABD670)
#define CLASS_1_C8D1FDF5B7DC671F_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x8ABD4D0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_POINTENDINDEX_OFFSET UNITYSDK_OFFSET(0x8ABD4F0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_POINTSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x8ABD4E0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_ROADINDEX_OFFSET UNITYSDK_OFFSET(0x8ABD4C0)
#define CLASS_1_C8D1FDF5B7DC671F_GET_STARTCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x8ABD620)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_030D215FD570A70B_OFFSET UNITYSDK_OFFSET(0x8ABBE90)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x8ABD6E0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_14E13B239161F445_OFFSET UNITYSDK_OFFSET(0x8ABC2A0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x8ABD660)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_31B71B6D307F7F0C_1_OFFSET UNITYSDK_OFFSET(0x8ABD590)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_31B71B6D307F7F0C_OFFSET UNITYSDK_OFFSET(0x8ABD500)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_36199BBD14A68CEC_OFFSET UNITYSDK_OFFSET(0x8ABC3A0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_3976AB8D58C7574A_OFFSET UNITYSDK_OFFSET(0x8ABC7C0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_5F6398776E49CD87_1_OFFSET UNITYSDK_OFFSET(0x8ABC240)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_5F6398776E49CD87_OFFSET UNITYSDK_OFFSET(0x8ABD400)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6798E56998F469DB_OFFSET UNITYSDK_OFFSET(0x8ABC610)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6B47CDE3B34D5A39_1_OFFSET UNITYSDK_OFFSET(0x8ABBC60)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6B47CDE3B34D5A39_OFFSET UNITYSDK_OFFSET(0x8ABBBE0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_6CE471172CD2B7AA_OFFSET UNITYSDK_OFFSET(0x8ABC8E0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_1_OFFSET UNITYSDK_OFFSET(0x8ABB960)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_2_OFFSET UNITYSDK_OFFSET(0x8ABBA00)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_3_OFFSET UNITYSDK_OFFSET(0x8ABBAA0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_4_OFFSET UNITYSDK_OFFSET(0x8ABBB40)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_71DB3F326B4AC8CD_OFFSET UNITYSDK_OFFSET(0x8ABB8C0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x8ABD690)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_9E1615EC5DA5116E_OFFSET UNITYSDK_OFFSET(0x8ABC4A0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_A17B38030E623502_OFFSET UNITYSDK_OFFSET(0x8ABBD00)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_B429CB2480CB0B1D_OFFSET UNITYSDK_OFFSET(0x8ABBE00)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_BA1A163457250A51_OFFSET UNITYSDK_OFFSET(0x8ABC430)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D38CD9F4ED9A008E_OFFSET UNITYSDK_OFFSET(0x8ABCC40)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D40B9084A09E068D_OFFSET UNITYSDK_OFFSET(0x8ABD030)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D7DDA895983CCCB2_1_OFFSET UNITYSDK_OFFSET(0x8ABCBF0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0x8ABB860)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_E4D7C1998AA82588_OFFSET UNITYSDK_OFFSET(0x8ABB6C0)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_EFEBD2410784C1EC_OFFSET UNITYSDK_OFFSET(0x8ABBF80)
#define CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F8ECF45606EE91F8_OFFSET UNITYSDK_OFFSET(0x8ABD460)
#define CLASS_1_C8D1FDF5B7DC671F_SET_ENDCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x8ABD650)
#define CLASS_1_C8D1FDF5B7DC671F_SET_PEDESTRIANMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x8ABD680)
#define CLASS_1_C8D1FDF5B7DC671F_SET_STARTCONNECTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x8ABD630)
#define CLASS_1_C8D1FDF5B7DC671F__CTOR_OFFSET UNITYSDK_OFFSET(0x8ABAA80)

inline static constexpr unsigned int Class_1_C8D1FDF5B7DC671F_TypeDefinitionIndex = 56642;

class Class_1_C8D1FDF5B7DC671F : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::RPG::GameCore::LevelPedestrianV2RoadInfo* Field_1_12; // 0x10
	::Il2CppArray<::Class_1_C8D1FDF5B7DC671F_Struct_2_337F30C7300DA789>* Field_1_13; // 0x18
	::Class_1_838558A14E485175* _EndConnectIntersection_k__BackingField; // 0x20
	::UnityEngine::GameObject* Field_1_10; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_1_9AAC3BB4FD7CE6FE*>* Field_1_14; // 0x30
	::Class_1_B91D144796FC50A3* Field_1_11; // 0x38
	::Class_1_838558A14E485175* _StartConnectIntersection_k__BackingField; // 0x40
	::System::Int32 _RoadIndex_k__BackingField; // 0x48
	::System::Int32 _PointStartIndex_k__BackingField; // 0x4C
	::System::Int32 _PedestrianMaxCount_k__BackingField; // 0x50
	::System::Boolean _HasInvisibleSegment_k__BackingField; // 0x54
	::System::Int32 _PointEndIndex_k__BackingField; // 0x58
	::System::Int32 _PointCount_k__BackingField; // 0x5C

	::System::Void _ctor(::Class_1_B91D144796FC50A3* a1, ::RPG::GameCore::LevelPedestrianV2RoadInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B91D144796FC50A3*, ::RPG::GameCore::LevelPedestrianV2RoadInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

	::Class_1_838558A14E485175* Method_1_F8ECF45606EE91F8(::System::Boolean a1)
	{
		return ((::Class_1_838558A14E485175*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_F8ECF45606EE91F8_OFFSET))(this, a1);
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

	::Class_1_838558A14E485175* get_StartConnectIntersection()
	{
		return ((::Class_1_838558A14E485175*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_STARTCONNECTINTERSECTION_OFFSET))(this);
	}

	::System::Void set_StartConnectIntersection(::Class_1_838558A14E485175* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_838558A14E485175*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_SET_STARTCONNECTINTERSECTION_OFFSET))(this, value);
	}

	::Class_1_838558A14E485175* get_EndConnectIntersection()
	{
		return ((::Class_1_838558A14E485175*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_GET_ENDCONNECTINTERSECTION_OFFSET))(this);
	}

	::System::Void set_EndConnectIntersection(::Class_1_838558A14E485175* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_838558A14E485175*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_SET_ENDCONNECTINTERSECTION_OFFSET))(this, value);
	}

	::Class_1_B91D144796FC50A3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B91D144796FC50A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_METHOD_1_24748FC20F375725_OFFSET))(this);
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
