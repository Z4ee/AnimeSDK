#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_739F79CAD2286302_1.h"
#include "unitysdk/Struct_2_74D97E08BFF70A55.h"

class Class_1_303D5A33D1401D59;
class Class_1_A335CFE48265E251;
class Class_1_D70A30D666F20D90;
class Class_2_F73CCCB0631BE1F6;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1D24DFD2162BEA10_METHOD_3_065B0D0120E877EF_OFFSET UNITYSDK_OFFSET(0x16F58C40)
#define CLASS_3_1D24DFD2162BEA10_METHOD_3_1943FA7E230C2956_OFFSET UNITYSDK_OFFSET(0x16F59EC0)
#define CLASS_3_1D24DFD2162BEA10_METHOD_3_34566E7905D6C48F_OFFSET UNITYSDK_OFFSET(0x16F58610)
#define CLASS_3_1D24DFD2162BEA10_METHOD_3_5278E777C15E49B8_OFFSET UNITYSDK_OFFSET(0x16F59740)
#define CLASS_3_1D24DFD2162BEA10_METHOD_3_52FC38C93E8C7B5A_OFFSET UNITYSDK_OFFSET(0x16F58E20)
#define CLASS_3_1D24DFD2162BEA10_METHOD_3_76C14174E094F341_OFFSET UNITYSDK_OFFSET(0x16F59380)
#define CLASS_3_1D24DFD2162BEA10_METHOD_3_80E97E27FBA79A0F_OFFSET UNITYSDK_OFFSET(0x16F59010)
#define CLASS_3_1D24DFD2162BEA10_METHOD_3_884F90D00143DAF8_OFFSET UNITYSDK_OFFSET(0x16F58340)
#define CLASS_3_1D24DFD2162BEA10_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F58C00)
#define CLASS_3_1D24DFD2162BEA10_METHOD_3_CC38D4D49754C698_OFFSET UNITYSDK_OFFSET(0x16F597B0)
#define CLASS_3_1D24DFD2162BEA10_METHOD_3_D875B2D7328A410C_OFFSET UNITYSDK_OFFSET(0x16F591D0)
#define CLASS_3_1D24DFD2162BEA10__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F5A290)
#define CLASS_3_1D24DFD2162BEA10__CTOR_OFFSET UNITYSDK_OFFSET(0x16F58200)

inline static constexpr unsigned int Class_3_1D24DFD2162BEA10_TypeDefinitionIndex = 70588;

class Class_3_1D24DFD2162BEA10 : public ::Class_2_739F79CAD2286302_1
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1D24DFD2162BEA10_TypeDefinitionIndex)->GetStaticField(0x673A0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_F73CCCB0631BE1F6*>* Field_3_1; // 0x28
	::Class_2_F73CCCB0631BE1F6* Field_3_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTagContainer*, ::Class_2_F73CCCB0631BE1F6*>* Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10__CCTOR_OFFSET))();
	}

	::System::Void Method_3_884F90D00143DAF8(::RPG::GameCore::StageVolumeComponentData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_884F90D00143DAF8_OFFSET))(this, a1);
	}

	::System::Void Method_3_34566E7905D6C48F(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_34566E7905D6C48F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_065B0D0120E877EF(::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>*))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_065B0D0120E877EF_OFFSET))(this, a1);
	}

	::System::Void Method_3_80E97E27FBA79A0F(::Struct_2_74D97E08BFF70A55& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_74D97E08BFF70A55&))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_80E97E27FBA79A0F_OFFSET))(this, a1);
	}

	::System::Void Method_3_D875B2D7328A410C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_D875B2D7328A410C_OFFSET))(this);
	}

	::System::Void Method_3_76C14174E094F341(::Class_1_A335CFE48265E251* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A335CFE48265E251*))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_76C14174E094F341_OFFSET))(this, a1);
	}

	::System::Void Method_3_52FC38C93E8C7B5A(::Class_2_F73CCCB0631BE1F6* a1, ::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F73CCCB0631BE1F6*, ::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>*))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_52FC38C93E8C7B5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CC38D4D49754C698(::Class_1_A335CFE48265E251* a1, ::Class_1_A335CFE48265E251* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A335CFE48265E251*, ::Class_1_A335CFE48265E251*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_CC38D4D49754C698_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_1943FA7E230C2956(::Class_1_A335CFE48265E251* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A335CFE48265E251*))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_1943FA7E230C2956_OFFSET))(this, a1);
	}

	::Class_2_F73CCCB0631BE1F6* Method_3_5278E777C15E49B8()
	{
		return ((::Class_2_F73CCCB0631BE1F6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1D24DFD2162BEA10_METHOD_3_5278E777C15E49B8_OFFSET))(this);
	}
};
