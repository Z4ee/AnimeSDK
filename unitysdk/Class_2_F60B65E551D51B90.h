#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CF741C7505FDF9F1.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_41D874CCDF2CE0C9_1;
class Class_1_7F2F768DC85F0AF5;
class Class_1_B5ED7EF1795E0962;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_F60B65E551D51B90_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x166576F0)
#define CLASS_2_F60B65E551D51B90_METHOD_2_22DA29EA763DF7DB_OFFSET UNITYSDK_OFFSET(0x16656E20)
#define CLASS_2_F60B65E551D51B90_METHOD_2_693CFB3F872C2BEB_OFFSET UNITYSDK_OFFSET(0x16657090)
#define CLASS_2_F60B65E551D51B90_METHOD_2_7289E29DFD3999B5_OFFSET UNITYSDK_OFFSET(0x16657250)
#define CLASS_2_F60B65E551D51B90_METHOD_2_7E1B94876ACF0E2A_OFFSET UNITYSDK_OFFSET(0x16657660)
#define CLASS_2_F60B65E551D51B90_METHOD_2_8AE88CC79AC0221D_1_OFFSET UNITYSDK_OFFSET(0x16657530)
#define CLASS_2_F60B65E551D51B90_METHOD_2_8AE88CC79AC0221D_OFFSET UNITYSDK_OFFSET(0x166571A0)
#define CLASS_2_F60B65E551D51B90_METHOD_2_9CC9F3E0C642B5C8_OFFSET UNITYSDK_OFFSET(0x16656C60)
#define CLASS_2_F60B65E551D51B90_METHOD_2_DAA09F3D3A863683_OFFSET UNITYSDK_OFFSET(0x16657330)
#define CLASS_2_F60B65E551D51B90_METHOD_2_E49438593C33DE3B_OFFSET UNITYSDK_OFFSET(0x166575E0)
#define CLASS_2_F60B65E551D51B90_METHOD_2_F7A639EA76D22DAB_OFFSET UNITYSDK_OFFSET(0x166566D0)
#define CLASS_2_F60B65E551D51B90__CCTOR_OFFSET UNITYSDK_OFFSET(0x16657760)
#define CLASS_2_F60B65E551D51B90__CTOR_OFFSET UNITYSDK_OFFSET(0x16656660)

inline static constexpr unsigned int Class_2_F60B65E551D51B90_TypeDefinitionIndex = 28893;

class Class_2_F60B65E551D51B90 : public ::Class_1_CF741C7505FDF9F1
{
public:
	static ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>* StaticGet_Field_2_0()
	{
		return (::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F60B65E551D51B90_TypeDefinitionIndex)->GetStaticField(0xD630);
	}
	::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> Field_2_2; // 0x20
	::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> Field_2_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90__CCTOR_OFFSET))();
	}

	::RPG::GameCore::CakeRaceTargetLockStatus Method_2_F7A639EA76D22DAB(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::CakeRaceTargetLockStatus(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_F7A639EA76D22DAB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_22DA29EA763DF7DB(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_22DA29EA763DF7DB_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_B5ED7EF1795E0962* Method_2_693CFB3F872C2BEB(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_1_B5ED7EF1795E0962*(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_693CFB3F872C2BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DAA09F3D3A863683(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::RPG::GameCore::CakeRaceTargetLockStatus a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_DAA09F3D3A863683_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_E49438593C33DE3B(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_E49438593C33DE3B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTargetLockStatus, ::System::Int32>* Method_2_7E1B94876ACF0E2A(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTargetLockStatus, ::System::Int32>*(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_7E1B94876ACF0E2A_OFFSET))(this, a1);
	}

	::Class_1_41D874CCDF2CE0C9_1* Method_2_7289E29DFD3999B5(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> a1)
	{
		return ((::Class_1_41D874CCDF2CE0C9_1*(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_7289E29DFD3999B5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9CC9F3E0C642B5C8(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_3ABA989E5AECB261* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_3ABA989E5AECB261*))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_9CC9F3E0C642B5C8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_7F2F768DC85F0AF5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7F2F768DC85F0AF5*))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8AE88CC79AC0221D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_8AE88CC79AC0221D_OFFSET))(this);
	}

	::System::Boolean Method_2_8AE88CC79AC0221D_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F60B65E551D51B90_METHOD_2_8AE88CC79AC0221D_1_OFFSET))(this);
	}
};
