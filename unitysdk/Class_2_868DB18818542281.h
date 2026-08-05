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

class Class_1_A807D7989306A424;
class Class_1_D3B7D4BDDD2DA34D;
namespace System { class String; }

#define CLASS_2_868DB18818542281_METHOD_2_1646823F3AC53076_OFFSET UNITYSDK_OFFSET(0x10D45CA0)
#define CLASS_2_868DB18818542281_METHOD_2_5652AB0E635DB331_OFFSET UNITYSDK_OFFSET(0x10D46650)
#define CLASS_2_868DB18818542281_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x10D468E0)
#define CLASS_2_868DB18818542281_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x10D45740)
#define CLASS_2_868DB18818542281_METHOD_2_765F930F3D4791EE_OFFSET UNITYSDK_OFFSET(0x10D458F0)
#define CLASS_2_868DB18818542281_METHOD_2_8C358ACA27856FE9_OFFSET UNITYSDK_OFFSET(0x10D45C40)
#define CLASS_2_868DB18818542281_METHOD_2_9F50437DC660CB68_OFFSET UNITYSDK_OFFSET(0x10D45A10)
#define CLASS_2_868DB18818542281_METHOD_2_A2C742EA46EA1C2C_OFFSET UNITYSDK_OFFSET(0x10D46920)
#define CLASS_2_868DB18818542281_METHOD_2_A67BC442E9681A33_OFFSET UNITYSDK_OFFSET(0x10D46980)
#define CLASS_2_868DB18818542281_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x10D45B00)
#define CLASS_2_868DB18818542281_METHOD_2_FFB606122479681F_OFFSET UNITYSDK_OFFSET(0x10D467C0)
#define CLASS_2_868DB18818542281__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D44FD0)
#define CLASS_2_868DB18818542281__CTOR_OFFSET UNITYSDK_OFFSET(0x10D45530)

inline static constexpr unsigned int Class_2_868DB18818542281_TypeDefinitionIndex = 71027;

class Class_2_868DB18818542281 : public ::Foundation::Singleton_1<::Class_2_868DB18818542281*>
{
public:
	static ::UnityEngine::Rendering::BitArray256* StaticGet_Field_2_10()
	{
		return (::UnityEngine::Rendering::BitArray256*)Il2CppClass::FromTypeDefinitionIndex(Class_2_868DB18818542281_TypeDefinitionIndex)->GetStaticField(0x11D50);
	}
	::Il2CppArray<::Class_1_A807D7989306A424*>* Field_2_0; // 0x10
	::System::String* Field_2_11; // 0x18
	::Il2CppArray<::System::String*>* Field_2_6; // 0x20
	::System::Int32 Field_2_4; // 0x28
	::System::UInt32 Field_2_5; // 0x2C
	::UnityEngine::Rendering::BitArray256 Field_2_7; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_765F930F3D4791EE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_765F930F3D4791EE_OFFSET))(this);
	}

	::System::Void Method_2_9F50437DC660CB68(::Enum_3_30FE1CE5A1C958A6 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_30FE1CE5A1C958A6, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_9F50437DC660CB68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::String* Method_2_8C358ACA27856FE9(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_8C358ACA27856FE9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1646823F3AC53076(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_1646823F3AC53076_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_62167C28EC14CC63_OFFSET))();
	}

	::System::Void Method_2_5652AB0E635DB331(::System::String* a1, ::UnityEngine::Color a2, ::Enum_3_30FE1CE5A1C958A6 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::Enum_3_30FE1CE5A1C958A6, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_5652AB0E635DB331_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_FFB606122479681F(::Foundation::Unreal::FName a1, ::System::String* a2, ::UnityEngine::Color a3, ::Enum_3_30FE1CE5A1C958A6 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::System::String*, ::UnityEngine::Color, ::Enum_3_30FE1CE5A1C958A6, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_FFB606122479681F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Boolean Method_2_A2C742EA46EA1C2C(::Enum_3_30FE1CE5A1C958A6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_30FE1CE5A1C958A6))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_A2C742EA46EA1C2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A67BC442E9681A33(::Foundation::Unreal::FName a1, ::Enum_3_30FE1CE5A1C958A6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::Enum_3_30FE1CE5A1C958A6))((::PBYTE)hIl2Cpp + CLASS_2_868DB18818542281_METHOD_2_A67BC442E9681A33_OFFSET))(this, a1, a2);
	}
};
