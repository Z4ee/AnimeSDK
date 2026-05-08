#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_30FE1CE5A1C958A6.h"
#include "unitysdk/Foundation/Singleton_1.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/BitArray256.h"

class Class_1_273278230A48923F;
class Class_1_A807D7989306A424;
namespace System { class String; }

#define CLASS_2_F892F01D16479357_METHOD_2_1646823F3AC53076_OFFSET UNITYSDK_OFFSET(0x104622D0)
#define CLASS_2_F892F01D16479357_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x10462110)
#define CLASS_2_F892F01D16479357_METHOD_2_765F930F3D4791EE_OFFSET UNITYSDK_OFFSET(0x104621B0)
#define CLASS_2_F892F01D16479357_METHOD_2_8C358ACA27856FE9_OFFSET UNITYSDK_OFFSET(0x10462150)
#define CLASS_2_F892F01D16479357_METHOD_2_8D68B1A7E8C2FB84_OFFSET UNITYSDK_OFFSET(0x10462EF0)
#define CLASS_2_F892F01D16479357_METHOD_2_9F50437DC660CB68_OFFSET UNITYSDK_OFFSET(0x10462E00)
#define CLASS_2_F892F01D16479357_METHOD_2_A2C742EA46EA1C2C_OFFSET UNITYSDK_OFFSET(0x104620B0)
#define CLASS_2_F892F01D16479357_METHOD_2_A67BC442E9681A33_OFFSET UNITYSDK_OFFSET(0x10463000)
#define CLASS_2_F892F01D16479357_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x104630B0)
#define CLASS_2_F892F01D16479357_METHOD_2_F5C8BEBC0A15D104_OFFSET UNITYSDK_OFFSET(0x10462C90)
#define CLASS_2_F892F01D16479357_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x10461F00)
#define CLASS_2_F892F01D16479357__CCTOR_OFFSET UNITYSDK_OFFSET(0x10461790)
#define CLASS_2_F892F01D16479357__CTOR_OFFSET UNITYSDK_OFFSET(0x10461CF0)

inline static constexpr unsigned int Class_2_F892F01D16479357_TypeDefinitionIndex = 49550;

class Class_2_F892F01D16479357 : public ::Foundation::Singleton_1<::Class_2_F892F01D16479357*>
{
public:
	static ::UnityEngine::Rendering::BitArray256* StaticGet_Field_2_6()
	{
		return (::UnityEngine::Rendering::BitArray256*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F892F01D16479357_TypeDefinitionIndex)->GetStaticField(0x11A60);
	}
	::Il2CppArray<::Class_1_A807D7989306A424*>* Field_2_0; // 0x10
	::Il2CppArray<::System::String*>* Field_2_2; // 0x18
	::System::String* Field_2_5; // 0x20
	::UnityEngine::Rendering::BitArray256 Field_2_1; // 0x28
	::System::UInt32 Field_2_3; // 0x48
	::System::Int32 Field_2_4; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_A2C742EA46EA1C2C(::Enum_3_30FE1CE5A1C958A6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_30FE1CE5A1C958A6))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_A2C742EA46EA1C2C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::String* Method_2_8C358ACA27856FE9(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_8C358ACA27856FE9_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_F7BA13C72A6B3F58_OFFSET))();
	}

	::System::Int32 Method_2_765F930F3D4791EE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_765F930F3D4791EE_OFFSET))(this);
	}

	::System::Void Method_2_1646823F3AC53076(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_1646823F3AC53076_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5C8BEBC0A15D104(::System::String* a1, ::UnityEngine::Color a2, ::Enum_3_30FE1CE5A1C958A6 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::Enum_3_30FE1CE5A1C958A6, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_F5C8BEBC0A15D104_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9F50437DC660CB68(::Enum_3_30FE1CE5A1C958A6 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_30FE1CE5A1C958A6, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_9F50437DC660CB68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D68B1A7E8C2FB84(::Foundation::Unreal::FName a1, ::System::String* a2, ::UnityEngine::Color a3, ::Enum_3_30FE1CE5A1C958A6 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::System::String*, ::UnityEngine::Color, ::Enum_3_30FE1CE5A1C958A6, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_8D68B1A7E8C2FB84_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_A67BC442E9681A33(::Foundation::Unreal::FName a1, ::Enum_3_30FE1CE5A1C958A6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::Enum_3_30FE1CE5A1C958A6))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_A67BC442E9681A33_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F892F01D16479357_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}
};
