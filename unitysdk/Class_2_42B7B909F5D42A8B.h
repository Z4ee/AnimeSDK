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

#define CLASS_2_42B7B909F5D42A8B_METHOD_2_1646823F3AC53076_OFFSET UNITYSDK_OFFSET(0x15466DB0)
#define CLASS_2_42B7B909F5D42A8B_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x15467890)
#define CLASS_2_42B7B909F5D42A8B_METHOD_2_765F930F3D4791EE_OFFSET UNITYSDK_OFFSET(0x15467770)
#define CLASS_2_42B7B909F5D42A8B_METHOD_2_8C358ACA27856FE9_OFFSET UNITYSDK_OFFSET(0x154678D0)
#define CLASS_2_42B7B909F5D42A8B_METHOD_2_8D68B1A7E8C2FB84_OFFSET UNITYSDK_OFFSET(0x15466CA0)
#define CLASS_2_42B7B909F5D42A8B_METHOD_2_9F50437DC660CB68_OFFSET UNITYSDK_OFFSET(0x15467930)
#define CLASS_2_42B7B909F5D42A8B_METHOD_2_A2C742EA46EA1C2C_OFFSET UNITYSDK_OFFSET(0x15466990)
#define CLASS_2_42B7B909F5D42A8B_METHOD_2_A67BC442E9681A33_OFFSET UNITYSDK_OFFSET(0x154668E0)
#define CLASS_2_42B7B909F5D42A8B_METHOD_2_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x15466B60)
#define CLASS_2_42B7B909F5D42A8B_METHOD_2_F5C8BEBC0A15D104_OFFSET UNITYSDK_OFFSET(0x154669F0)
#define CLASS_2_42B7B909F5D42A8B_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x15466730)
#define CLASS_2_42B7B909F5D42A8B__CCTOR_OFFSET UNITYSDK_OFFSET(0x15465FC0)
#define CLASS_2_42B7B909F5D42A8B__CTOR_OFFSET UNITYSDK_OFFSET(0x15466520)

inline static constexpr unsigned int Class_2_42B7B909F5D42A8B_TypeDefinitionIndex = 79749;

class Class_2_42B7B909F5D42A8B : public ::Foundation::Singleton_1<::Class_2_42B7B909F5D42A8B*>
{
public:
	static ::UnityEngine::Rendering::BitArray256* StaticGet_Field_2_6()
	{
		return (::UnityEngine::Rendering::BitArray256*)Il2CppClass::FromTypeDefinitionIndex(Class_2_42B7B909F5D42A8B_TypeDefinitionIndex)->GetStaticField(0xF080);
	}
	::System::String* Field_2_5; // 0x10
	::Il2CppArray<::Class_1_A807D7989306A424*>* Field_2_0; // 0x18
	::Il2CppArray<::System::String*>* Field_2_2; // 0x20
	::System::Int32 Field_2_4; // 0x28
	::System::UInt32 Field_2_3; // 0x2C
	::UnityEngine::Rendering::BitArray256 Field_2_1; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A67BC442E9681A33(::Foundation::Unreal::FName a1, ::Enum_3_30FE1CE5A1C958A6 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::Enum_3_30FE1CE5A1C958A6))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_A67BC442E9681A33_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_F7BA13C72A6B3F58_OFFSET))();
	}

	::System::Boolean Method_2_A2C742EA46EA1C2C(::Enum_3_30FE1CE5A1C958A6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_30FE1CE5A1C958A6))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_A2C742EA46EA1C2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5C8BEBC0A15D104(::System::String* a1, ::UnityEngine::Color a2, ::Enum_3_30FE1CE5A1C958A6 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::Enum_3_30FE1CE5A1C958A6, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_F5C8BEBC0A15D104_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D68B1A7E8C2FB84(::Foundation::Unreal::FName a1, ::System::String* a2, ::UnityEngine::Color a3, ::Enum_3_30FE1CE5A1C958A6 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::System::String*, ::UnityEngine::Color, ::Enum_3_30FE1CE5A1C958A6, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_8D68B1A7E8C2FB84_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_1646823F3AC53076(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_1646823F3AC53076_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_765F930F3D4791EE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_765F930F3D4791EE_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::String* Method_2_8C358ACA27856FE9(::System::Boolean a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_8C358ACA27856FE9_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F50437DC660CB68(::Enum_3_30FE1CE5A1C958A6 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_30FE1CE5A1C958A6, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_42B7B909F5D42A8B_METHOD_2_9F50437DC660CB68_OFFSET))(this, a1, a2);
	}
};
