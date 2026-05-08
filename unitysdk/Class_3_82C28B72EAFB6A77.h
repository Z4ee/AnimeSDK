#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_82C28B72EAFB6A77_Enum_3_57926CA561125BF5.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_3_82C28B72EAFB6A77_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12A476E0)
#define CLASS_3_82C28B72EAFB6A77_METHOD_3_26BE7018AAB4BE24_OFFSET UNITYSDK_OFFSET(0x12A47AB0)
#define CLASS_3_82C28B72EAFB6A77_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12A47A60)
#define CLASS_3_82C28B72EAFB6A77_METHOD_3_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x12A47930)
#define CLASS_3_82C28B72EAFB6A77_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12A47DD0)
#define CLASS_3_82C28B72EAFB6A77_METHOD_3_C23D9D9156AFFF83_OFFSET UNITYSDK_OFFSET(0x12A47E60)
#define CLASS_3_82C28B72EAFB6A77_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x12A47D40)
#define CLASS_3_82C28B72EAFB6A77_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x12A479A0)
#define CLASS_3_82C28B72EAFB6A77_METHOD_3_F399439E9132FE68_OFFSET UNITYSDK_OFFSET(0x12A47810)
#define CLASS_3_82C28B72EAFB6A77_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12A47600)
#define CLASS_3_82C28B72EAFB6A77__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A47730)
#define CLASS_3_82C28B72EAFB6A77__CTOR_OFFSET UNITYSDK_OFFSET(0x12A477C0)

inline static constexpr unsigned int Class_3_82C28B72EAFB6A77_TypeDefinitionIndex = 60118;

class Class_3_82C28B72EAFB6A77 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Single* StaticGet_Field_3_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_82C28B72EAFB6A77_TypeDefinitionIndex)->GetStaticField(0xF880);
	}
	// static const ::System::Single Field_3_0; // 0x0
	// static const ::System::Single Field_3_1; // 0x0
	// static const ::System::Int32 Field_3_2 = 0xA; // 0x0
	// static const ::System::Single Field_3_3; // 0x0
	// static const ::System::Single Field_3_4; // 0x0
	// static const ::System::Int32 Field_3_20 = 0x96; // 0x0
	::System::Int32 Field_3_9; // 0x48
	::System::Single Field_3_6; // 0x4C
	::System::Boolean Field_3_12; // 0x50
	::System::Boolean Field_3_15; // 0x51
	::System::Single Field_3_16; // 0x54
	::Class_3_82C28B72EAFB6A77_Enum_3_57926CA561125BF5 Field_3_8; // 0x58
	::System::Single Field_3_10; // 0x5C
	::System::Single Field_3_7; // 0x60
	::UnityEngine::Vector3 Field_3_18; // 0x64
	::UnityEngine::Vector3 Field_3_11; // 0x70
	::UnityEngine::Vector3 Field_3_17; // 0x7C
	::System::Single Field_3_19; // 0x88
	::UnityEngine::Vector3 Field_3_13; // 0x8C
	::System::Single Field_3_14; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_F399439E9132FE68(::Class_3_82C28B72EAFB6A77_Enum_3_57926CA561125BF5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_82C28B72EAFB6A77_Enum_3_57926CA561125BF5))((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77_METHOD_3_F399439E9132FE68_OFFSET))(this, a1);
	}

	::System::Void Method_3_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77_METHOD_3_40E490E2772D5D75_OFFSET))(this, a1);
	}

	static ::Class_3_82C28B72EAFB6A77* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_82C28B72EAFB6A77*(*)())((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_3_26BE7018AAB4BE24(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77_METHOD_3_26BE7018AAB4BE24_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_C23D9D9156AFFF83(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_82C28B72EAFB6A77_METHOD_3_C23D9D9156AFFF83_OFFSET))(this, a1, a2, a3, a4);
	}
};
