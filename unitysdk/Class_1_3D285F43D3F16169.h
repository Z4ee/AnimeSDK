#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightInstanceID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_314;
class Class_1_585FC61876C1A1D5_Class_1_2A2756596B5B28CE;
class Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C;
class Class_1_E4CB20B056222958;
class Class_2_8B82B82888342DD7;
class Class_3_301DB96170A54A53;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3D285F43D3F16169_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x12907CA0)
#define CLASS_1_3D285F43D3F16169_METHOD_1_231A86DB4738C48B_OFFSET UNITYSDK_OFFSET(0x12907C50)
#define CLASS_1_3D285F43D3F16169_METHOD_1_5FCC5CDD83C4E41C_OFFSET UNITYSDK_OFFSET(0x12907070)
#define CLASS_1_3D285F43D3F16169_METHOD_1_6DE8743EAA767CC7_OFFSET UNITYSDK_OFFSET(0x12906F20)
#define CLASS_1_3D285F43D3F16169_METHOD_1_7F07252262946A0E_OFFSET UNITYSDK_OFFSET(0x129075E0)
#define CLASS_1_3D285F43D3F16169_METHOD_1_8B7C877DE010EF5A_OFFSET UNITYSDK_OFFSET(0x12907AF0)
#define CLASS_1_3D285F43D3F16169_METHOD_1_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x12907590)
#define CLASS_1_3D285F43D3F16169_METHOD_1_BCC21552423A1881_OFFSET UNITYSDK_OFFSET(0x12906EB0)
#define CLASS_1_3D285F43D3F16169_METHOD_1_ED6CF54BFD44815E_OFFSET UNITYSDK_OFFSET(0x129072D0)
#define CLASS_1_3D285F43D3F16169_METHOD_1_F592A6B2B7C05FE6_OFFSET UNITYSDK_OFFSET(0x12907980)
#define CLASS_1_3D285F43D3F16169__CTOR_OFFSET UNITYSDK_OFFSET(0x12906C10)

inline static constexpr unsigned int Class_1_3D285F43D3F16169_TypeDefinitionIndex = 45685;

class Class_1_3D285F43D3F16169 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_585FC61876C1A1D5_Class_1_2A2756596B5B28CE*>* Field_1_2; // 0x10
	::Class_0_16E4307DCC419505_314* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E4CB20B056222958*>* Field_1_3; // 0x20
	::Class_2_8B82B82888342DD7* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_301DB96170A54A53*>* Field_1_1; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_314* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_314*))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169__CTOR_OFFSET))(this, a1);
	}

	::ScenenLightManager::LightInstanceID Method_1_BCC21552423A1881(::System::Int32 a1)
	{
		return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169_METHOD_1_BCC21552423A1881_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DE8743EAA767CC7(::System::Int32 a1, ::System::Int32 a2, ::Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_585FC61876C1A1D5_Class_3_AE31F159F362893C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169_METHOD_1_6DE8743EAA767CC7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5FCC5CDD83C4E41C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169_METHOD_1_5FCC5CDD83C4E41C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169_METHOD_1_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_7F07252262946A0E(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169_METHOD_1_7F07252262946A0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED6CF54BFD44815E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169_METHOD_1_ED6CF54BFD44815E_OFFSET))(this, a1);
	}

	::Class_1_E4CB20B056222958* Method_1_F592A6B2B7C05FE6(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Class_1_E4CB20B056222958*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169_METHOD_1_F592A6B2B7C05FE6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8B7C877DE010EF5A(::Class_1_E4CB20B056222958* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169_METHOD_1_8B7C877DE010EF5A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_231A86DB4738C48B(::Class_1_E4CB20B056222958* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169_METHOD_1_231A86DB4738C48B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}
};
