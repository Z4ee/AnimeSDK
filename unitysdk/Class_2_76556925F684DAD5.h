#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_838558A14E485175.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_B91D144796FC50A3;
class Class_1_F7445212B44E5397_Class_1_9740546874D75D3B;
class Class_2_76556925F684DAD5_Class_1_7378FCB590CC7F2E;
class Class_2_76556925F684DAD5_Class_1_858AFF2C507EA5BC;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_76556925F684DAD5_GET_INTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x11557FD0)
#define CLASS_2_76556925F684DAD5_GET_INTERACTIONRADIUS_OFFSET UNITYSDK_OFFSET(0x11557FF0)
#define CLASS_2_76556925F684DAD5_METHOD_2_23CFF62D00854CE3_OFFSET UNITYSDK_OFFSET(0x11558C40)
#define CLASS_2_76556925F684DAD5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11558E50)
#define CLASS_2_76556925F684DAD5_METHOD_2_64A5D81E1AA707CC_OFFSET UNITYSDK_OFFSET(0x11558730)
#define CLASS_2_76556925F684DAD5_METHOD_2_669256140B61F98F_OFFSET UNITYSDK_OFFSET(0x11558DE0)
#define CLASS_2_76556925F684DAD5_METHOD_2_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0x11558D10)
#define CLASS_2_76556925F684DAD5_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x11558690)
#define CLASS_2_76556925F684DAD5_METHOD_2_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x115583F0)
#define CLASS_2_76556925F684DAD5_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x11558010)
#define CLASS_2_76556925F684DAD5_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11558000)
#define CLASS_2_76556925F684DAD5__CTOR_OFFSET UNITYSDK_OFFSET(0x11558020)

inline static constexpr unsigned int Class_2_76556925F684DAD5_TypeDefinitionIndex = 56644;

class Class_2_76556925F684DAD5 : public ::Class_1_838558A14E485175
{
public:
	::Class_2_76556925F684DAD5_Class_1_858AFF2C507EA5BC* Field_2_3; // 0x80
	::System::Collections::Generic::List_1<::Class_1_9AAC3BB4FD7CE6FE*>* Field_2_4; // 0x88
	::Class_2_76556925F684DAD5_Class_1_7378FCB590CC7F2E* Field_2_2; // 0x90
	::System::Single _InteractionRadius_k__BackingField; // 0x98
	::UnityEngine::Vector3 _InteractionPoint_k__BackingField; // 0x9C

	::System::Void _ctor(::Class_1_B91D144796FC50A3* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B91D144796FC50A3*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 get_InteractionPoint()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_GET_INTERACTIONPOINT_OFFSET))(this);
	}

	::System::Single get_InteractionRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_GET_INTERACTIONRADIUS_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::EPedestrianV2MotionState Method_2_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_C3C9BF311C318908_OFFSET))(this);
	}

	::System::Void Method_2_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::Class_1_9AAC3BB4FD7CE6FE* Method_2_64A5D81E1AA707CC(::System::Single a1)
	{
		return ((::Class_1_9AAC3BB4FD7CE6FE*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_64A5D81E1AA707CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_23CFF62D00854CE3(::Class_1_9AAC3BB4FD7CE6FE* a1, ::Class_1_F7445212B44E5397_Class_1_9740546874D75D3B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*, ::Class_1_F7445212B44E5397_Class_1_9740546874D75D3B*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_23CFF62D00854CE3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3EF4ED894EBFFC3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_A3EF4ED894EBFFC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_669256140B61F98F(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_669256140B61F98F_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
