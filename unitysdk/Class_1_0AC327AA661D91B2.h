#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3EB2168D97754EAD;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_1_OFFSET UNITYSDK_OFFSET(0x18DD29C0)
#define CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x18DD2970)
#define CLASS_1_0AC327AA661D91B2_METHOD_1_E1E7D995CAEC23CC_OFFSET UNITYSDK_OFFSET(0x18DD2A10)
#define CLASS_1_0AC327AA661D91B2_METHOD_1_EBE83CCB4253C8D2_OFFSET UNITYSDK_OFFSET(0x18DD2A80)
#define CLASS_1_0AC327AA661D91B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DD2A70)
#define CLASS_1_0AC327AA661D91B2__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD2A60)

inline static constexpr unsigned int Class_1_0AC327AA661D91B2_TypeDefinitionIndex = 79358;

class Class_1_0AC327AA661D91B2 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AC327AA661D91B2_TypeDefinitionIndex)->GetStaticField(0xC720);
	}
	::Class_3_3EB2168D97754EAD* Field_1_7; // 0x10
	::Class_5_A6F8D19602712D95* Field_1_6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2__CCTOR_OFFSET))();
	}

	::System::Void Method_1_6B6AE2B3E1C3264F(::Class_3_3EB2168D97754EAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3EB2168D97754EAD*))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B6AE2B3E1C3264F_1(::Class_3_3EB2168D97754EAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3EB2168D97754EAD*))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1E7D995CAEC23CC(::Class_3_3EB2168D97754EAD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3EB2168D97754EAD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_E1E7D995CAEC23CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBE83CCB4253C8D2(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_EBE83CCB4253C8D2_OFFSET))(this, a1);
	}
};
