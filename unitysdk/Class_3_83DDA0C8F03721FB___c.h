#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_0DC61513D73BCE61;
class Class_4_BB83D219B093AD9E;
class Class_5_7DE03FFC38B69B91;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_3_83DDA0C8F03721FB___C_METHOD_1_28ECE2B8B05ABDEA_OFFSET UNITYSDK_OFFSET(0xF75A3F0)
#define CLASS_3_83DDA0C8F03721FB___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xF75A3E0)
#define CLASS_3_83DDA0C8F03721FB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF75A390)
#define CLASS_3_83DDA0C8F03721FB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF75A3D0)

inline static constexpr unsigned int Class_3_83DDA0C8F03721FB___c_TypeDefinitionIndex = 76002;

class Class_3_83DDA0C8F03721FB___c : public ::System::Object
{
public:
	static ::Class_3_83DDA0C8F03721FB___c** StaticGet___9()
	{
		return (::Class_3_83DDA0C8F03721FB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_83DDA0C8F03721FB___c_TypeDefinitionIndex)->GetStaticField(0x4B0E0);
	}
	static ::System::Action_3<::Class_4_BB83D219B093AD9E*, ::Class_4_0DC61513D73BCE61*, ::Class_5_7DE03FFC38B69B91*>** StaticGet___9__1_0()
	{
		return (::System::Action_3<::Class_4_BB83D219B093AD9E*, ::Class_4_0DC61513D73BCE61*, ::Class_5_7DE03FFC38B69B91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_83DDA0C8F03721FB___c_TypeDefinitionIndex)->GetStaticField(0x4B0E8);
	}
	static ::System::Action** StaticGet___9__2_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_83DDA0C8F03721FB___c_TypeDefinitionIndex)->GetStaticField(0x4B0F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_83DDA0C8F03721FB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83DDA0C8F03721FB___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83DDA0C8F03721FB___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_28ECE2B8B05ABDEA(::Class_4_BB83D219B093AD9E* a1, ::Class_4_0DC61513D73BCE61* a2, ::Class_5_7DE03FFC38B69B91* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_BB83D219B093AD9E*, ::Class_4_0DC61513D73BCE61*, ::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_3_83DDA0C8F03721FB___C_METHOD_1_28ECE2B8B05ABDEA_OFFSET))(this, a1, a2, a3);
	}
};
