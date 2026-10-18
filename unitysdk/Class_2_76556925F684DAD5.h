#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BC1F0DE405AE0D4.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_483ED67B5E0A21FB;
class Class_1_9BAFBE9EEC7CF1E0_Class_1_9740546874D75D3B;
class Class_1_B87B48EBDCE76E87;
class Class_2_76556925F684DAD5_Class_1_9F59B1C537F88FE7;
class Class_2_76556925F684DAD5_Class_1_FAE584E97D05A74A;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingFactoryInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_76556925F684DAD5_GET_INTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x156B9B70)
#define CLASS_2_76556925F684DAD5_GET_INTERACTIONRADIUS_OFFSET UNITYSDK_OFFSET(0x156B9B90)
#define CLASS_2_76556925F684DAD5_METHOD_2_64A5D81E1AA707CC_OFFSET UNITYSDK_OFFSET(0x156BA360)
#define CLASS_2_76556925F684DAD5_METHOD_2_65F4D176AD70D378_OFFSET UNITYSDK_OFFSET(0x156B9F80)
#define CLASS_2_76556925F684DAD5_METHOD_2_8840795B553A56F0_OFFSET UNITYSDK_OFFSET(0x156BA910)
#define CLASS_2_76556925F684DAD5_METHOD_2_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0x156BAA60)
#define CLASS_2_76556925F684DAD5_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x156BA2C0)
#define CLASS_2_76556925F684DAD5_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x156B9BB0)
#define CLASS_2_76556925F684DAD5_METHOD_2_CD64FADAE3A9747A_OFFSET UNITYSDK_OFFSET(0x156BAB30)
#define CLASS_2_76556925F684DAD5_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x156B9BA0)
#define CLASS_2_76556925F684DAD5__CTOR_OFFSET UNITYSDK_OFFSET(0x156B9BC0)

inline static constexpr unsigned int Class_2_76556925F684DAD5_TypeDefinitionIndex = 69306;

class Class_2_76556925F684DAD5 : public ::Class_1_2BC1F0DE405AE0D4
{
public:
	::Class_2_76556925F684DAD5_Class_1_FAE584E97D05A74A* AEPKGAALNLN; // 0x80
	::Class_2_76556925F684DAD5_Class_1_9F59B1C537F88FE7* MFHNOKFDJBE; // 0x88
	::System::Collections::Generic::List_1<::Class_1_B87B48EBDCE76E87*>* FHPFKPGCCBA; // 0x90
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

	::Class_1_B87B48EBDCE76E87* Method_2_64A5D81E1AA707CC(::System::Single a1)
	{
		return ((::Class_1_B87B48EBDCE76E87*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_64A5D81E1AA707CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_8840795B553A56F0(::Class_1_B87B48EBDCE76E87* a1, ::Class_1_9BAFBE9EEC7CF1E0_Class_1_9740546874D75D3B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::Class_1_9BAFBE9EEC7CF1E0_Class_1_9740546874D75D3B*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_8840795B553A56F0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A3EF4ED894EBFFC3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_A3EF4ED894EBFFC3_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD64FADAE3A9747A(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_76556925F684DAD5_METHOD_2_CD64FADAE3A9747A_OFFSET))(this, a1);
	}
};
