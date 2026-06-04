#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BC1F0DE405AE0D4.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_483ED67B5E0A21FB;
class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_EFECBF8C912C40AA_Class_1_9740546874D75D3B;
class Class_2_76556925F684DAD5_Class_1_9F59B1C537F88FE7;
class Class_2_76556925F684DAD5_Class_1_FAE584E97D05A74A;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_76556925F684DAD5_GET_INTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1363FFC0)
#define CLASS_2_76556925F684DAD5_GET_INTERACTIONRADIUS_OFFSET UNITYSDK_OFFSET(0x1363FFE0)
#define CLASS_2_76556925F684DAD5_METHOD_2_3532B2A759763961_OFFSET UNITYSDK_OFFSET(0x13640D00)
#define CLASS_2_76556925F684DAD5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13640F20)
#define CLASS_2_76556925F684DAD5_METHOD_2_64A5D81E1AA707CC_OFFSET UNITYSDK_OFFSET(0x13640750)
#define CLASS_2_76556925F684DAD5_METHOD_2_65F4D176AD70D378_OFFSET UNITYSDK_OFFSET(0x136403D0)
#define CLASS_2_76556925F684DAD5_METHOD_2_669256140B61F98F_OFFSET UNITYSDK_OFFSET(0x13640EB0)
#define CLASS_2_76556925F684DAD5_METHOD_2_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0x13640DE0)
#define CLASS_2_76556925F684DAD5_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x136406B0)
#define CLASS_2_76556925F684DAD5_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x13640000)
#define CLASS_2_76556925F684DAD5_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1363FFF0)
#define CLASS_2_76556925F684DAD5__CTOR_OFFSET UNITYSDK_OFFSET(0x13640010)

inline static constexpr unsigned int Class_2_76556925F684DAD5_TypeDefinitionIndex = 64809;

class Class_2_76556925F684DAD5 : public ::Class_1_2BC1F0DE405AE0D4
{
public:
	::System::Collections::Generic::List_1<::Class_1_9AAC3BB4FD7CE6FE*>* Field_2_0; // 0x80
	::Class_2_76556925F684DAD5_Class_1_FAE584E97D05A74A* Field_2_1; // 0x88
	::Class_2_76556925F684DAD5_Class_1_9F59B1C537F88FE7* Field_2_2; // 0x90
	::UnityEngine::Vector3 _InteractionPoint_k__BackingField; // 0x98
	::System::Single _InteractionRadius_k__BackingField; // 0xA4

	::System::Void _ctor(::Class_1_483ED67B5E0A21FB* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_483ED67B5E0A21FB*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingFactoryInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

	::System::Void Method_2_65F4D176AD70D378()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_65F4D176AD70D378_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::Class_1_9AAC3BB4FD7CE6FE* Method_2_64A5D81E1AA707CC(::System::Single a1)
	{
		return ((::Class_1_9AAC3BB4FD7CE6FE*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_64A5D81E1AA707CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_3532B2A759763961(::Class_1_9AAC3BB4FD7CE6FE* a1, ::Class_1_EFECBF8C912C40AA_Class_1_9740546874D75D3B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*, ::Class_1_EFECBF8C912C40AA_Class_1_9740546874D75D3B*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_3532B2A759763961_OFFSET))(this, a1, a2);
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
