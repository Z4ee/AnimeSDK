#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37995CCC23FA9499.h"
#include "unitysdk/Class_2_822F78B02509E354_Struct_2_6E17407C21482385.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimView; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_822F78B02509E354_CLEAR_OFFSET UNITYSDK_OFFSET(0x16AFDF90)
#define CLASS_2_822F78B02509E354_METHOD_2_2B85DC63E89AB50D_OFFSET UNITYSDK_OFFSET(0x16AFE780)
#define CLASS_2_822F78B02509E354_METHOD_2_74CABC38C874F195_OFFSET UNITYSDK_OFFSET(0x16AFE330)
#define CLASS_2_822F78B02509E354_METHOD_2_7590FA1814433CB8_OFFSET UNITYSDK_OFFSET(0x16AFEC70)
#define CLASS_2_822F78B02509E354_METHOD_2_927D500D109F19E2_OFFSET UNITYSDK_OFFSET(0x16AFE4E0)
#define CLASS_2_822F78B02509E354_METHOD_2_BE5FE8390DD64004_OFFSET UNITYSDK_OFFSET(0x16AFEAE0)
#define CLASS_2_822F78B02509E354_METHOD_2_C5B966337BB47520_OFFSET UNITYSDK_OFFSET(0x16AFED00)
#define CLASS_2_822F78B02509E354_METHOD_2_C73972D70B679A3D_OFFSET UNITYSDK_OFFSET(0x16AFE0D0)
#define CLASS_2_822F78B02509E354_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16AFF290)
#define CLASS_2_822F78B02509E354__CTOR_OFFSET UNITYSDK_OFFSET(0x16AFF2D0)

inline static constexpr unsigned int Class_2_822F78B02509E354_TypeDefinitionIndex = 76401;

class Class_2_822F78B02509E354 : public ::Class_1_37995CCC23FA9499
{
public:
	static ::System::Int32* StaticGet_HLNJFOJALNB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_822F78B02509E354_TypeDefinitionIndex)->GetStaticField(0x12E60);
	}
	::RPG::PoolHashSet_1<::System::UInt32>* BAGOBLJNCBD; // 0x20
	::RPG::PoolDictionary_2<::System::Int32, ::Class_2_822F78B02509E354_Struct_2_6E17407C21482385>* MNBHCHNNKLG; // 0x28
	::System::Boolean OLMPKOFCIHF; // 0x30
	::System::UInt32 IGCPFAEHOBD; // 0x34
	::Struct_2_EAC1BB0F093534A5 MJKLCJGJEIG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_822F78B02509E354__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_822F78B02509E354_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_74CABC38C874F195(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_822F78B02509E354_METHOD_2_74CABC38C874F195_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_927D500D109F19E2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_822F78B02509E354_METHOD_2_927D500D109F19E2_OFFSET))(this);
	}

	::System::Void Method_2_C73972D70B679A3D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_822F78B02509E354_METHOD_2_C73972D70B679A3D_OFFSET))(this);
	}

	::System::Void Method_2_7590FA1814433CB8(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_822F78B02509E354_METHOD_2_7590FA1814433CB8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_BE5FE8390DD64004(::System::UInt32 a1, ::RPG::Client::LittleGame::FiveDim::FiveDimView*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::FiveDim::FiveDimView*&))((::PBYTE)hIl2Cpp + CLASS_2_822F78B02509E354_METHOD_2_BE5FE8390DD64004_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_2_C5B966337BB47520(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_822F78B02509E354_METHOD_2_C5B966337BB47520_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B85DC63E89AB50D(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_822F78B02509E354_METHOD_2_2B85DC63E89AB50D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_822F78B02509E354_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
