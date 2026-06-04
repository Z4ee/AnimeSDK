#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightInstanceID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_327;
class Class_1_BBE48024BDD3E027_Class_1_2A2756596B5B28CE;
class Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C;
class Class_1_E4CB20B056222958;
class Class_2_8B82B82888342DD7;
class Class_3_301DB96170A54A53;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9819322A4C7920FF_METHOD_1_0B2919E058A9598D_OFFSET UNITYSDK_OFFSET(0x139C15F0)
#define CLASS_1_9819322A4C7920FF_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x139C1FC0)
#define CLASS_1_9819322A4C7920FF_METHOD_1_1493466AC90C4A7F_OFFSET UNITYSDK_OFFSET(0x139C18D0)
#define CLASS_1_9819322A4C7920FF_METHOD_1_231A86DB4738C48B_OFFSET UNITYSDK_OFFSET(0x139C1F70)
#define CLASS_1_9819322A4C7920FF_METHOD_1_3CE353C3F5ECF29C_OFFSET UNITYSDK_OFFSET(0x139C1260)
#define CLASS_1_9819322A4C7920FF_METHOD_1_5924A1CF4B2442B9_OFFSET UNITYSDK_OFFSET(0x139C1D10)
#define CLASS_1_9819322A4C7920FF_METHOD_1_5F044BDFBB3E0204_OFFSET UNITYSDK_OFFSET(0x139C1380)
#define CLASS_1_9819322A4C7920FF_METHOD_1_8B7C877DE010EF5A_OFFSET UNITYSDK_OFFSET(0x139C1E10)
#define CLASS_1_9819322A4C7920FF_METHOD_1_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x139C1880)
#define CLASS_1_9819322A4C7920FF_METHOD_1_BCC21552423A1881_OFFSET UNITYSDK_OFFSET(0x139C11F0)
#define CLASS_1_9819322A4C7920FF__CTOR_OFFSET UNITYSDK_OFFSET(0x139C0F10)

inline static constexpr unsigned int Class_1_9819322A4C7920FF_TypeDefinitionIndex = 46268;

class Class_1_9819322A4C7920FF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_301DB96170A54A53*>* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_327* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_BBE48024BDD3E027_Class_1_2A2756596B5B28CE*>* Field_1_2; // 0x20
	::Class_2_8B82B82888342DD7* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E4CB20B056222958*>* Field_1_4; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_327* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_327*))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF__CTOR_OFFSET))(this, a1);
	}

	::ScenenLightManager::LightInstanceID Method_1_BCC21552423A1881(::System::Int32 a1)
	{
		return ((::ScenenLightManager::LightInstanceID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF_METHOD_1_BCC21552423A1881_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CE353C3F5ECF29C(::System::Int32 a1, ::System::Int32 a2, ::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_BBE48024BDD3E027_Class_3_AE31F159F362893C*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF_METHOD_1_3CE353C3F5ECF29C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5F044BDFBB3E0204(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF_METHOD_1_5F044BDFBB3E0204_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF_METHOD_1_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_1493466AC90C4A7F(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF_METHOD_1_1493466AC90C4A7F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B2919E058A9598D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF_METHOD_1_0B2919E058A9598D_OFFSET))(this, a1);
	}

	::Class_1_E4CB20B056222958* Method_1_5924A1CF4B2442B9(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::Class_1_E4CB20B056222958*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF_METHOD_1_5924A1CF4B2442B9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8B7C877DE010EF5A(::Class_1_E4CB20B056222958* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF_METHOD_1_8B7C877DE010EF5A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_231A86DB4738C48B(::Class_1_E4CB20B056222958* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF_METHOD_1_231A86DB4738C48B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_1_9819322A4C7920FF_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}
};
