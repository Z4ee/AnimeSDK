#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_4B21424E3D00C7BC.h"
#include "unitysdk/UnityEngine/PBDParticleHook.h"

class Class_2_0F138252A5783001;
class Class_2_167BB37617B940E3;
class Class_2_2F4CE9A3C30CD7F4;
class Class_2_EA995402651EF7A9;
class Class_3_2939A9182115D3D5;
class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F41D242A20F8FE06;
namespace MoleMole { class MonoEffect; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class PBDDeformer; }

#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0x13A45CA0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13A44160)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_33AEFB041A71ABC5_OFFSET UNITYSDK_OFFSET(0x13A46D30)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_3F6D1D5F2134A212_OFFSET UNITYSDK_OFFSET(0x13A44BD0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_3FCB3DDA3C58DE7A_OFFSET UNITYSDK_OFFSET(0x13A43C00)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_449943A901DF16B6_1_OFFSET UNITYSDK_OFFSET(0x13A45AE0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_449943A901DF16B6_OFFSET UNITYSDK_OFFSET(0x13A45750)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0x13A41AF0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13A437C0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x13A42A40)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x13A42300)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_7CB6E94FD1AB71A1_OFFSET UNITYSDK_OFFSET(0x13A44070)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x13A466E0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x13A44370)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_90F73FA93FD67147_OFFSET UNITYSDK_OFFSET(0x13A46740)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_914316E906F0DE73_OFFSET UNITYSDK_OFFSET(0x13A46BB0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_92A998451FF61049_OFFSET UNITYSDK_OFFSET(0x13A42DE0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x13A43660)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x13A45430)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_A4C9499E519D205D_OFFSET UNITYSDK_OFFSET(0x13A419F0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x13A441C0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_C3EF098065480BAC_OFFSET UNITYSDK_OFFSET(0x13A422B0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_C650F1D784C21D72_1_OFFSET UNITYSDK_OFFSET(0x13A469E0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_C650F1D784C21D72_OFFSET UNITYSDK_OFFSET(0x13A45910)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x13A45CF0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13A456C0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x13A46CA0)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A43B70)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x13A41B60)
#define CLASS_2_9B5CFD640DDF761C_9_METHOD_2_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x13A454C0)
#define CLASS_2_9B5CFD640DDF761C_9__CTOR_OFFSET UNITYSDK_OFFSET(0x13A436F0)

inline static constexpr unsigned int Class_2_9B5CFD640DDF761C_9_TypeDefinitionIndex = 73032;

class Class_2_9B5CFD640DDF761C_9 : public ::Class_1_C836D00248E6EFFE
{
public:
	// static const ::System::Single Field_2_34; // 0x0
	::Il2CppArray<::UnityEngine::PBDDeformer*>* Field_2_1; // 0x50
	::System::Collections::Generic::List_1<::Struct_2_4B21424E3D00C7BC>* Field_2_11; // 0x58
	::MoleMole::EntityHandle Field_2_10; // 0x60
	::MoleMole::MonoEffect* Field_2_3; // 0x70
	::Il2CppArray<::Il2CppArray<::UnityEngine::PBDParticleHook>*>* Field_2_2; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_29; // 0x80
	::Class_3_2939A9182115D3D5* Field_2_0; // 0x88
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_12; // 0x90
	::UnityEngine::AnimationCurve* Field_2_18; // 0x98
	::Class_3_D6DA183EF60F02C8* Field_2_4; // 0xA0
	::Class_3_4875884AB352B34E* Field_2_5; // 0xA8
	::System::Collections::Generic::List_1<::System::Boolean>* Field_2_13; // 0xB0
	::System::Single Field_2_20; // 0xB8
	::System::Single Field_2_23; // 0xBC
	::System::Single Field_2_16; // 0xC0
	::System::Boolean Field_2_32; // 0xC4
	::System::Boolean Field_2_19; // 0xC5
	::System::Boolean Field_2_6; // 0xC6
	::System::Boolean Field_2_30; // 0xC7
	::System::Boolean Field_2_8; // 0xC8
	::System::Boolean Field_2_28; // 0xC9
	::System::Boolean Field_2_21; // 0xCA
	::System::Boolean Field_2_26; // 0xCB
	::System::Single Field_2_17; // 0xCC
	::System::Single Field_2_7; // 0xD0
	::System::Boolean Field_2_24; // 0xD4
	::System::Boolean Field_2_9; // 0xD5
	::System::UInt32 Field_2_25; // 0xD8
	::System::Single Field_2_33; // 0xDC
	::System::Single Field_2_22; // 0xE0
	::System::Single Field_2_31; // 0xE4
	::System::UInt32 Field_2_27; // 0xE8
	::System::Single Field_2_14; // 0xEC
	::System::Single Field_2_15; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4C9499E519D205D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_A4C9499E519D205D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4BE99DDCF7F1FD88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_4BE99DDCF7F1FD88_OFFSET))(this);
	}

	::System::Void Method_2_C3EF098065480BAC(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_C3EF098065480BAC_OFFSET))(this, a1);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3FCB3DDA3C58DE7A(::UnityEngine::PBDDeformer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDDeformer*))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_3FCB3DDA3C58DE7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_7CB6E94FD1AB71A1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_7CB6E94FD1AB71A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Void Method_2_92A998451FF61049(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_92A998451FF61049_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_449943A901DF16B6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_449943A901DF16B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C650F1D784C21D72(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_C650F1D784C21D72_OFFSET))(this, a1);
	}

	::System::Void Method_2_449943A901DF16B6_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_449943A901DF16B6_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_3F6D1D5F2134A212(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_3F6D1D5F2134A212_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C650F1D784C21D72_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_C650F1D784C21D72_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_90F73FA93FD67147(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_90F73FA93FD67147_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_914316E906F0DE73(::UnityEngine::PBDDeformer* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDDeformer*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_914316E906F0DE73_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_33AEFB041A71ABC5(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_9B5CFD640DDF761C_9_METHOD_2_33AEFB041A71ABC5_OFFSET))(this, a1, a2, a3, a4);
	}
};
