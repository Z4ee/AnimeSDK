#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EB156F7324B25C9E.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_53DDAF81FA4D5748;
class Class_2_A3348528EDFA3F39;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CLASS_1_0FB2D49316AB6530_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12976730)
#define CLASS_1_0FB2D49316AB6530_METHOD_1_04B5EDB18FECE00C_OFFSET UNITYSDK_OFFSET(0x129767B0)
#define CLASS_1_0FB2D49316AB6530_METHOD_1_48D7310E1CE3AEF3_OFFSET UNITYSDK_OFFSET(0x12976940)
#define CLASS_1_0FB2D49316AB6530_METHOD_1_70D1AE7DFF486AA7_OFFSET UNITYSDK_OFFSET(0x12977300)
#define CLASS_1_0FB2D49316AB6530_METHOD_1_7597371BEC73B5F2_OFFSET UNITYSDK_OFFSET(0x12976B30)
#define CLASS_1_0FB2D49316AB6530_METHOD_1_C8567BCE4BDCEDE8_OFFSET UNITYSDK_OFFSET(0x12976C30)
#define CLASS_1_0FB2D49316AB6530_METHOD_1_F8944F46439FB83C_OFFSET UNITYSDK_OFFSET(0x12976810)
#define CLASS_1_0FB2D49316AB6530_METHOD_1_FB8733BBF12B5F26_OFFSET UNITYSDK_OFFSET(0x12976F80)
#define CLASS_1_0FB2D49316AB6530__CCTOR_OFFSET UNITYSDK_OFFSET(0x12976770)
#define CLASS_1_0FB2D49316AB6530__CTOR_OFFSET UNITYSDK_OFFSET(0x12976550)

inline static constexpr unsigned int Class_1_0FB2D49316AB6530_TypeDefinitionIndex = 66519;

class Class_1_0FB2D49316AB6530 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0FB2D49316AB6530_TypeDefinitionIndex)->GetStaticField(0x3DB60);
	}
	::System::Collections::Generic::Dictionary_2<::MoleMole::GalGame::GalgameFilterType, ::System::ValueTuple_2<::System::String*, ::System::String*>>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB2D49316AB6530__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0FB2D49316AB6530__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FB2D49316AB6530_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04B5EDB18FECE00C(::Class_1_53DDAF81FA4D5748* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53DDAF81FA4D5748*))((::PBYTE)hIl2Cpp + CLASS_1_0FB2D49316AB6530_METHOD_1_04B5EDB18FECE00C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8944F46439FB83C(::Class_2_A3348528EDFA3F39* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A3348528EDFA3F39*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0FB2D49316AB6530_METHOD_1_F8944F46439FB83C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48D7310E1CE3AEF3(::Enum_3_EB156F7324B25C9E a1, ::UnityEngine::Material*& a2, ::Foundation::AssetRequestHandle& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_EB156F7324B25C9E, ::UnityEngine::Material*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_0FB2D49316AB6530_METHOD_1_48D7310E1CE3AEF3_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_A3348528EDFA3F39* Method_1_C8567BCE4BDCEDE8(::MoleMole::GalGame::GalgameFilterType a1, ::System::String* a2, ::Enum_3_EB156F7324B25C9E a3)
	{
		return ((::Class_2_A3348528EDFA3F39*(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType, ::System::String*, ::Enum_3_EB156F7324B25C9E))((::PBYTE)hIl2Cpp + CLASS_1_0FB2D49316AB6530_METHOD_1_C8567BCE4BDCEDE8_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_53DDAF81FA4D5748* Method_1_70D1AE7DFF486AA7(::MoleMole::GalGame::GalgameFilterType a1)
	{
		return ((::Class_1_53DDAF81FA4D5748*(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType))((::PBYTE)hIl2Cpp + CLASS_1_0FB2D49316AB6530_METHOD_1_70D1AE7DFF486AA7_OFFSET))(this, a1);
	}

	::System::String* Method_1_7597371BEC73B5F2(::Enum_3_EB156F7324B25C9E a1)
	{
		return ((::System::String*(*)(::PVOID, ::Enum_3_EB156F7324B25C9E))((::PBYTE)hIl2Cpp + CLASS_1_0FB2D49316AB6530_METHOD_1_7597371BEC73B5F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_FB8733BBF12B5F26(::MoleMole::GalGame::GalgameFilterType a1, ::UnityEngine::Material*& a2, ::Foundation::AssetRequestHandle& a3, ::UnityEngine::Material*& a4, ::Foundation::AssetRequestHandle& a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType, ::UnityEngine::Material*&, ::Foundation::AssetRequestHandle&, ::UnityEngine::Material*&, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_0FB2D49316AB6530_METHOD_1_FB8733BBF12B5F26_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
