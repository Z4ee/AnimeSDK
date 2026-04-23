#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_918;
class Class_1_494BD190B553B399;
class Class_2_99BB0B2A459A25C4;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLodSetting; }
namespace RPG::GameCore { class LodDetail; }

#define CLASS_1_F35AF634CCD4DC45_METHOD_1_00E60F1F99780728_OFFSET UNITYSDK_OFFSET(0x12B044B0)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_0D34B29874E881BD_OFFSET UNITYSDK_OFFSET(0x12B04F70)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_129032F3BB7A5AA1_OFFSET UNITYSDK_OFFSET(0x12B05880)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_176E030282F3053C_OFFSET UNITYSDK_OFFSET(0x12B05760)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_1F0AB91DB297B2B5_OFFSET UNITYSDK_OFFSET(0x12B04300)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_270C0C7CD4DC3FFA_OFFSET UNITYSDK_OFFSET(0x12B041B0)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_3CD8F9B0233AF481_OFFSET UNITYSDK_OFFSET(0x12B03D60)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_471569683E790EE5_1_OFFSET UNITYSDK_OFFSET(0x12B03B80)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_471569683E790EE5_OFFSET UNITYSDK_OFFSET(0x12B03A20)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_4A80BBB92B6FD38D_OFFSET UNITYSDK_OFFSET(0x12B04870)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_6929B89443F710B7_OFFSET UNITYSDK_OFFSET(0x12B049D0)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_69B138FD124BCA65_OFFSET UNITYSDK_OFFSET(0x12B04DA0)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_6D047DFA36D6B75B_OFFSET UNITYSDK_OFFSET(0x12B03FE0)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_7C3C606EA3940DC5_OFFSET UNITYSDK_OFFSET(0x12B03850)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0x12B03CE0)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_81EC382AB6020233_OFFSET UNITYSDK_OFFSET(0x12B05400)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_A4A9C09859726623_OFFSET UNITYSDK_OFFSET(0x12B05020)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_AF30A918498BB7F1_OFFSET UNITYSDK_OFFSET(0x12B05230)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12B051F0)
#define CLASS_1_F35AF634CCD4DC45_METHOD_1_CEBE254B0894039F_OFFSET UNITYSDK_OFFSET(0x12B04BE0)
#define CLASS_1_F35AF634CCD4DC45__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B05960)
#define CLASS_1_F35AF634CCD4DC45__CTOR_OFFSET UNITYSDK_OFFSET(0x12B03840)

inline static constexpr unsigned int Class_1_F35AF634CCD4DC45_TypeDefinitionIndex = 67966;

class Class_1_F35AF634CCD4DC45 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_8()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F35AF634CCD4DC45_TypeDefinitionIndex)->GetStaticField(0x1B760);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F35AF634CCD4DC45_TypeDefinitionIndex)->GetStaticField(0x7120);
	}
	static ::System::Single* StaticGet_Field_1_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F35AF634CCD4DC45_TypeDefinitionIndex)->GetStaticField(0x7124);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F35AF634CCD4DC45_TypeDefinitionIndex)->GetStaticField(0x7128);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F35AF634CCD4DC45_TypeDefinitionIndex)->GetStaticField(0x712C);
	}
	::RPG::Client::OpenWorld::StreamingLodSetting* Field_1_2; // 0x10
	::System::Single Field_1_5; // 0x18
	::UnityEngine::Vector3 Field_1_4; // 0x1C
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLodSetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLodSetting*))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45__CCTOR_OFFSET))();
	}

	::System::Void Method_1_7C3C606EA3940DC5(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_7C3C606EA3940DC5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_471569683E790EE5(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_471569683E790EE5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_471569683E790EE5_1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_471569683E790EE5_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_3CD8F9B0233AF481(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_3CD8F9B0233AF481_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Int32 Method_1_6D047DFA36D6B75B(::Class_2_99BB0B2A459A25C4* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::Class_2_99BB0B2A459A25C4*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_6D047DFA36D6B75B_OFFSET))(a1, a2, a3);
	}

	::System::Int32 Method_1_270C0C7CD4DC3FFA(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Rect a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_270C0C7CD4DC3FFA_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_00E60F1F99780728(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Boolean a7)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_00E60F1F99780728_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Single Method_1_4A80BBB92B6FD38D(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_4A80BBB92B6FD38D_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_6929B89443F710B7(::Class_0_16E4307DCC419505_918* a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Single a6)
	{
		return ((::System::Single(*)(::Class_0_16E4307DCC419505_918*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_6929B89443F710B7_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Single Method_1_69B138FD124BCA65(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_69B138FD124BCA65_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_0D34B29874E881BD(::Class_0_16E4307DCC419505_918* a1, ::UnityEngine::Rect a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::Class_0_16E4307DCC419505_918*, ::UnityEngine::Rect, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_0D34B29874E881BD_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_1F0AB91DB297B2B5(::Class_0_16E4307DCC419505_918* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Single(*)(::Class_0_16E4307DCC419505_918*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_1F0AB91DB297B2B5_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_CEBE254B0894039F(::Class_0_16E4307DCC419505_918* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::Class_0_16E4307DCC419505_918*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_CEBE254B0894039F_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_A4A9C09859726623(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Rect a2, ::System::Single a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Rect, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_A4A9C09859726623_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Int32 Method_1_AF30A918498BB7F1(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Int32(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_AF30A918498BB7F1_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_81EC382AB6020233(::Class_1_494BD190B553B399* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::Class_1_494BD190B553B399*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_81EC382AB6020233_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_129032F3BB7A5AA1(::RPG::GameCore::LodDetail* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LodDetail*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_129032F3BB7A5AA1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_176E030282F3053C(::RPG::GameCore::LodDetail* a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::RPG::GameCore::LodDetail*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F35AF634CCD4DC45_METHOD_1_176E030282F3053C_OFFSET))(a1, a2);
	}
};
