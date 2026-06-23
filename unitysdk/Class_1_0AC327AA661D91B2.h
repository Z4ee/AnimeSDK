#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7E6A0C4EA6BF05CC;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_1_OFFSET UNITYSDK_OFFSET(0x114395D0)
#define CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x11439580)
#define CLASS_1_0AC327AA661D91B2_METHOD_1_E1E7D995CAEC23CC_OFFSET UNITYSDK_OFFSET(0x11439620)
#define CLASS_1_0AC327AA661D91B2_METHOD_1_EBE83CCB4253C8D2_OFFSET UNITYSDK_OFFSET(0x11439690)
#define CLASS_1_0AC327AA661D91B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x11439680)
#define CLASS_1_0AC327AA661D91B2__CTOR_OFFSET UNITYSDK_OFFSET(0x11439670)

inline static constexpr unsigned int Class_1_0AC327AA661D91B2_TypeDefinitionIndex = 47897;

class Class_1_0AC327AA661D91B2 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AC327AA661D91B2_TypeDefinitionIndex)->GetStaticField(0x11300);
	}
	::Class_5_A6F8D19602712D95* Field_1_2; // 0x10
	::Class_3_7E6A0C4EA6BF05CC* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2__CCTOR_OFFSET))();
	}

	::System::Void Method_1_6B6AE2B3E1C3264F(::Class_3_7E6A0C4EA6BF05CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6A0C4EA6BF05CC*))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B6AE2B3E1C3264F_1(::Class_3_7E6A0C4EA6BF05CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6A0C4EA6BF05CC*))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_6B6AE2B3E1C3264F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1E7D995CAEC23CC(::Class_3_7E6A0C4EA6BF05CC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6A0C4EA6BF05CC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_E1E7D995CAEC23CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBE83CCB4253C8D2(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_0AC327AA661D91B2_METHOD_1_EBE83CCB4253C8D2_OFFSET))(this, a1);
	}
};
